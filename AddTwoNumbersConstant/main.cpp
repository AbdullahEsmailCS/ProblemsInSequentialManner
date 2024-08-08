#include <iostream>
using namespace std;


int AddTwoNumbers(int a, int b) {
    return a + b;
}

void PrintSum(int sum) {
    cout << "The sum of two numbers is : " << sum << endl;
}

int main() {
    int num1 = 3, num2 = 4;
    int sum = AddTwoNumbers(num1, num2);
    PrintSum(sum);
    return 0;
}