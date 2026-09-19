#include<iostream>
using namespace std;
  class Animal{
  	
  	public:
  		void sound(){
  			cout<<"Animal class: "<<"Sound"<<endl;
		  }
		  void sleep(){
		  	cout<<"Animal sleep: "<<"Sleeping"<<endl;
		  }
  };
  
  class Dog:public Animal{
  	public:
  	 void sound(){
  	 	cout<<"Dog class:"<< ends<<" Bow Bow "<<endl;
	   }
	   void sleep(){
	   	cout<<"Dog sleep: "<<ends<<"Sleping"<<endl;
	   }
  };
  
  int main(){
  	
  	Animal animal;
  	animal.sound();
  	animal.sleep();
  	
  	Dog dog;
  	dog.sound();
  	dog.sleep();
  }
