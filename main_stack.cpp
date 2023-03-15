#include <iostream>
#define max 100
using namespace std;
class stack{
	int top;
	int data[max];
	public:
		stack(){
			top=-1;
		}
		int isempty(){
			if(top==-1){
				cout<<"stack is empty.."<<endl;
			}
		}
		void push(int d){
			if(top==max-1){
				cout<<"stack overflow.."<<endl;
			}
			else
			  data[++top]=d;
		}
		int pop(){
			if(top==-1){
				cout<<"stack underflow..";
			}
			else{
			    int x=data[top];
			   	top--;
			      	cout<<x<<endl;
			}
		
		}
		void cleer(){
			while(top==-1){
				top--;
			}
		}
		int topelement(){
			if(top==-1){
				cout<<"stack underflow.."<<endl;
			}
			else
			   cout<<data[top]<<endl;
		}
		void print(){
			for(int i=top ; i>=0 ; i--){
				cout<<data[i]<<"  ";
			}
			cout<<endl;
		}
		int search(int x){
			int cont=0;
			for(int i=top ; i>=0 ;i--){
				if(data[i]==x){
				   cout<<cont<<endl;	
				}
				else
				    cont++;
			}
			
		}
		
		
		
		
		
		
		
		
		
};


int main(int argc, char** argv) {
	stack s;
	s.push(12);
		s.push(17);
			s.push(56);
				s.push(98);
					s.push(72);
	s.print();
	s.pop();
	s.print();
	s.search(12);
	s.topelement();
	s.cleer();
	s.print();
	
	return 0;
}