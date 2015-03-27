/*
Author: Asmita Subedi
Roll No: 0346"A"
Title:  An interface of TextBook Class Derived from base class 'Book'
Date: 3/27/2015
*/
#include<string>
#include "Book.h"
using namespace std;

#ifndef TEXTBOOK_H
#define TEXTBOOK_H

class TextBook : public Book{
    private:
        string subject;
        string level;
        string edition;

    public:
        TextBook(string, Author, double, int, string, string, string);

        string getSubjectName();
        string getLevel();
        void setEdition(string );
        string getEdition();
        double getValue();
        string toString();
};
#endif // TEXTBOOK_H

