#include "books.h"
#include <string>
#include <iostream>

books::books() // default constructor assigning base values
{
	priceofBook = 0;
	stockNumber = 0;

	std::string strUndefined = "Undefined"; // create a string to easily copy string into char arrays

	strcpy_s(bookName, strUndefined.c_str()); 
	strcpy_s(authorName, strUndefined.c_str());
	strcpy_s(publisherName, strUndefined.c_str());
}
books::books(std::string prBookName, std::string prAuthorName, std::string prPublisherName) // parameter constructor for assigning values from input
{
	priceofBook = 0;
	stockNumber = 0;

	strcpy_s(bookName, prBookName.c_str()); 
	strcpy_s(authorName, prAuthorName.c_str());
	strcpy_s(publisherName, prPublisherName.c_str());
}
books::~books() // placeholder destroyer
{
	std::cout << "Data destroyed." << std::endl;
}
int books::getStockNumber()  // get stock number from private class
{
	return stockNumber;
}
void books::setStockNumber(int _stockNumber) // set stock number from private class
{
	stockNumber = _stockNumber;
}
void books::loadBooks() // ready-to-use function to load books
{
	std::cout << "Enter Book Name: " << std::endl;
	std::cin >> bookName;

	std::cout << "Enter Author Name: " << std::endl;
	std::cin >> authorName;

	std::cout << "Enter Publisher Name: " << std::endl;
	std::cin >> publisherName;

	std::cout << "Enter Book Price: " << std::endl;
	std::cin >> priceofBook;

	std::cout << "Enter Stock: " << std::endl;
	int _tempStock;
	std::cin >> _tempStock;

	setStockNumber(_tempStock); // assign value to a private value
}
void books::displayBooks() // ready-to-use function to display books
{
	std::cout << "Book Name: " << bookName << std::endl;
	std::cout << "Author Name: " << authorName << std::endl;
	std::cout << "Publisher Name: " << publisherName << std::endl;
	std::cout << "Book Price: " << priceofBook << std::endl;
	std::cout << "Stock: " << stockNumber << std::endl;
}