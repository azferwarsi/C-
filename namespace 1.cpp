#include<iostream>
using namespace std;

namespace jp{
	
	float dollarValue= 108;
}
namespace cn{
	float dollarValue= 7;
}

 int main(){
 	
 	cout<<"1 USD= "<<jp::dollarValue<<" yen"<<endl;
 	cout<<endl;
 	cout<<"1 USD= "<<cn::dollarValue<<" yuan"<<endl;
 	
 	
 	return 0;
 }
