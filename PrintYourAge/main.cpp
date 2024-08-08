#include<iostream>
#include<string>
using namespace std;

void Print(int value) {
	cout << value << endl;
}

void PrintAge(int age) {
	Print(age);
}

int main() {
	int myAge = 26;
	PrintAge(myAge);


	return 0;
}