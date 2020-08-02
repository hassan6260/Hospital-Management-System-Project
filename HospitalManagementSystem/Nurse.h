#pragma once
#include "Employee.h"
class Nurse : public Employee
{
	string specialization;

public:
	Nurse();
	Nurse(string firstName, unsigned short int age, int empId, string specialization, string hireDate);



	void setSpecialization(string specialization);
	string getSpecialization();



	void add();
	void display(vector<Nurse> nurse);
	void update(vector<Nurse> &nurse);
	void search(vector<Nurse> nurse);
	void showDetails();
};

