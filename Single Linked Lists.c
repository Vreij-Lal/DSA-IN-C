#include <stdio.h>
#include <stdlib.h>

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

