/*
Author: Asmita Subedi
Roll No: 0346"A"
Title:  An implementation of Novel Class Derived from base class 'Book'
Date: 3/27/2015
*/

#include<iostream>
#include <string>
#include<cstdlib>
#include "Novel.h"
using namespace std;

Novel :: Novel(string book_name, Author author_name, double book_price, int book_quantity, string which_genre, bool is_fictional, int star_ratings )
        : Book(book_name,author_name, book_price, book_quantity )
        {
            genre = which_genre;
            isfictional = is_fictional;
            setRatings(star_ratings);

        }

void Novel :: setRatings( int star_ratings)
{
        ratings = star_ratings;
}

int Novel :: getRatings()
{
        return ratings;
}

string Novel :: getWhichGenre()
{
    return genre;
}

bool Novel :: getFic_NonFic()
{
    return isfictional;
}

double Novel :: getValue()
{
    return price*quantity;
}

string Novel :: toString()
{
    char temp[5];
    itoa(getRatings(), temp, 10);
    return Book::toString() + " of genre " + getWhichGenre() + " with ratings " + temp ;
}
