/*
Author: Asmita Subedi
Roll No: 0346"A"
Title:  An interface of Novel Class Derived from base class 'Book'
Date: 3/27/2015
*/

#include<string>
#include "Book.h"
using namespace std;

#ifndef NOVEL_H
#define NOVEL_H

class Novel : public Book{
    private:
        string genre;
        bool isfictional;
        int ratings;
    public:
        Novel(string , Author , double , int , string , bool , int );
        void setRatings( int );
        int getRatings();
        string getWhichGenre();
        bool getFic_NonFic();
        double getValue();
       string toString();
};
#endif

