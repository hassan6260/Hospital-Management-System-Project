#pragma once
#include "Human.h"

class Employee : public Human 
{
protected:
	static int id;
	int empId = 0;
	string job;
	string hireDate;
	int loop=0;
	  

public:
	Employee() = default;
	Employee(string firstName, unsigned short int age, int empId, string job, string hireDate);
	Employee(string firstName, unsigned short int age, int empId, string hireDate);
	void setJob(string job);
	string getJob();
	void setHireDate(string hireDate);
	string getHireDate();


	virtual void add();
	virtual void display(vector<Employee> emp1);
	virtual void update(vector<Employee> &emp1);
	virtual void search(vector<Employee> emp1);
	void showDetails();

	~Employee();

};