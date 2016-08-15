#include<iostream>
#include<malloc.h>

using namespace std;

struct dll{
	int val;
	struct dll *next,*prev;
};

void insert(struct dll **head,int data){
	struct dll *temp,*p,*q;
	temp = (struct dll *)malloc(sizeof(struct dll));
	temp->val = data;
	if(!temp){
		cout << "Memory Error" << endl;
		return;
	}
	p=*head;
	q=p;
	if(p==NULL){
	temp->next = p;
	temp->prev = NULL;
	*head =temp;
	}
	else{
		while(p->next!=NULL){
			p=p->next;
			}
		p->next = temp;
		temp->prev = p;
		}
}
void display(struct dll *head){
	while(head!=NULL){
	cout << head->val << endl;;
	head = head->next;
	}
	return ;
}
int del(struct dll **head,int key){
	struct dll *p;
	p=*head;
	if(*head==NULL){
		cout << "List is Empty" << endl;
		return 0;
	}
	else{
		while(p!=NULL && p->val!=key){
		p=p->next;
	}
	p->prev->next = p->next;
	p->next->prev = p->prev;
	free(p);
	return 0;
	}	 
	}
int main(){
	struct dll *head=NULL;
	int i,j;
	for(i=0;i<10;i++){
		insert(&head,i);
		//cout << i << endl;
	}
	display(head);
	del(&head,5);
	//cout << "After deleting an element " << endl;
	display(head);		
	return 0;
	}
