#include "Employee.h"
#include <iomanip>

int Employee::id = 0; // this is static id in Employee class

Employee::Employee(string firstName, unsigned short int age, int empId, string job, string hireDate)
	:Human(firstName, age, gender), job(job), hireDate(hireDate), empId(empId)
{

}
Employee::Employee(string firstName, unsigned short int age, int empId, string hireDate)
	: Human(firstName, age, gender), hireDate(hireDate), empId(empId)
{
}

void Employee::setJob(string job)
{
	this->job = job;
}
string Employee::getJob()
{
	return job;
}
void Employee::setHireDate(string hireDate)
{
	this->hireDate = hireDate;
}

string Employee::getHireDate()
{
	return hireDate;
}


void Employee::add()
{
			empId = ++id;
			cout << "\t\tEmlpyee id : " << empId << endl;
			cout << "\t\tFirst name : ";
			cin >> firstName;
			cout << "\t\tage : ";
			cin >> age;
			cout << "\t\tjob : ";
			cin >> job;
			cout << "\t\thire date : ";
			cin >> hireDate;
			cout << "\t\t-----------------\n";
}

void Employee::display(vector<Employee> emp1)
{
	for (size_t i = 0; i < emp1.size(); i++)
	{
		emp1[i].showDetails();
		cout << endl;
	}
}

void Employee::update(vector<Employee> &emp1)
{
	char option;
	int empId;
	bool isFound = false;

		cout << "Enter employee id : ";
		cin >> empId;
		size_t i;
		for (i = 0; i < emp1.size(); i++) {
			if (empId == emp1[i].empId) {
				do
				{
					cout << "1. Update Employee first name\n";
					cout << "2. Update Employee age\n";
					cout << "3. Update Employee job\n";
					cout << "0. Save\n";
					cout << "Choose a number : ";
					cin >> option;
					system("cls");
					if (option == '1') {
						cout << "\t\tEnter First name : ";
						cin >> emp1[i].firstName;
					}
					else if (option == '2') {
						cout << "\t\tEnter age : ";
						cin >> emp1[i].age;
					}
					else if (option == '3') {
						cout << "\t\tEnter job : ";
						cin >> emp1[i].job;
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
					emp1[i].showDetails();

					isFound = true;
			}
		}
		if (isFound == false)
			cout << "Not found\n";

		system("pause");
		system("cls");
}

void Employee::search(vector<Employee> emp1)
{
	char option;
	int empId;
	string firstName;
	unsigned short int age;
	string job;
	bool isFound = false;
	cout << "1. Search on Employee id\n";
	cout << "2. Search on Employee first name\n";
	cout << "3. Search on Employee age\n";
	cout << "4. Search on Employee job\n";
	cout << "Choose from 1 to 4 : ";
	cin >> option;
	system("cls");
	if (option == '1') {
		cout << "Enter employee id : ";
		cin >> empId;
		for (size_t i = 0; i < emp1.size(); i++){
			if (empId == emp1[i].empId){
				emp1[i].showDetails();
				isFound = true;
			}
		}
		if(isFound == false)
			cout << "Not found\n";
	}
	if (option == '2') {
		cout << "Enter employee first Name : ";
		cin >> firstName;
		for (size_t i = 0; i < emp1.size(); i++){
			if (firstName == emp1[i].firstName){
				emp1[i].showDetails();
				isFound = true;
			}
		}
		if (isFound == false)
			cout << "Not found\n";
	}
	if (option == '3') {
		cout << "Enter employee age : ";
		cin >> age;
		for (size_t i = 0; i < emp1.size(); i++){
			if (age == emp1[i].age){
				emp1[i].showDetails();
				isFound = true;
			}
		}
		if (isFound == false)
		cout << "Not found\n";
	}
	if (option == '4') {
		cout << "Enter employee job : ";
		cin >> job;
		for (size_t i = 0; i < emp1.size(); i++){
			if (job == emp1[i].job){
				emp1[i].showDetails();
				isFound = true;
			}
		}
		if (isFound == false)
			cout << "Not found\n";
	}
	system("pause");
	system("cls");
}

void Employee::showDetails()
{
	cout << "Employee Id : " << empId
		<< "\nFirst Name  : " << firstName
		<< "\nAge         : " << age
		<< "\nJob         : " << job
		<< "\ntHire Date  : " << hireDate
		<< "\n----------------------------" << endl;
}

Employee::~Employee()
{
	//delete emp1;
}
