#include<iostream>
#include<string>
using namespace std;

enum class Gender {
	Male,
	Female,
	None
};

enum class MaritalStatus {
	Single,
	Married,
	Divoreced
};

enum class Color {
	Red,
	Green,
	Blue,
	Yellow,
	Cyan,
	Magenta
};

struct Address {

	string StreetName;
	string BuildingNumber;
	string POBox;
	string ZipCode;
};

struct ContactInfo {
	string Phone;
	string Email;
	Address Address;
};



struct Person {
	int iD;
	string firstName;
	string lastName;
	ContactInfo Contact;
	Gender Gender;
	MaritalStatus MaritalStatus;
	Color FavoriteColor;

};

int main() {



	return 0;
}