#include<iostream>
using namespace std;

int main(){
	
	int a,b,ch,add,sub,mul,div;
	cout<<"Enter two numbers ";
	cin>>a>>b;
	
	cout<<"Enter choice ";
	cin>>ch;
	
	if(ch==1){
		add=a+b;
		cout<<add;
	}
	else if(ch==2){
		sub=a-b;
		cout<<sub;
	}
	else if(ch==3){
		
		mul=a*b;
		cout<<mul;
	}
	else if(ch==4){
		div=a/b;
		cout<<div;
	}
	else{
		cout<<"Invalid choice";
	}
	
	return 0;
}
