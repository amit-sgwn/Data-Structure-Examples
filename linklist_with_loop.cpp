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

void display(struct list *tmp){
	while(tmp!=NULL){
 		cout << tmp->val << endl;
		tmp = tmp->next;
	}
	return ;
}
void create_loop(struct list *tmp){
	int i=0;
	struct list *temp,*p;
	while(tmp!=NULL){
		i++;
 		cout << tmp->val << endl;
 		if(i==20)
 			temp=tmp;
 		p=tmp;
		tmp = tmp->next;
	}
	p->next = temp;
	return ;
}

void detect_loop(struct list *head){
	struct list *slow,*fast;
	int l=0;
	slow= fast= head;
	while(fast->next!=NULL && fast->next->next!=NULL){
	slow = slow->next;
	fast = fast->next->next;
	if(slow==fast){
		l=1;
		break;
	}
	}
	if(l)
		cout << "Loop exits "<< slow->val << endl;
	else 
		cout << "No loop" << endl;
	return ;
}

int main(){
	struct list *head=NULL;
	int i,j;
	for(i=0;i<100;i++){
		insert_at_end(&head,i);
		//cout << i << endl;
	}
	display(head);
	detect_loop(head);
	create_loop(head);
	detect_loop(head);
	//display(head);
	}	
