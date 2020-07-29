#include "Salary.h"

Salary::Salary(double salary) : salary(salary)
{
}

Salary::Salary(double salary, double tax, double bonus)
    : salary(salary), tax(tax), bonus(bonus)
{
}

double Salary::calcDocSal(double salary)
{
    totalSal = (salary - (salary * tax));

    return totalSal;
}

double Salary::calcDocSal(double salary, double bonus)
{
    totalSal = (salary - (salary * tax)) + bonus;
    return totalSal;
}

double Salary::calcEmpSal(double salary, double bonus)
{
    totalSal = (salary - (salary * tax)) + bonus;
    return totalSal;
}

double Salary::calcNurseSal(double salary, double bonus)
{
    totalSal = (salary - (salary * tax)) + bonus;
    return totalSal;
}


