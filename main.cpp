/*
Author: Asmita Subedi
Roll No: 0346"A"
Title: A Program to use Author and Book Class and their derived classes Novel and TextBook
Date: 3/23/2015
*/

#include <iostream>
#include<string>
#include<ctype.h>
#include "Book.h"
#include "Novel.h"
#include "TextBook.h"

using namespace std;

void getAuthorinfo(string &author_name, string &author_email, char &gender);
void getBookinfo(string &book_name, double &book_price, int &book_quantity);
void getNovelinfo(string &genre, bool &isfictional, int &stars);
void getTextBookinfo(string &subject, string &level, string &edition);

int main()
{
    string author_name,  author_email, book_name, genre, subject, level, edition;
    char gender, choice;
    double book_price;
    int book_quantity, stars;
    bool isfictional;

    cout << "Enter your choice: N for Novel and T for TextBook: ";
    cin >> (choice);

    if((toupper(choice)!='N') && (toupper(choice)!='T'))
        cout << "Invalid choice";
    else
    {
            getAuthorinfo(author_name, author_email, gender);
            Author author1(author_name, author_email, gender);

            getBookinfo(book_name, book_price, book_quantity);

            switch(toupper(choice))
            {
                case 'N':
                {
                    getNovelinfo(genre,isfictional,stars);
                    Novel novel1(book_name, author1, book_price, book_quantity, genre, isfictional, stars );
                    cout << novel1.toString() << endl;
                    cout << "The total worth of the book " << book_name << " is Rs. " << novel1.getValue();
                    break;
                }
                case 'T':
                {
                    getTextBookinfo(subject, level, edition);
                    TextBook tbook1(book_name, author1, book_price, book_quantity, subject, level, edition);
                    cout << tbook1.toString() << endl;
                    break;
                }
            }

    }
}

void getAuthorinfo(string &author_name, string &author_email, char &gender)
{
    cout << "Enter name of the author: ";
    cin.get();
    getline(cin,author_name);

    cout << "Enter email address of author: ";
    getline(cin,author_email);

    cout << "Enter gender of author: ";
    cin >> gender;
    cin.get();
}

void getBookinfo(string &book_name, double &book_price, int &book_quantity)
{
    cout << "Enter book name: ";
    cin.get();
    getline(cin,book_name);

    cout << "Enter the price of the book: ";
    cin >> book_price;

    cout << "Enter quantity of books in stock: ";
    cin>> book_quantity;
}

void getNovelinfo(string &genre, bool &isfictional, int &stars)
{
    cout << "Enter the genre of Novel: " ;
    cin.get();
    getline(cin,genre);

    cout << "Is the novel fictional or not (1 for true/ 0 for false): ";
    cin >> isfictional;

    cout << "Enter the number of the star ratings(out of 10): ";
    cin >> stars;
}

void getTextBookinfo(string &subject, string &level, string &edition)
{
    cout << "Enter which subject does the textbook belong to: ";
    cin.get();
    cin >> subject;

    cout << "For which level is the textbook specified for? " ;
    cin >> level;

    cout << "Enter the edition of the textbook : " ;
    cin >> edition;
}
