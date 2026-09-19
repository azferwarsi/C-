#include<iostream>
#include<cmath>
 using namespace std;
   int main(){
   	
   	int x,y;
   	cout<<" Enter any two number: ";
   	cin>>x>>y;
   	
   	cout<<" Larger number between these number is: "<<fmax(x,y)<<endl;
   	cout<<" Smaleer number between these number is: "<<fmin(x,y)<<endl;
   	cout<<" Difference between these number is: "<<fdim (x,y)<<endl;
   	
   	cout<<" 4 to the power 4 is:"<<pow(4,4)<<endl;
   	
   	
   	return 0;
   	
   }
