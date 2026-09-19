#include<iostream>
#include<string>
 using namespace std;
int main(){
     string name;
	char size;
	int personItserves;
	float price;
	
	cout<<"Enter the name of pizza: ";
	getline (cin,name);
	
	cout<<" Enter the size of Pizza either as size of 'S','M','L': ";
	cin>>size;
	
	cout<<" Enter the person it serves: ";
	cin>>personItserves;
	
	cout<<" Enter the price of Pizza: ";
	cin>>price;
	
	cout<<endl;
	cout<<" Yeh you have ordered a pizza "<<name<< "of size " <<size<<" That serve "<<personItserves<<" people whose price is "<<price;
	
	return 0;
}
