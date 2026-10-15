#pragma once
#include <string>

class Employee
{
public:
	Employee();
	Employee(std::string prEmployeeName, float Salary = 0.0, std::string prDepartment = "Engineering");
	~Employee();

	int getEmployeeID();
	void setEmployeeID(int _employeeID);

	char employeeName[30];
	char department[30];
	float salary;

	void loadEmployee();
	void displayEmployee();

private:
	int employeeID = 0;
};

