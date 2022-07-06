/*queue using array*/

#include <stdio.h>
#include<stdlib.h>
#define N 100

int front = 0;
int rear = 0;
int q[N];

void insert()
{
    int item;
    if(rear==N){
    	printf("overflow\n");}
    else{
        if(front==0){
        printf("Insert element: ");
        scanf("%d", &item);
        q[rear]=item;
        rear=rear + 1;}
   }
}

void delete(){
    if(front==rear){
        printf("underflow\n");}
    else{
        printf("The element dequeued is: %d\n", q[front]);
        front = front + 1;}
}

void display(){
    if(front==rear){
        printf("empty array\n");}
    else{
        printf("displaying elements:\n");
	  for(int i=front; i < rear; i++)
            printf("%d\t", q[i]);
    }
    printf("\n");
}

void main(){
    int ch;
    printf("\nMENU\n");
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Display\n");
    printf("4.Exit\n");

    while(1)
    {
    printf("Enter choice: ");
    scanf("%d", &ch);
    switch(ch){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exited");
                exit(0);
            default:
                printf("Error,wrong input\n");
        }
    }
}

  
