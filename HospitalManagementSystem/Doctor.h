#pragma once
#include "Employee.h"
class Doctor : public Employee
{
	string specialization;
	double salary{};
	double tax{};


public:

	Doctor() = default;
	Doctor(int empId, string firstName, unsigned short int age, string specialization, string hireDate);


	void setSalary(double salary, double tax);
	double getSalary();
	double getTax();

	void add();
	void update(vector<Doctor> &d);
	void search(vector<Doctor> d);
	void updateSalary();
	void display(vector<Doctor> d);
	void showDetails();

};

