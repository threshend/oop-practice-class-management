#pragma once
#include <string>

struct books
{
public:
	books(); // default constructor
	books(std::string prBookName, std::string prAuthorName, std::string prPublisherName = "default"); // parameter constructor
	~books(); // placeholder destructor

	char bookName[20]; // char arrays in c++ to learn OOP
	char authorName[20];
	char publisherName[20];
	int priceofBook = 0;

	void setStockNumber(int _stockNumber); // initialize class functions
	int getStockNumber();
	void loadBooks();
	void displayBooks();

private:
	int stockNumber = 0; // private value for practice
};