#include<iostream>
using namespace std;

float calculateSI(float,float,int);

int main(){
	
	cout<<" Program starts: ";
	
	float si1= calculateSI(100,6,3);
	cout<<"simple interest:"<<si1<<endl<<endl;
	
	float si2= calculateSI(1000,2,2);
	cout<<"simple interest:"<<si2<<endl<<endl;
	
	cout<<" Program ends:";
	
	return 0;
	
}
float calculateSI(float principal,float rateOfInterest,int time){
	float si = (principal * rateOfInterest * time) /100;
	return si;
}
