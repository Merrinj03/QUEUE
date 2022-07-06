/*queue using linked list*/
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;};
struct node *front = NULL;
struct node *rear = NULL;

void insert(int value){
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data = value;
	ptr->next = NULL;
	if ((front == NULL) && (rear == NULL)){
		front = rear = ptr;} \
	else{
		rear->next = ptr;
		rear = ptr;}
	printf("\nINSERTED\n");}

void delete(){
	if (front == NULL) {
		printf("\nUnderflow\n");}
	else{
		struct node *temp = front;
		int temp_data = front->data;
		front = front->next;
		free(temp);}
}

void display(){
	struct node *temp;
	if ((front == NULL) && (rear == NULL)) {
		printf("\nEMPTY\n");}
	else{
		printf("The queue elements are:  \n");
		temp = front;
		while (temp) {
			printf("%d\t", temp->data);
			temp = temp->next;}
	    }
}

void main() {
	int ch,entry;
	printf("\nMENU\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
	while (1) {
		printf("\nEnter your choice : ");
		scanf("%d", &ch);
		switch (ch) {
		case 1:
			printf("\nEnter value: ");
			scanf("%d", &entry);
			insert(entry);
			break;
		case 2:
			printf("\nDELETED\n");
			delete();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("\nExited\n");
			exit(0);
			break;
		default:
			printf("\nError,wrong input\n");
		}
	}
}

