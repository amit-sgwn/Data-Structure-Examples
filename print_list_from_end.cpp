#include <iostream>
#include<malloc.h>
using namespace std;

struct list{
	int val;
	struct list *next;
};

void insert_at_end(struct list **head,int data){
		struct list *p,*newnode,*q;
		newnode = (struct list *)malloc(sizeof(struct list));
		if(!newnode){
			 cout << "Memory Error" << endl;
			return ;
		}
		newnode->val =data;
		p=*head;
		q=p;
		if(p==NULL){
			newnode->next=*head;
			*head=newnode;
		}
		else{
			while(p!=NULL){
				q=p;
				
				p=p->next;
			}
			q->next = newnode;
		}
}

void print_list_from_end(struct list *head){
	if(head==NULL)
		return ;
	print_list_from_end(head->next);
	cout << head->val << endl;
	return ;
}
int main(){
	struct list *head=NULL;
	int i,j;
	for(i=0;i<100;i++){
		insert_at_end(&head,i);
	}
	print_list_from_end(head);
	}	
