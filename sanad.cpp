#include<iostream>
#include<string>
using namespace std;

  int main()
  {
  	string student,std,school,exam;
  	int total,eng,hindi,maths,science,gk,add,percent;
  	
  	cout<<" Enter the name of student: ";
  	getline(cin,student);
  	
  	cout<<" Enter the class of student: ";
  	getline(cin,std);
  	
  	cout<<" Enter the name of the school: ";
  	getline(cin,school);
  	
  	cout<<" Enter the name of Exam: ";
  	getline(cin,exam);
  	
  	cout<<" Enter the total marks: ";
  	cin>>total;
  	
  	cout<<" Enter the marks obtained in English: ";
  	cin>>eng;
  		cout<<" Enter the marks obtained in Hindi: ";
  	cin>>hindi;
  		cout<<" Enter the marks obtained in Maths: ";
  	cin>>maths;
  		cout<<" Enter the marks obtained in Science: ";
  	cin>>science;
  		cout<<" Enter the marks obtained in GK: ";
  	cin>>gk;
  	 cout<<" Marks obtained by student is:";
  	add= eng+hindi+maths+science+gk;
  	cout<<add;
  	
  	cout<<" Percent obtained by student is:"<<endl;
  	cin>>percent;
  	
  	  cout<<endl<<endl;
  	cout<<" The Report Card of Sanad Akhter for Half Yearly Exam is as bellow:";
  	   cout<<endl<<endl;
  	   cout<<"--------------*----------------------";
  	   cout<<endl<<endl;
  	cout<<" Student:"<<student<<endl<<" Class of student: "<<std<<endl<<" The name of school:"<<school<<endl<<" Exam name:"<<exam<<endl<<" Total Marks of Exam:"<<total<<endl<<" Marks obtained:"<<add<<endl<<" Percentage obtained:"<<percent<<endl;
	   cout<<endl;
	   cout<<"******** BEST OF LUCK ********* ";
  	return 0;
  	
  }
