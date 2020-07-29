#include "Human.h"

Human::Human(): firstName("NA"), lastName("NA"), age(0),
	phoneNumber("NA"), address("NA"), email("NA"), gender(' ')
{
}

Human::Human(string firstName, unsigned short int age, char gender)
	: firstName(firstName),age(age), gender(gender), lastName("NA"),
	phoneNumber("NA"), address("NA"), email("NA")
{
}

string Human::getAddress()
{
	return address;
}

string Human::getEmail()
{
	return email;
}

void Human::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void Human::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Human::setAge(unsigned short int age)
{
	if (age >= 18)
		this->age = age;
	else
		cout << "age not allowed " << endl;
}


void Human::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Human::setAddress(string address)
{
	this->address = address;
}

void Human::setEmail(string email)
{
	this->email = email;
}

string Human::getFirstName()
{
	return firstName;
}

string Human::getLastName()
{
	return lastName;
}

unsigned short int Human::getAge()
{
	return age;
}


string Human::getPhoneNumber()
{
	return phoneNumber;
}

void Human::showDetails()
{
	cout 
		<< "first name : " << firstName << " | " << "last name : " << lastName << " | "
		<< "age : " << age << " | " << "phoneNumber : " << phoneNumber << " | " 
		<< "address : " << address << " | " << "email : " << email;
}	