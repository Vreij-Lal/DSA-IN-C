#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 5
int stack[CAPACITY];
int top=-1;

//function Prototypes
void push(int);
int isFull();
void traverse();
int isEmpty();
void peek();
void pop();

void main()
{
    int choice;
    while(1){

        printf("1_Push\n");
        printf("2_Traverse\n");
        printf("3_Pop\n");
        printf("4_Peek\n");
        scanf("%d", &choice);
        system("cls");
        if(choice == 1){
            system("cls");
            int value;
            printf("enter Value: ");
            scanf("%d", &value);
            push(value);
        }
        if(choice == 2){
            system("cls");
            traverse();
        }
        if(choice == 3){
            system("cls");
            pop();
        }
        if(choice == 4){
            system("cls");
            peek();
        }
        if(choice != 1 && choice != 2 && choice != 3 && choice != 4){
            printf("invalid choice\n");
        }
    system("cls");
    }

}

//to push a value into the stack.
void push(int value){
    if (isFull()){
        printf("stack overflow\n");
    }
    else{
        top++;
        stack[top] = value;
    }
}

//to check if stack is full or not.
int isFull(){
    if(top == (CAPACITY - 1)){
        return 1;
    }
    else{
        return 0;
    }
}

//to check if stack is empty or not.
int isEmpty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

//to display all the values in the stack
void traverse(){
    if(isEmpty()){
        printf("stack is empty\n");
    }
    else{
        for(int i = 0; i <= top; i++){
            printf("%d\n", stack[i]);
        }
    }
}

//to display the top element
void peek(){
	if(isEmpty()){
		printf("stack is empty\n");
	}
	else{
		printf("%d\n", stack[top]);
	}
}

//to remove the top element
void pop(){
    if(isEmpty()){
        printf("stack underflow\n");
    }
    else{
        top--;
        printf("element removed\n");
    }
}
