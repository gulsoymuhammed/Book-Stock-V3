#include<iostream>
#include "Book.h"
#include<string>

using namespace std;

int main() {
	Book arrBook[10];
	int menuChoice, numberOfBooks = 0;
	string searchBookName, searchAuthorName;


	while (1) {
		cout << "\n1.Load Books \n2.Display \n3.Search \n4.Exit\n";
		cout << "\n\nEnter your choice:";
		cin >> menuChoice;

		switch (menuChoice)
		{
		case 1:
			cout << "\n* * * LOAD PRODUCT LIST * * *\n\n";
			cout << "Enter number of books:";
			cin >> numberOfBooks;
			for (int i = 0; i < numberOfBooks; i++)
				arrBook[i].loadProductList();
			break;
		case 2:
			cout << "\n * * * DISPLAY PRODUCT LIST * * *\n\n";
			for (int i = 0; i < numberOfBooks; i++)
				arrBook[i].displayProductList();
			break;
		case 3:
			cout << "\n * * * SEARCHING IN THE PRODUCT LIST * * *\n\n";
			cout << "Enter the book name for searching";
			cin >> searchBookName;
			cout << "Enter the author name for searching";
			cin >> searchAuthorName;

			for (int i = 0; i < numberOfBooks; i++)
			{
				if (
					!(searchBookName.compare(arrBook[i].getBookName())) &&
					!(searchAuthorName.compare(arrBook[i].getAuthorName()))
					) {
					cout << "\nThe book is present!" << endl;
					break;
				}
				else if (i == numberOfBooks - 1) {
					cout << "\n The book is not present!" << endl;
				}

			}
			cout << "\n------------------------------------------------------\n";
			break;
		case 4:
			exit(1);

		default:
			cout << "Enter a valide choice";

		}

	}

	return 0;
}
