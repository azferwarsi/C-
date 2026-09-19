#include<iostream>
#include<string>
using namespace std;

int main(){
	
	float roll,percent,year;
	string name,college,branch,course;
	
	cout<<" Enter the name of college "<<endl;
	getline(cin,college);
		cout<<" Enter the name of student "<<endl;
	getline(cin,name);
	cout<<" Enter the name of branch "<<endl;
	cin>>branch;
	
	cout<<" Enter the name of course "<<endl;
	cin>>course;
	

	
	cout<<" Enter the roll number "<<endl;
	cin>>roll;
	
	cout<<" Enter the percentage received "<<endl;
	cin>>percent;
	
	cout<<" Enter the passing year "<<endl;
	cin>>year;

	 cout<<endl;
	 cout<<"--------------*---------------";
	 cout<<endl;
	cout<<" Student Data is as follow ";
	cout<<endl<<endl;
	
	cout<<"college name: "<<college<<endl<<endl<<" Branch name: "<<branch<<endl<<endl<<" course name is:"<<course<<endl<<endl<<" student name is: "<<name<<endl<<endl<< " Roll number of student is:"<<roll<<endl<<endl<< " Percentage received by student is:"<<percent<<endl<<endl<< " Passout year is:"<<year<<endl;	
	return 0;
}   

