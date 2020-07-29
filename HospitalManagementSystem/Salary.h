#pragma once
#include "Doctor.h"
class Salary
{
protected:
	double salary{};
	double tax = 0.14;
	double bonus{};
	double totalSal{};


public:
	friend class Doctor;
	Salary() = default;
	Salary(double salary);
	Salary(double salary, double tax, double bonus);

	double calcDocSal(double salary);
	double calcDocSal(double salary, double bonus);
	double calcEmpSal(double salary, double bonus);
	double calcNurseSal(double salary, double bonus);

	double calcUpdateYearlySal(Salary r1);
};

