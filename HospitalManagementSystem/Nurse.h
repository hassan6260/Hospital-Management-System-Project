#pragma once
#include "Employee.h"
class Nurse : public Employee
{

	string specialization;
	vector<Nurse> nurse;

public:
	Nurse();
	Nurse(string firstName, unsigned short int age, int empId, string specialization, string hireDate);

	//~Nurse();


	void setSpecialization(string specialization);
	string getSpecialization();



	void add();
	void display();
	void update();
	void search();
	void showDetails();
};

