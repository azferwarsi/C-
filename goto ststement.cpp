#include<iostream>
using namespace std;

int main(){
	
	int age;
	cout<<" Enter the age: ";
	cin>>age;
	
	if( age>=18){
		goto vote;
	}
	
	
	else{
	goto notVote;	
	}

	
	vote:
		cout<<" Eligible gor vote....! ";
		return 0;
     notVote:
			cout<<" Not Eligible for vote: ";
			
			return 0;
}
