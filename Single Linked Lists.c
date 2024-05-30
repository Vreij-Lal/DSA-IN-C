#include <stdio.h>
#include <stdlib.h>

void append();
int length();
void addAtStart();
void addAfter();
void del();
void reverse();

//linked list definition
struct node {
    int data;
    struct node* link;
};

//global linked list root variable
struct node* root = NULL;


//main function
void main(){

    int choice;

    while (1){

        printf("single linked list Operations\n");
        printf("1.Append\n");
        printf("2.AddAtStart\n");
        printf("3.AddAfter\n");
        printf("4.length\n");
        printf("5.Display\n");
        printf("6.Delete\n");
        printf("7.Quit\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                system("cls");
                append();
                break;
            case 2:
                system("cls");
                addAtStart();
                break;
            case 3:
                system("cls");
                addAfter();
                break;
            case 4:
                system("cls");
                printf("%d\n", length());
                break;
            case 5:
                system("cls");
                display();
                break;
            case 6:
                system("cls");
                del();
                break;
            case 7:
                exit(1);
            default:
                system("cls");
                printf("invalid choice");
                break;
        }

    }
}

void append(){
    struct node *temp, *p;
    temp = (struct node*)malloc(sizeof(struct node));
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
    while(p != NULL){
        p = p -> link;
        i++;
    }
    return i;
}

void addAtStart(){
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

void addAfter(){
    struct node *temp, *p;
    int loc, i = 1;
    printf("enter location:");
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
        printf("enter value: ");
        scanf("%d", &temp -> data);
        temp -> link = NULL;
        temp -> link = p -> link;
        p -> link = temp;
    }

}

void display(){
    if(root == NULL){
        printf("list is empty\n");
    }
    else{
        struct node *p;
        p = root;
        while(p != NULL){
            printf("%d\n", p -> data);
            p = p -> link;
        }
    }

}

void del(){
    int loc;
    printf("enter location: ");
    scanf("%d", &loc);

    if(loc > length()){
        printf("invalid location\n");
    }

    if(loc == 1){
        struct node *p;
        p = root;
        root = p -> link;
        p -> link = NULL;
        free(p);
    }
    else{
        struct node *temp, *q;
        int i = 1;
        temp = root;
        while(i < loc - 1){
            temp = temp -> link;
            i++;
        }
        q = temp -> link;
        temp -> link = q -> link;
        q -> link = NULL;
        free(q);

    }
}
