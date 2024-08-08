#include<iostream>
#include<string>
using namespace std;

void Print(const string& message) {
	cout << message << endl;
}

int main() {
	string greeting = "Hello world";
	Print(greeting);

	return 0;
}