#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void append();

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
