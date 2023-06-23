#include<iostream>
#include<iomanip>
#include<string>
#include "CustomerData.h"
#include "PersonData.h"
using namespace std;

/*
* This is a sample program that shows the use of the PersonData Class and the CustomerData class
* 
* Matanda Hillary Phiri
*/

int main()
{
	//Declare Variables and instantialize classes
	PersonData friend1;
	CustomerData customer1;
	string user_inp;
	
	//Display instructions to user, take input and send it to object
	cout << "Hello, please input the following phonebook details for your friend.\n";
	cout << "1.First Name:";
	getline(cin, user_inp);
	friend1.setfirstName(user_inp);
	cout << "2.Last Name:";
	getline(cin, user_inp);
	friend1.setLastName(user_inp);
	cout << "3.Address:";
	getline(cin, user_inp);
	friend1.setAddress(user_inp);
	cout << "4.City:";
	getline(cin, user_inp);
	friend1.setCity(user_inp);
	cout << "5.Zipcode:";
	getline(cin, user_inp);
	friend1.setZip(user_inp);
	cout << "6.Phone Number:+";
	getline(cin, user_inp);
	friend1.setPhone(user_inp);
	cout << "Great!\n\n";

	//Now display use of CustomerData class
	cout << "Now please input the following information for yout customer.\n";
	cout << "1.First Name:";
	getline(cin, user_inp);
	customer1.setfirstName(user_inp);
	cout << "2.Last Name:";
	getline(cin, user_inp);
	customer1.setLastName(user_inp);
	cout << "3.Address:";
	getline(cin, user_inp);
	customer1.setAddress(user_inp);
	cout << "4.City:";
	getline(cin, user_inp);
	customer1.setCity(user_inp);
	cout << "5.Zipcode:";
	getline(cin, user_inp);
	customer1.setZip(user_inp);
	cout << "6.Phone Number:+";
	getline(cin, user_inp);
	customer1.setPhone(user_inp);
	cout << "Great!\n\n";
	
	//Display Data in Table, I like tables!
	cout << "Here is your information.\n\n";
	cout << "=================================================================================================\n";
	cout << setw(30) << left << "DETAIL      |" << " " << setw(20) << left << "FRIEND" <<setw(20) << left << "|" << "CUSTOMER" <<endl;
	cout << "=================================================================================================\n";
	cout << setw(30) << left << "Name        |" << " " << setw(20) << left << friend1.getFullName() << setw(20) << left << "|" <<  customer1.getFullName() << endl;
	cout << setw(30) << left << "Address     |" << " " << setw(20) << left << friend1.getAddress() << setw(20) << left << "|" << customer1.getAddress() << endl;
	cout << setw(30) << left << "City        |" << " " << setw(20) << left << friend1.getCity() << setw(20) << left << "|" << customer1.getCity() << endl;
	cout << setw(30) << left << "Zip Code    |" << " " << setw(20) << left << friend1.getZip() << setw(20) << left << "|" << customer1.getZip() << endl;
	cout << setw(30) << left << "Phone       |" << " " << setw(20) << left << friend1.getPhone() << setw(20) << left << "|" << customer1.getPhone() << endl;
	cout << setw(30) << left << "Customer #  |" << " " << setw(20) << left << "N/A" << setw(20) << left << "|" << customer1.getCustomerNumber() << endl;
	cout << setw(30) << left << "Mail list?  |" << " " << setw(20) << left << "N/A" << setw(20) << left << "|" << customer1.getCustomerNumber() << endl;
	cout << "=================================================================================================\n";
	return 0;
}

