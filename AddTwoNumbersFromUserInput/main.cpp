#include <iostream>
using namespace std;

string Alerts[] = { "Enter First Number", "Enter Second Number","The Sum is: " };

struct NumberPair {
    int FirstNumber;
    int SecondNumber;
};

int ReadNumber(const string& message) {
    cout << message << endl;
    int number;
    cin >> number;
    return number;
}

NumberPair ReadTwoNumbers() {
    NumberPair np;
    np.FirstNumber = ReadNumber(Alerts[0]);
    np.SecondNumber = ReadNumber(Alerts[1]);
    return np;
}

int Add(int a, int b) {
    return a + b;
}
int AddTwoNumbers(NumberPair n) {
    return Add(n.FirstNumber, n.SecondNumber);
}

void PrintSum(int sum) {
    cout << Alerts[2]<< sum << endl;
}

int main() {
    NumberPair np = ReadTwoNumbers();
    int sum = AddTwoNumbers(np);
    PrintSum(sum);
    return 0;
}