#include "Nurse.h"

Nurse::Nurse()
{
}

Nurse::Nurse(string firstName, unsigned short int age, int empId, string specialization, string hireDate)
	:Employee(firstName, age, empId, hireDate), specialization(specialization)
{
}

void Nurse::setSpecialization(string specialization)
{
	this->specialization = specialization;
}

string Nurse::getSpecialization()
{
	return specialization;
}

void Nurse::add()
{
			empId = ++id;
			cout << "\t\tNurse id : " << empId << endl;
			cout << "\t\tFirst name : ";
			cin >> firstName;
			cout << "\t\tage : ";
			cin >> age;
			cout << "\t\tspecialization : ";
			cin >> specialization;
			cout << "\t\thire date : ";
			cin >> hireDate;
			cout << "\t\t-----------------\n";
}

void Nurse::display(vector<Nurse> nurse)
{
	for (size_t i = 0; i < nurse.size(); i++)
	{
		nurse[i].showDetails();
		cout << endl;
	}
}
	char option;
	int nurseId;
void Nurse::update(vector<Nurse> &nurse)
{
	bool isFound = false;

	cout << "Enter Nurse id : ";
	cin >> nurseId;
	size_t i;
	for (i = 0; i < nurse.size(); i++) {
		if (nurseId == nurse[i].empId) { // this is static empId
			do
			{
				cout << "1. Update Nurse first name\n";
				cout << "2. Update Nurse age\n";
				cout << "3. Update Nurse specialization\n";
				cout << "0. Save\n";
				cout << "Choose a number : ";
				cin >> option;
				system("cls");
				if (option == '1') {
					cout << "\t\tEnter First name : ";
					cin >> nurse[i].firstName;
				}
				else if (option == '2') {
					cout << "\t\tEnter age : ";
					cin >> nurse[i].age;
				}
				else if (option == '3') {
					cout << "\t\tEnter specialization : ";
					cin >> nurse[i].specialization;
				}
				else if (option == '0') {
					break;
				}
				else
				{
					cout << "\nInvalid choice...\n" << endl;
				}
			} while (true);

			cout << "Data updated...\n" << endl;
			nurse[i].showDetails();

			isFound = true;
		}
	}
	if (isFound == false)
		cout << "Not found\n";

	system("pause");
	system("cls");
}

void Nurse::search(vector<Nurse> nurse)
{
	bool isFound = false;
	cout << "1. Search on Nurse id\n";
	cout << "2. Search on Nurse first name\n";
	cout << "3. Search on Nurse age\n";
	cout << "4. Search on Nurse specialization\n";
	cout << "Choose from 1 to 4 : ";
	cin >> option;
	system("cls");
	if (option == '1') {
		cout << "Enter nurse id : ";
		cin >> nurseId;
		for (size_t i = 0; i < nurse.size(); i++) {
			if (nurseId == nurse[i].empId) {
				nurse[i].showDetails();
				isFound = true;
			}
		}
		if (isFound == false)
			cout << "Not found\n";
	}
	if (option == '2') {
		cout << "Enter nurse first Name : ";
		cin >> firstName;
		for (size_t i = 0; i < nurse.size(); i++) {
			if (firstName == nurse[i].firstName) {
				nurse[i].showDetails();
				isFound = true;
			}
		}
		if (isFound == false)
			cout << "Not found\n";
	}
	if (option == '3') {
		cout << "Enter nurse age : ";
		cin >> age;
		for (size_t i = 0; i < nurse.size(); i++) {
			if (age == nurse[i].age) {
				nurse[i].showDetails();
				isFound = true;
			}
		}
		if (isFound == false)
			cout << "Not found\n";
	}
	if (option == '4') {
		cout << "Enter nurse specialization : ";
		cin >> specialization;
		for (size_t i = 0; i < nurse.size(); i++) {
			if (specialization == nurse[i].specialization) {
				nurse[i].showDetails();
				isFound = true;
			}
		}
		if (isFound == false)
			cout << "Not found\n";
	}
	system("pause");
	system("cls");
}

void Nurse::showDetails()
{
	cout << "Nurse Id       : " << empId
		<< "\nFirst Name     : " << firstName
		<< "\nAge            : " << age
		<< "\nSpecialization : " << specialization
		<< "\ntHire Date     : " << hireDate
		<< "\n----------------------------" << endl;
}

