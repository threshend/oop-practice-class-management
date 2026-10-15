#include "Employee.h"

#include <iostream>
#include <cstring>

Employee::Employee()
{
	employeeID = 0;
	salary = 0.0;

	std::string strUndefined = "Unassigned";

	strcpy_s(employeeName, strUndefined.c_str());
	strcpy_s(department, strUndefined.c_str());


}
Employee::Employee(std::string prName, float prSalary, std::string prDepartment)
{
	employeeID = 0;
	salary = prSalary;

	strcpy_s(employeeName, prName.c_str());
	strcpy_s(department, prDepartment.c_str());
}

Employee::~Employee()
{
	std::cout << "Employee record destroyed. " << std::endl;
}

int Employee::getEmployeeID()
{
	return employeeID;
}
void Employee::setEmployeeID(int _employeeID)
{
	employeeID = _employeeID;
}
void Employee::loadEmployee()
{
	std::cout << "\nEnter employee name: ";
	std::cin >> employeeName;

	std::cout << "Enter employee department: ";
	std::cin >> department;

	std::cout << "Enter employee salary: ";
	std::cin >> salary;

	int tempID;
	std::cout << "Enter employee ID: ";
	std::cin >> tempID;

	setEmployeeID(tempID);
}
void Employee::displayEmployee()
{
	std::cout << "Employee name: " << employeeName << std::endl;
	std::cout << "Employee department: " << department << std::endl;
	std::cout << "Employee salary: " << salary << std::endl;

	std::cout << "Employee ID: " << employeeID << std::endl;
}

