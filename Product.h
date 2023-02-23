#pragma once
#include<iostream>
using namespace std;
class Product
{
protected:
	int* _id;
	int* _stockNumber;
	float* _price;
public:
	Product(int, int, float);
	~Product();
	Product();
	const int& getID() const;
	const int& getStockNumber() const;
	const float& getPrice() const;

	void setID(int*);
	void setID(int);
	void setStockNumber(int*);
	void setPrice(float*);

	void loadProductList();
	void displayProductList();

};
