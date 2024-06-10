#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void append();
int length();

void main(){

}

void append(){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter value");
    scanf("%d", &temp -> data);
    temp->left = NULL;
    temp->right = NULL;
    if(root == NULL){
        root = temp;
    }
    else{
        struct node *p;
        p = root;
        while(p->right != NULL){
            p = p -> right;
        }
        p -> right = temp;
        temp -> left = p;
    }
}

int length(){
    int count = 0;
    struct node *temp;
    temp = root;
    while(temp->right != NULL){
        temp = temp->right;
        count++;
    }
    return count;
}

void display(){
    struct node *temp;
    temp = root;
    if(temp == NULL){
        printf("Stack is empty");
    }
    else{
        while(temp -> right != NULL){
        printf("%d", temp -> data);
        temp = temp -> right;
        }   
    } 
}

void appendAtStart(){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter value:");
    scanf("%d", &temp -> data);
    temp -> right = NULL;
    temp -> left == NULL;
    if(root == NULL){
        root = temp;
    }
    else{
        temp -> right = root;
        root -> left = temp;
        root = temp;
    }
}

void appendAfter(){
    int len, position, i = 1;
    struct node *temp, *p;
    len = length();
    printf("enter number of postition to add after:");
    scanf("%d", &position);
    if(position > len){
        printf("invalid position");
    }
    else{
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter value");
        scanf("%d", &temp->data);
        temp -> left = NULL;
        temp -> right = NULL;
        p = root;
        while(i < position){
            p = p -> right;
            i++;
        }
        temp -> right = p -> right;
        p -> right -> left = temp;
        temp -> left = p;
        p -> right = temp;
    }
}