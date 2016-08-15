#include<malloc.h>
#include<iostream>

using namespace std;

struct clist{
	int val;
	struct clist *next,*prev;
};

void insert(struct clist **head,int data){
	struct clist *p,*newnode;
	newnode = (struct clist *)malloc(sizeof(struct clist));
	newnode->val = data;	
	if(!newnode){
		cout << "Memory Error" << endl;
		return;
	}
	p=*head;
	if(p==NULL){
		*head = newnode;
		return ;
	}
	else{
		while(p->next!=*head && p->next!=NULL)
			p=p->next;
		newnode->next=*head;
		p->next=newnode;
		return;
	}
}
void display(struct clist *head){
	struct clist *p;
	if(head!=NULL)
		cout << head->val << endl;
	p=head->next;
	while(p!=head){
		cout << p->val << endl;
		p=p->next;
	}
	return;
	}

int main(){
	struct clist *head=NULL;
	int i,j;
	for(i=0;i<10;i++){
		insert(&head,i);
		//cout << i << endl;
	}
	display(head);
	//del(&head,5);
	//cout << "After deleting an element " << endl;
	//display(head);
	}	
