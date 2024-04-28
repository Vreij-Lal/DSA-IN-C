#include <stdio.h>
#include <stdlib.h>

//function prototypes
void append();
int length();
void appendAtStart();
void appendAfter();
void deleteNode();
void swap ();

//linked list definition
struct node {
    int data;
    struct node* link;
};

//global linked list root variable
struct node* root = NULL;


//main function
void main(){

}

//appends a node to the linked list
void append(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d", &temp -> data);
    temp -> link = NULL;
    if(root == NULL){
        root = temp;
    }
    else{
        struct node* p;
        p = root;
        while(p -> link != NULL){
            p = p -> link;
        }
        p -> link = temp;
    }
}

int length(){
    int count = 0;
    struct node* temp;
    temp = root;
    while(temp != NULL){
        temp = temp -> link;
    }
    return count;
}

void appendAtStart(){
    struct node* temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d", &temp -> data);
    temp -> link = NULL;
    if(root == NULL){
        root = temp;
    }
    else{
        temp -> link = root;
        root = temp;
    }
}

void appendAfter(){
    struct node* temp, *p;
    int loc, len, i = 1;
    printf("Enter Location: ");
    scanf("%d", &loc);
    len = length();
    if(loc > len){
        printf("Invalid Location \n");
    }
    else{
        p = root;
        while (i < loc){
            p = p -> link;
            i++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        temp -> link = p -> link;
        p -> link = temp;
    }
}

void deleteNode(){
    struct node *temp;
    int loc;
    printf("enter location to delete: ");
    scanf("%d", &loc);
    if(loc > length()){
        printf("Invalid Location");
    }
    else if (loc == 1){
        temp = root;
        root = temp -> link;
        temp -> link = NULL;
        free(temp);
    }
    else{
        struct node * p = root, *q;
        int i = 1;
        while(i < loc - 1){
            p = p -> link;
            i++;
        }
        q = p -> link;
        p -> link = q -> link;
        q -> link = NULL;
        free(q);
    }
}

void swap(void)
{
    struct node* p,*q,*r;
    int loc,i=1;

    printf("Enter location: ");
    scanf("%d",&loc);
    if(loc>length())
    {
        printf("invalid input\n\n");
    }
    else
    {
        p=root;
        while(i<loc-1)
        {
            p=p->link;
            i++;
        }
        q=p->link;
        r=q->link;
    }
    q->link=r->link;
    r->link=q;
    p->link=r;

}
