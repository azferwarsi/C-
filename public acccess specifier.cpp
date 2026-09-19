#include<iostream>
using namespace std;

 class Circle{
 	
 	public:  //Access specifier
 	
 	float radius;
 	double getArea(){
 		return 3.14 * radius* radius;
	 }
 };

 int main(){
 	
 	Circle circle;
 	
 	circle.radius= 10;
 	double area= circle.getArea();
 	
 	cout<<" The area of circle is "<<area<<" Square units "<<endl;
 	
 	return 0;
 	
 	
 	
 }
