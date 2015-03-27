/*
Author: Asmita Subedi
Roll No: 0346"A"
Title: An interface of Author Class
Date: 3/23/2015
*/

#include<string>

using namespace std;

#ifndef AUTHOR_H
#define AUTHOR_H
class Author
{
    private:
        string name;
        string email;
        char gender;
    public:
        Author(string, string, char);
        Author();
        void setEmail (string);
        string getName();
        string getEmail();
        char getGender();
        string toString();

};
#endif


