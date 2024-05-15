#include <stdio.h>
#include <stdlib.h>

//function prototypes
void push();
void pop();
void traverse();

//linked list definition
struct node {
    int data;
    struct node* link;
};

//global linked list root variable
struct node* top = NULL;

void main(){

}

void push(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter value:");
    scanf("%d", &temp -> data);
    temp -> link = top;
    top = temp;
}

void pop(){
    struct node* temp;
    if(temp == NULL){
        printf("no elements in the stack\n");
    }
    else{
        temp = top;
        top = top -> link;
        temp -> link = NULL;
        free(temp);
    }
}

void traverse(){
    struct node *temp;
    if(top == NULL){
        printf("no elements to traverse");
    }
    else{
        temp = top;
        while (temp != NULL){
            printf("%d", temp -> data);
            temp = temp -> link;
        }
    }
}
