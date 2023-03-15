#include <iostream>
using namespace std;
int fip(int n)
{
  if(n==0 || n==1)
    return n;
  else
  {
  	return fip(n-1)+fip(n-2);
	  }		
}
int add(int n){
	if(n==1){
		return 1;
	}
	else
	  {
	  	return n+add(n-1);
	  }
}
int fact(int n){
   if(n==1||n==0)
   {
   	return n;
   }	
   else
   {
   return n*fact(n-1);	
   }
	
} 
int sum(int x,int y){
   if(x==y){
   	return x;
   }
   else
   {
   	return x+sum(x+1,y);
	}		
}
void f(int n){
	if(n<0 ){
	  return;
	}
	else{
	
		for(size_t i=n ;i>0 ;i--){
			cout<<"*";
		}
		cout<<endl;
		f(n-1);
	}
	
}
int main(int argc, char** argv) {
	cout<<fip(9)<<endl;
	cout<<add(9)<<endl;
	cout<<fact(5)<<endl;
	cout<<sum(5,9)<<endl;
	cout<<f(5)<<endl;
	return 0;
}