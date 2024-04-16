#include <stdio.h>
#include <stdlib.h>

//function prototypes
void append();
int length();
void appendAtStart();

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
