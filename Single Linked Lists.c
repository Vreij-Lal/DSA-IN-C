#include <stdio.h>
#include <stdlib.h>

void append();

void main(){

struct node {
    int data;
    struct node* link;
};


struct node* root = NULL;
}

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

