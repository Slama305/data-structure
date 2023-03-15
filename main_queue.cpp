#include <iostream>
#define max 100
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(){
			data=0;
			next=NULL;
		}
};
class queue{
	public:
		node *front ,*rear;
	
		queue(){
			front =rear =NULL;
		}
		void enqueue(int d){
			node *p= new node();
			p->data=d;
			if(front==NULL){
				front=rear=p;
			}
			else{
			    rear->next=p;
			   // p->next=NULL;
				rear=p;	
				
			}
			
		}
		void print(){
			node* p=front;
			if(front==NULL){
				cout<<"queue is empty.."<<endl;
			}
			else{
				while(p!=rear->next){
					cout<<p->data<<"  ";
					p=p->next;
				}
				cout<<endl;
			}
		}
		int dequeue(){
			node *p=front;
			if(front==NULL){
				cout<<" queue is empty.."<<endl;
			}
			else{
				front=front->next;
				delete p;
			}
		}	
};
int main(int argc, char** argv) {
	queue q;
	q.enqueue(34);
	q.enqueue(33);
	q.enqueue(32);
	q.enqueue(31);
	q.enqueue(30);
	q.print();
	q.dequeue();
	q.print();
	return 0;
}