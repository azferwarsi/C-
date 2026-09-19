#include<iostream>
using namespace std;
int main(){
	
	float si;
	int p;
	float r;
	int t;
	
	cout<<" Enter the principal amount:";
	cin>>p;
	cout<<" Enter the rate of interest:";
	cin>>r;
	
	cout<<" Enter the time period : ";
	cin>>t;
	cout<<endl<<endl;
	si = p*r*t/100;
	cout<<" The simple interest is: "<<si<<endl;
}
