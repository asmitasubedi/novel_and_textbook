/*
Author: Asmita Subedi
Roll No: 0346"A"
Title: An implementation of Book Class
Date: 3/23/2015
*/

#include<iostream>
#include <string>
#include "Book.h"


using namespace std;

Book :: Book(string book_name, Author author_name, double book_price)
{
    name = book_name;
    author = author_name;
    setPrice(book_price);
}

void Book :: setPrice (double book_price)
{
    price=book_price;
}

string Book :: getBookName()
{
    return name;
}

Author Book::getAuthorName()
{
    return author;
}

double Book :: getPrice()
{
    return price;
}

Book ::	Book(string book_name, Author author_name, double book_price, int book_quantity)
{
    name = book_name;
    author = author_name;
    setPrice(book_price);
    setQuantity(book_quantity);
}

void Book :: setQuantity (int book_quantity)
{
    quantity = book_quantity;
}
int Book :: getQuantity()
{
    return quantity;
}

string Book:: toString()
{
    return getBookName() + " by " + author.toString() ;
}



