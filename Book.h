/*
Author: Asmita Subedi
Roll No: 0346"A"
Title: An interface of Book Class
Date: 3/23/2015
*/

#include<string>
#include "Author.h"
using namespace std;

#ifndef BOOK_H
#define BOOK_H


class Book
{
    private:
        string name;
        Author author;

    protected:
        double price;
        int quantity;

    public:

        Book(string, Author, double);
        Book(string, Author, double, int);
        void setPrice (double);
		string getBookName();
		Author getAuthorName();
		double getPrice();
		void setQuantity (int);
		int getQuantity();
		string toString();

};
#endif

