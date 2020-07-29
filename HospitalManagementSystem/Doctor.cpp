#include "Doctor.h"


Doctor::Doctor(int empId, string firstName, unsigned short int age, string specialization, string hireDate)
	:Employee(firstName, age, empId, hireDate), specialization(specialization)
{
}


void Doctor::setSalary(double salary, double tax)
{
	this->salary = (salary - (salary * tax));
}

double Doctor::getSalary()
{
	return salary;
}

void Doctor::add()
{
	cout << "How many Doctor want to add  : ";
	cin >> loop;
	for (int i = 0; i < loop; i++) {
		empId = ++id;
		cout << "\t\tDoctor id : " << empId << endl;
		cout << "\t\tFirst name : ";
		cin >> firstName;
		cout << "\t\tage : ";
		cin >> age;
		cout << "\t\tspecialization : ";
		cin >> specialization;
		cout << "\t\thire date : ";
		cin >> hireDate;
		cout << "\t\tSalary : ";
		cin >> salary;
		cout << "\t\tTax rate : ";
		cin >> tax;
		cout << "\t\t-----------------\n";
		Doctor docRec(empId, firstName, age, specialization, hireDate);
		docRec.setSalary(salary, tax);
		d.push_back(docRec);
	}
}

char option1;
int doctorId;
void Doctor::update()
{
	bool isFound = false;

	cout << "Enter Doctor id : ";
	cin >> doctorId;
	size_t i;
	for (i = 0; i < d.size(); i++) {
		if (doctorId == d[i].empId) { // this is static empId
			do
			{
				cout << "1. Update Doctor first name\n";
				cout << "2. Update Doctor age\n";
				cout << "3. Update Doctor specialization\n";
				cout << "4. Update Doctor Salary\n";
				cout << "0. Save\n";
				cout << "Choose a number : ";
				cin >> option1;
				system("cls");
				if (option1 == '1') {
					cout << "\t\tEnter First name : ";
					cin >> d[i].firstName;
				}
				else if (option1 == '2') {
					cout << "\t\tEnter age : ";
					cin >> d[i].age;
				}
				else if (option1 == '3') {
					cout << "\t\tEnter specialization : ";
					cin >> d[i].specialization;
				}
				else if (option1 == '4') {
					cout << "\t\tEnter salary : ";
					cin >> d[i].salary;
					cout << "\t\tEnter tax rate : ";
					cin >> d[i].tax;
					d[i].setSalary(d[i].salary, d[i].tax);
				}
				else if (option1 == '0') {
					break;
				}
				else
				{
					cout << "\nInvalid choice...\n" << endl;
				}
			} while (true);

			cout << "Data updated...\n" << endl;
			d[i].showDetails();

			isFound = true;
		}
	}
	if (isFound == false)
		cout << "Not found\n";

	system("pause");
	system("cls");
}

void Doctor::search()
{
	bool isFound = false;
	cout << "1. Search on Doctor id\n";
	cout << "2. Search on Doctor first name\n";
	cout << "3. Search on Doctor age\n";
	cout << "4. Search on Doctor specialization\n";
	cout << "Choose from 1 to 4 : ";
	cin >> option1;
	system("cls");
	if (option1 == '1') {
		cout << "Enter doctor id : ";
		cin >> doctorId;
		for (size_t i = 0; i < d.size(); i++) {
			if (doctorId == d[i].empId) {
				d[i].showDetails();
				isFound = true;
			}
		}
		if (isFound == false)
			cout << "Not found\n";
	}
	if (option1 == '2') {
		cout << "Enter doctor first Name : ";
		cin >> firstName;
		for (size_t i = 0; i < d.size(); i++) {
			if (firstName == d[i].firstName) {
				d[i].showDetails();
				isFound = true;
			}
		}
		if (isFound == false)
			cout << "Not found\n";
	}
	if (option1 == '3') {
		cout << "Enter doctor age : ";
		cin >> age;
		for (size_t i = 0; i < d.size(); i++) {
			if (age == d[i].age) {
				d[i].showDetails();
				isFound = true;
			}
		}
		if (isFound == false)
			cout << "Not found\n";
	}
	if (option1 == '4') {
		cout << "Enter doctor specialization : ";
		cin >> specialization;
		for (size_t i = 0; i < d.size(); i++) {
			if (specialization == d[i].specialization) {
				d[i].showDetails();
				isFound = true;
			}
		}
		if (isFound == false)
			cout << "Not found\n";
	}
	system("pause");
	system("cls");
}

void Doctor::updateSalary()
{
	//Enter Doc id
	//s.calcDocSal(200, 5);
}

void Doctor::display()
{
	for (size_t i = 0; i < d.size(); i++)
	{
		d[i].showDetails();
		cout << endl;
	}
}

void Doctor::showDetails()
{
	cout << "Doctor Id       : " << empId
		<< "\nFirst Name      : " << firstName
		<< "\nAge             : " << age
		<< "\nSpecialization  : " << specialization
		<< "\nHire Date       : " << hireDate
		<< "\nSalary          : " << salary
		<< "\n----------------------------" << endl;
}
