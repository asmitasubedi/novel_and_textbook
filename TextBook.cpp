/*
Author: Asmita Subedi
Roll No: 0346"A"
Title: An implementation of TextBook Class Derived from base class 'Book'
Date: 3/27/2015
*/
#include<iostream>
#include <string>
#include<cstdlib>
#include "TextBook.h"
using namespace std;

TextBook :: TextBook(string book_name, Author author_name, double book_price, int book_quantity,string which_sub, string which_level, string which_edition)
        : Book(book_name,author_name, book_price, book_quantity )
        {
            subject = which_sub;
            level = which_level;
        }

string TextBook :: getSubjectName()
{
        return subject;
}

string  TextBook :: getLevel()
{
        return level;
}

void TextBook :: setEdition(string which_edition)
{
    edition = which_edition;
}

string TextBook :: getEdition()
{
    return edition;
}

double TextBook :: getValue()
{
    return price*quantity;
}

string TextBook :: toString()
{
    char temp[10];
    itoa(getValue(), temp, 10);
    return Book::toString() + " of subject " + getSubjectName() + " of level " + getLevel() + " with worth price Rs. " + temp ;

}

