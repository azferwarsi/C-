#include<iostream>
using namespace std;

#define UPPER_LIMIT 10
#define AREA(r) (3.14*5*5)
int main(){
	
	//WAP to find even number between 1 to 10
	for(int i=1;i<=UPPER_LIMIT;i++){
		if(i%2!=0)
		cout<<i<<endl;
	}
	cout<<"Area"<<AREA(5);
	
	return 0;
}
