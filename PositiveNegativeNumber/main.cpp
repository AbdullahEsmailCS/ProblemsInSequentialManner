#include<iostream>
#include<string>
using namespace std;

enum class NumberStatus {
	Positive =0,
	Negative =1
};

int ReadNumber(const string& message) {
	cout << message << endl;
	int number;
	cin >> number;
	return number;
}

 

bool IsGreaterThan(int firstValue, int secondValue) {
	return firstValue > secondValue;
}

bool IsPositive(int number) {
	return IsGreaterThan(number, 0);
}

NumberStatus CheckNumberStatus(int number) {
	if (IsPositive(number))
		return NumberStatus::Positive;
	else
		return NumberStatus::Negative;
}


void PrintNumberStatus(NumberStatus ns) {
	if (ns == NumberStatus::Positive) {
		cout << "Number is Positive" << endl;
	}
	else {
		cout << "Number is Negative" << endl;
	}
}


int main() {
	PrintNumberStatus(CheckNumberStatus(ReadNumber("Enter a number")));

	return 0;
}