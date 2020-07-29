#pragma once
#include "Employee.h"
class Doctor : public Employee
{
	string specialization;
	double salary{};
	double tax{};
	vector<Doctor> d;


public:

	Doctor() = default;
	Doctor(int empId, string firstName, unsigned short int age, string specialization, string hireDate);


	void setSalary(double salary, double tax);
	double getSalary();

	void add();
	void update();
	void search();
	void updateSalary();
	void display();
	void showDetails();

};

