#pragma once
#include "Product.h"
class Book : public Product
{
	string* _authorName;
	string* _publisherName;
	string* _bookName;
public:
	Book(int, int, float, string, string, string);
	~Book();
	Book();
	Book(const Book& book);
	const string& getAuthorName()const;
	const string& getPublisherName()const;
	const string& getBookName()const;

	void setAuthorName(string);
	void setPublisherName(string);
	void setBookName(string);

	void displayProductList();
	void loadProductList();
};
