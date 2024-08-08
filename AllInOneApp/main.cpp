#include<iostream>
using namespace std;

void print(int value) {
    std::cout << "Printing int: " << value << std::endl;
}

void print(double value) {
    std::cout << "Printing double: " << value << std::endl;
}







int main() {

	unsigned short ID = 1;
	string FirstName = "abdullah";
	string MiddleName = "abdo";
	string LastName = "esmail";
	int Age = 26;
	string Phone = "+967738807541";
	long NationalID = 3883274763736435;
	long long CreditCardNumber = 12348765434543535343;
	char Gender = 'M';
	float Height = 4.6;
	double Weight = 50;
	bool IsAdult = true;








	// Converstion rules
	// Example 1
	signed char c = -1;
	unsigned int u = 10;
	int result = c + u; // c is promoted to int, then the usual arithmetic conversion is applied, and the result is an unsigned int

	// Example 2
	int i = -1;
	unsigned long ul = 10;
	bool b = i < ul; // i is converted to unsigned long, and the comparison is performed between unsigned long values

	// Example 3
	short s = -1;
	unsigned int ui = 10;
	if (s < ui) { // s is converted to unsigned int, and the comparison is performed between unsigned int values
		// ...
	}








	//----------------------Casting and casting types
     // Implicit Conversions
    int i = 10;
    double d = i; // Implicit conversion from int to double
    std::cout << "i = " << i << ", d = " << d << std::endl; // i = 10, d = 10.0

    unsigned int ui = -1; // -1 is converted to the largest unsigned int value
    std::cout << "ui = " << ui << std::endl; // ui = 4294967295

    char c = 300; // 300 is implicitly converted to char, which results in overflow
    std::cout << "c = " << static_cast<int>(c) << std::endl; // c = 44 (overflow occurs)

    // Explicit Conversions (Casting)
    double pi = 3.14159;
    int int_pi = static_cast<int>(pi); // Explicit conversion from double to int
    std::cout << "pi = " << pi << ", int_pi = " << int_pi << std::endl; // pi = 3.14159, int_pi = 3

    int* ptr = reinterpret_cast<int*>(0x1234); // Explicit conversion from integer to pointer
    std::cout << "ptr = " << ptr << std::endl; // ptr = 0x1234

    const int ci = 10;
    int* non_const_ptr = const_cast<int*>(&ci); // Explicit removal of const qualifier
    *non_const_ptr = 20; // Undefined behavior, as ci is const
    std::cout << "ci = " << ci << std::endl; // ci = 10 (but the behavior is undefined)

    // Narrowing Conversions
    double pi_narrow = 3.14159;
    int int_pi_narrow = static_cast<int>(pi_narrow); // Narrowing conversion from double to int
    std::cout << "pi_narrow = " << pi_narrow << ", int_pi_narrow = " << int_pi_narrow << std::endl; // pi_narrow = 3.14159, int_pi_narrow = 3

    short s = 32767; // Maximum value for a short
    s = static_cast<short>(s + 1); // Narrowing conversion, overflow occurs
    std::cout << "s = " << s << std::endl; // s = -32768 (undefined behavior)

    // Promotion vs. Conversion
    void printValue(int value);
    void printValue(double value);

    char c_promotion = 'A';
    printValue(c_promotion); // Promotion: char is converted to int

    int i_promotion = 10;
    printValue(i_promotion); // Printing int: 10

    double d_promotion = 3.14;
    printValue(d_promotion); // Printing double: 3.14

    printValue(static_cast<double>(i_promotion)); // Conversion: int is converted to double

    // Overload Resolution and Conversions
    void print(int value);
    void print(double value);

    print(10); // Calls print(int)
    print(3.14); // Calls print(double)

    int i_overload = 10;
    print(i_overload); // Calls print(int)

    double d_overload = 3.14;
    print(d_overload); // Calls print(double)

    print(i_overload + d_overload); // Calls print(double) due to usual arithmetic conversions


	return 0;
}