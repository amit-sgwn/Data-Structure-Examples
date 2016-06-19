#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>

/*  Author Amit Sangwan 
	Copyright 2016
	linked list file to create some operation on dym=namic memory allocation like insertion,travel
	search and deleted element from the linked list
*/

struct node{
	int data;
	struct node *next;
};

void Insert(void);
int Search(int);
void display(void);
void travel(void);
void Delete(int);
typedef struct node NODE;

NODE *HEAD=NULL;
void display(void);
int main(){
	NODE *temp;
	int data;
	int p=1,choice,val;
	while(p){
		display();
		scanf("%d",&choice);
		switch(choice){
			case 1:
				Insert();
				break;
			case 2:
				travel();
				break;
			case 3:
				printf("Enter value to find\n");
				scanf("%d",&val);
				Search(val);
				break;
			case 4:
				printf("Enter value to find\n");
				scanf("%d",&val);
				Delete(val);
				break;
			case 5:
				exit(1);
				
		}
		printf("\n-----------------Press 1 to continue...\n\n");
		scanf("%d",&p);
	}
	
	
}

void display(){
	printf("\t\t---------------------------------------------\n\n");
	printf("\t\t\tEnter your choice\n");
	printf("\t\t\t1. Insert new Element\n\t\t\t2. Display list\n\t\t\t3. Search an element\n\t\t\t4. Delete an element\n\t\t\t5.Exit\n\n");
	printf("\t\t---------------------------------------------\n\n");

}
/* this function add new element to the 
   lined list
*/

void Insert(){
	NODE *temp,*p;
	if(HEAD==NULL){
		temp=(NODE *)malloc(sizeof(NODE));
		printf("Adding head....\nEnter data for head \n");
		scanf("%d",&temp->data);
		HEAD=temp;
		HEAD->next=NULL;
	}
	else{
		temp=HEAD;
		while(temp->next !=NULL){
			temp = temp->next;
		}
		p =(NODE *) malloc(sizeof(NODE));
		printf("Enter data for new Node\n");
		scanf("%d",&p->data);
		p->next = NULL;
		temp->next = p;
		temp = p;
		temp->next = NULL;
		printf("inserted %d\n",temp->data);
	}
}

void travel(){
	NODE *temp;
	temp=HEAD;
	int l=0;
	while(temp!=NULL){
		printf("%d  element is %d\n",l,temp->data);
		temp = temp->next;
		l++;
	}
	printf("Length of the linked list is %d\n",l);
}

int Search(int l){
	NODE *temp;
	temp = HEAD;
	int flag=0;
	while(temp!=NULL){
		if(temp->data==l){
			flag=1;
			break;
		}
		temp = temp->next;
	}
	if(flag){
		printf("Element found\n");
		return 1;
	}
	else
		printf("Sorry!! Element not found\n");
	return 0;
}

void Delete(int key){
	NODE *temp,*p,*q;
	temp = HEAD;
	int f = Search(key);
	while(temp->data!=key){
		p=temp;
		temp = temp->next;
	}
	q=temp->next;
	if(q==NULL)
		p->next=NULL;
	else
		p->next=q;
	//temp->next = temp->next->next;
	if(f)
		printf("-------Element removed----------- \n");
	else
		printf("Element not found");		
}
