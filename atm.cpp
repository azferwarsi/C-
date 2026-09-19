#include<iostream>

using namespace std;

int main(){
	
   
   int pin;
   char n;
   
   
   cout<<" Enter the ATM pin ";
   cin>>pin;
   cout<<" Enter bank name ";
   cin>>n;
   
   if (pin==9900)
   {
   	   cout<<" Welcome \n you can Access your Banking ";
	   }	
	   
	   else{
	   	
	   	cout<<"Wrong ATM pin, you can't Access Banking ";
	   	
	   }
	   
	   return 0;
}
