#include <iostream>
#include <string>
#include <cstring>

#include "Employee.h"

int main()
{
	Employee arrEmployee[30];
	int employeeamount = 0;
	int choice;

	while (1)
	{


		std::cout << "1. Load Employee \n";
		std::cout << "2. Display All \n";
		std::cout << "3. Search by Department \n";
		std::cout << "\n\n4. Exit";

		std::cin >> choice;

		switch (choice)
		{ 
		case 1:
			{
				std::cout << "Enter amount of employee: ";
				std::cin >> employeeamount;

				for (int i = 0; i < employeeamount; i++)
				{
				arrEmployee[i].loadEmployee();
				}
				break;
			}
			case 2:
			{
				for (int i = 0; i < employeeamount; i++)
				{
					arrEmployee[i].displayEmployee();
				}
				break;
			}
			case 3:
			{
				char searchEmployeeName[30], searchDepartment[30];

				std::cout << "Enter employee name: ";
				std::cin >> searchEmployeeName;

				std::cout << "Enter department name: ";
				std::cin >> searchDepartment;

				bool found = false;

				for (int i = 0; i < employeeamount; i++)
				{
					if (!strcmp(searchEmployeeName, arrEmployee[i].employeeName) && !strcmp(searchDepartment, arrEmployee[i].department))
					{
						std::cout << "The employee: \n\n";

						arrEmployee[i].displayEmployee();

						std::cout << "ID: " << arrEmployee[i].getEmployeeID() << std::endl;
						found = true;
					}
				}
				if (!found)
				{
					std::cout << "No employee found in by the name " << searchEmployeeName << " in the " << searchDepartment << "department. ";
				}
				break;
			}
			case 4:
			{
				exit(1);
				break;
			}
			default:
				break;
		}
	}
	return 0;
}