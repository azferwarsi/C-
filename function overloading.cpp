#include <iostream>
using namespace std;

void sub(int, float);
void add(string, string);
void add(int, int, int);


int main() {

	// Function Overloading
	sub(100, 20.9);
	add("Hello ", "World");
	add(91, 85, 70);

	return 0;
}

void sub(int num1, float num2) {

	cout << num1 - num2 << endl;
}

void add(string str1, string str2) {

	cout << str1 + str2 << endl;
}

void add(int num1, int num2, int num3) {

	cout << num1 + num2 + num3 << endl;
}
