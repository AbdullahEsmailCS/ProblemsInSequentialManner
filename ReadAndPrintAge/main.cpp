#include<iostream>
#include<string>
using namespace std;

void Print(int value) {
	cout << value << endl;
}
void Print(const string& text) {
	cout << text << endl;
}

void PrintAge(int age) {
	Print(age);
}

int ReadAge(const string& message) {
	Print(message);
	int age;
	cin >> age;
	return age;
}

int main() {
	int myAge = ReadAge("Enter your age");
	PrintAge(myAge);


	return 0;
}