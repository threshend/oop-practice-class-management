#include <iostream>
#include <cstring>
#include <string>
#include "books.h"

int main()
{
	books mybooks[20]; // hardcoded limit 
	int choice;
	int amount = 0;

	while (1) // this is the main part,using while to loop forever
	{
		std::cout << "1. Load Books" << std::endl; // the menu
		std::cout << "2. Display Books" << std::endl;
		std::cout << "3. Search Books" << std::endl;
		std::cout << "4. Exit" << std::endl;

		std::cin >> choice;

		switch (choice)
		{
			case 1:
			{
				std::cout << "How many?: "; // how many books to load?
				std::cin >> amount;

				for (int i = 0; i < amount; i++) // load that much books
				{
					mybooks[i].loadBooks(); // let user load the books from zero
				}
				break;
			}
			case 2:
			{
				for (int i = 0; i < amount; i++) // skip safely if no previous inputs to "amount"
				{
					mybooks[i].displayBooks(); // display all books since there is no input asked
				}
				break;
			}
			case 3:
			{
				char searchBookName[20], searchAuthorName[20]; // char arrays in big C++

				std::cout << "Enter Book Name: "; // getting search inputs to identify the desired book
				std::cin >> searchBookName;

				std::cout << "Enter Author Name: ";
				std::cin >> searchAuthorName; 

				bool found = false; // flag to identify if search is succesful

				for (int i = 0; i < amount; i++)
				{
					if (!strcmp(searchBookName, mybooks[i].bookName) && !strcmp(searchAuthorName, mybooks[i].authorName))
					{
						std::cout << "Book Found. \n\n";

						mybooks[i].displayBooks(); // display that specific book only
						found = true; // flag raised
					}
				}
				if (!found) // if flag is not raised after the for loop
				{
					std::cout << "No matching books found.\n Exiting...";
				}
				break;
			}
			case 4: // 4th option is exit
			{
				return 0;
				break;
			}
			default:
			{
				break;
			}
		}
	}
	return 0;
}