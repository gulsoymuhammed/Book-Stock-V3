#include "Product.h"
#include <iostream>
using namespace std;
Product::Product(int prId, int prStockNumber, float prPrice)
{
	_id= new int(prId);
	_stockNumber = new int(prStockNumber);
	_price = new float(prPrice);
}

Product::~Product()
{
	cout << endl << "Destructor - Product Class" << endl;
	if (_id != nullptr)
		delete _id;
	if (_stockNumber != nullptr)
		delete _stockNumber;
	if (_price!= nullptr)
		delete _price;

}

Product::Product()
{
	cout << endl << "Default Constructor - Product Class" << endl;
	_id = nullptr;
	_stockNumber = nullptr;
	_price = nullptr;
}

const int& Product::getID() const
{
	return *this->_id;
}

const int& Product::getStockNumber() const
{
	return *this->_stockNumber;
}

const float& Product::getPrice() const
{
	return *this->_price;
}

void Product::setID(int* id)
{
	_id = id;
}

void Product::setID(int id)
{
	if (_id != nullptr)
		delete _id;
	_id = new int(id);
}

void Product::setStockNumber(int* stock)
{
	if (_stockNumber != nullptr)
		delete _stockNumber;
	_stockNumber = new int(*stock);
}

void Product::setPrice(float* price)
{
	if (_price != nullptr)
		delete _price;
	_price = price;
}

void Product::loadProductList()
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
	cout << "\n--------------------------------------\n";
}

void Product::displayProductList()
{
	cout << "\nProduct id: " << _id;
	cout << "\nProduct price: " << _price;
	cout << "\nProduct stock number: " << _stockNumber;
	cout << "\n--------------------------------------\n";

}
