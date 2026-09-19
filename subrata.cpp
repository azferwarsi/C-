#include<iostream>
#include<string>
using namespace std;
 int main(){
 	
    string name;
    int age;
    int id;
    float marks;
    string college;
    
    
    cout<<" Enter the name of student:";
    getline(cin,name);
    
    cout<<" enter the age:"<<endl;
    cin>>age;
    
     cout<<" enter the ID:"<<endl;
    cin>>id;
     cout<<" enter the marks:"<<endl;
    cin>>marks;
     cout<<" enter the name of college:";
    cin>>college;
    cout<<endl<<endl;
    cout<<" The student Data is AS FOLLOWS:";
    cout<<endl<<endl;
    
    cout<<"The name of student "<<name<<endl<<" Age: "<<age<<endl<<"Marks "<<marks<<endl<<"Id "<<id<<endl<<"College: "<<college<<endl;
    
 }
