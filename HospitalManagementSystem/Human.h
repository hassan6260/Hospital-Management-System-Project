#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Human
{
protected:
	string firstName;
	string lastName;
	unsigned short int age;
	char gender;
	string phoneNumber;
	string address;
	string email;


public:
	Human();
	Human(string firstName, unsigned short int age, char gender);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setAge(unsigned short int age);
	void setPhoneNumber(string phoneNumber);
	void setAddress(string address);
	void setEmail(string email);
	
	string getFirstName();
	string getLastName();
	unsigned short int getAge();
	string getPhoneNumber();
	string getAddress();
	string getEmail();

	virtual void showDetails();
};

