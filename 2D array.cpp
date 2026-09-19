#include<iostream>
#include<unistd.h>
using namespace std;

int main(){
	
	int arr[2][2],i,j;
	cout<<" Enter Array Elements: ";
	for( i=0;i<2;i++ ){
		for(j=0;j<2;j++)
		{
		  cin>>arr[i][j];	
		}
	}
	 cout<<endl<<endl;
	cout<<" The Array Elements are: "<<endl;
	usleep(50000000);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		  	
		  cout<<ends<<arr[i][j]<<ends;	
		}
		cout<<endl;
	}
	
	return 0;
}
