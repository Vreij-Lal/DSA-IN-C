#include <stdio.h>
#include <stdlib.h>

//function prototypes
void push();

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
