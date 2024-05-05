#include <stdio.h>
#include <stdlib.h>

void append();
int length();
void AddAtStart();
void AddAfter();

//linked list definition
struct node {
    int data;
    struct node* link;
};

//global linked list root variable
struct node* root = NULL;


//main function
void main(){
    printf("single linked list Operations\n");
    printf("1.Append\n");
    printf("2.AddAtStart");
    printf("3.AddAfter\n");
    printf("4.length\n");
    printf("5.Display\n");
    printf("6.Delete\n");
    printf("7.Quit\n");
}

void append(){
    struct node *temp *p;
    temp = (struct node*)mallco(sizeof(struct node));
    printf("enter element number: ");
    scanf("%d", &temp -> data);
    temp -> link = NULL;
    if(root == NULL){
        root = temp;
    }
    else{
        p = root;
        while(p -> link != NULL){
            p = p -> link;
        }
        p -> link = temp;
    }

}

int length(){
    int i = 0;
    struct node *p;
    p = root;
    while(p != null){
        p = p -> link;
        i++;
    }
    return i;
}

void AddAtStart(){
    struct node * temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("enter value:");
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

void AddAfter(){
    struct node *temp, *p;
    int loc, i = 1;
    printf("enter location:\n");
    scanf("%d", &loc);
    if(loc > length()){
        printf("invalid location\n");
    }
    else{
        p = root;
        while(i < loc){
            p = p -> link;
            i++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        printf("enter value:\n");
        scanf("%d", &temp -> data);
        temp -> link = NULL;
        temp -> link = p -> link;
        p -> link = temp;
    }

}

void display(){
    if(root == NULL){
        printf("list is empty");
    }
    else{
        struct node *p;
        p = root;
        while(p != NULL){
            printf("%d", p -> data);
            p = p -> link;
        }
    }

}
