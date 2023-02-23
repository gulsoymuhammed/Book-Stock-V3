#include "Book.h"
using namespace std;

Book::Book(int prId, int prStockNumber, float prPrice, string prAuthorName, string prPublisherName, string prBookName)
{
	_authorName = new string(prAuthorName);
	_publisherName = new string(prPublisherName);
	_bookName = new string(prBookName);

}

Book::~Book()
{
	cout << "Destructor -Book Class" << endl;
	if (_bookName != nullptr)
		delete _bookName;
	if (_authorName != nullptr)
		delete _authorName;
	if (_publisherName != nullptr)
		delete _publisherName;

}

Book::Book()
{
	_authorName = nullptr;
	_publisherName = nullptr;
	_bookName = nullptr;
	cout << "Default Constructor -Book Class" << endl;
}

Book::Book(const Book& book)
{
	cout << "Copy Constructor -Book Class" << endl;
	_id = new int(*book._id);
	_stockNumber = new int(*book._stockNumber);
	_price = new float(*book._price);

	_bookName = new string(* book._bookName);
	_authorName = new string (*book._authorName);
	_publisherName= new string(*book._publisherName);

}

const string& Book::getAuthorName() const
{
	return *this->_authorName;
}

const string& Book::getPublisherName() const
{
	return *this->_publisherName;
}

const string& Book::getBookName() const
{
	return *this->_bookName;
}

void Book::setAuthorName(string authorName)
{
	if (_authorName != nullptr)
		delete _authorName;
	_authorName = new string (authorName);
}

void Book::setPublisherName(string publisherName)
{
	if (_publisherName != nullptr)
		delete _publisherName;
	_publisherName = new string(publisherName);

}

void Book::setBookName(string bookName)
{
	if (_bookName != nullptr)
		delete _bookName;
	_bookName = new string(bookName);
}

void Book::displayProductList()
{
	cout << "\nProduct id: " << _id;
	cout << "\nProduct price: " << _price;
	cout << "\nProduct stock number: " << _stockNumber;

	cout << "\Book Name: " << _bookName;
	cout << "\Book Author Name: " << _authorName;
	cout << "\Book Publisher Name: " << _publisherName;
	cout << "\n--------------------------------------\n";

}

void Book::loadProductList()
{
	_id = new int;
	_stockNumber = new int;
	_price = new float;
	cout << "\nEnter product id: ";
	cin >> *_id;
	cout << "\nEnter product price: ";
	cin >> *_price;
	cout << "\nEnter product stock number: ";
	cin >> *_stockNumber;

	cout << "\nEnter book name: ";
	cin >> *_bookName;
	cout << "\nEnter book author name: ";
	cin >> *_authorName;
	cout << "\nEnter book publisher name: ";
	cin >> *_publisherName;
	cout << "\n--------------------------------------\n";
}
