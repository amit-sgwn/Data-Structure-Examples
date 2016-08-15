#include<iostram>

using namespace std;
struct tree{
	int val;
	struct tree *left,*right;
}
void insert(struct tree **root,int data);
int main(){
	struct tree **root;
	insert(*root,13);
	insert(*root,11);
	insert(*root,15);
	insert(*root,10);
}
void insert(struct tree **root,int data){
	struct tree *temp,*temp2;
	if(!*root){
		root=(struct tree *)malloc(sizeof(struct tree));
		root->val=data;
		return ;
	}
	temp=*root;
	while(temp){
		temp2=temp;
		if(root->val > data)
		       temp=temp->left;
		else
			temp=temp->right;
	}
	


