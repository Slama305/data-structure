#include <iostream>
using namespace std;
class node{
	public:
	int data;
	node* left, *right;
	node(){
	  data=0;
	  left=NULL;
	  right=NULL;	
	}
};
class bst{
	private:
	node*root;
public:
	bst(){
		root=NULL;
	}
	void add(int d){
		node *p=new node;
		p->data=d;
		if (root ==NULL){
			root=p;
			return;
		}
		node* t=root ,*prev=NULL;
		while(t!=NULL){
			prev=t;
			if(d>=t->data){
			  t=t->right;	
			}
			else{
		      t=t->left;
			}
		}
		if(d>=prev->data){
			prev->right=p;
		}
		else{
			prev->left=p;
		}
	}
	
	
};
int main(int argc, char** argv) {
	
	return 0;
}