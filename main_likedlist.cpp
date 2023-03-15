#include <iostream>
using namespace std;
class node{
	public:
		int info;
		node *next;
};
class list{
	private:
		node *head;
	public:
		list(){
			head=NULL;
		}
		void addtohead(int data){
			node *p=new node;
			p->info=data;
			p->next=head;
			head=p;
		}
		void addtotail(int d){
			node *p=new node;
		    	p->info=d;
		     	p->next=NULL;
			if(head==NULL){
				head=p;
				//return;
			}
			else{
			    node *q;
			    q=head;
				while(q->next!=NULL){
					q=q->next;
				}
				q->next=p;	
			}
		}
		void print(){
			if(head==NULL){
				cout<<"linked list is empty....!";
			}
			else{
				node *p=head;
				while(p!=NULL){
					cout<<p->info<<"  ";
					p=p->next;
				}
			}
		}
		void delfromhead(){
			if(head==NULL){
				return;
			}
			else{
				node *p=head;
				head=head->next;
				delete p;
			}
		}
		void delfromtail(){
			if(head==NULL){
				return;
			}
			else if(head->next==NULL){
				node *p=head;
				delete p;
				head=NULL;
			}
			else{
			    node *q=head ,*k=head;
			    while(q->next!=NULL){
			    	k=q;
			    	q=q->next;
				}
				delete q;
				k->next=NULL;
					
			}
		}
		void addbefore(int x,int z){
			node *p=new node;
			p->info=x;
			node *q =head;
			while(q!=NULL&&q->next->info!=z){
				
					q=q->next;
				}
			p->next=q->next;
			q->next=p;
			
		}
		void cont(){
			node *p=head;
			int c=0;
			while(p!=NULL){
				c+=1;
				p=p->next;
			}
			cout<<c<<endl;
		}
		void fond(int n){
		    node *p=head;
			int c=1;
			while(p!=NULL&&p->info!=n){
				c+=1;
				p=p->next;
			}
			cout<<n<<" is number "<<c;	
		}
		void sumodd(){
			node *p=head;
			int sum=0;
			while(p!=NULL){
			   if(p->info%2==0){
			   	sum+=p->info;
			   }
			   p=p->next;	
			}
			cout<<sum<<endl;
			
		
		}
		void min(){
			node *p=head;
			int mini=0;
			mini=p->info;
			while(p->next!=NULL){
				
				if(p->info>mini){
					mini=p->info;
				}
				p=p->next;
			}
			cout<<" min =  "<<mini<<endl;
		}
		
};
int main(int argc, char** argv) {
	list l;
	l.addtohead(44);
	l.addtohead(34);
	l.addtohead(234);
	l.addtotail(99);
   l.sumodd();
   l.min();
	l.cont();
	l.print();
	cout<<endl;
	l.fond(87);
	cout<<endl;
	l.delfromhead();
	l.print();
//	l.delfromtail();
	cout<<endl;
//	l.delfromhead();
   // l.addbefore(3,34);
   l.cont();
//	l.print();
	return 0;
}