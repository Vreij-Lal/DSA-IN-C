#include <stdio.h>
#include <stdlib.h>

#define CAPACITY = 5

int queue[CAPACITY];

int front = 0;
int rear = 0;

void insert();
void pop();
void traverse();

void main(){

}

void insert(){
    if(CAPACITY == rear){
        printf("Queue is full");
    }
    else{
        int ele,
        printf("insert element:");
        scanf("%d", &ele);
        queue[rear] = ele;
        rear++;
    }
}
