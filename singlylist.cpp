#include <iostream>
#include<malloc.h>
using namespace std;

struct list{
	int val;
	struct list *next;
};
struct list *reverse(struct list *head){
	struct list *prev,*current,*next;
	prev = NULL;
	current =head;
	next = head->next;
	while(next){
		current->next = prev;
		prev = current;
		current = next;
		next = next->next;
	}
	current->next = prev;
	return current;
}
struct list *reverse_recur(struct list *head){

	struct list * temp;
	if(head->next!=NULL){
		temp = reverse_recur(head->next);
		temp->next=head;
		return temp;
	}
	else
		return head;
}//creating a circular linked list

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

void display(struct list *tmp){
	while(tmp!=NULL){
 		cout << tmp->val << endl;
		tmp = tmp->next;
	}
	return ;
}
int del(struct list **head,int data){
	struct list *p,*q;
	p=*head;
	q=p;
	while(p!=NULL && p->val != data){
		q=p;
		p=p->next;
	}
	q->next = p->next;
	free(p);
	return 0;
	}



int main(){
	struct list *head=NULL;
	int i,j;
	for(i=0;i<10;i++){
		insert_at_end(&head,i);
		//cout << i << endl;
	}
	display(head);
	//del(&head,5);
	head = reverse(head);
	cout << "After deleting an element " << endl;
	display(head);
	head = reverse_recur(head);
	display(head);
	}	
