/*
Author: Asmita Subedi
Roll No: 0346"A"
Title: An implementation of Author Class
Date: 3/23/2015
*/

#include<iostream>
#include<string>
#include "Author.h"

using namespace std;

Author :: Author(string a_Name, string email_add, char a_Gender)
{
            name = a_Name;
            gender = a_Gender;
            setEmail(email_add);
}

Author :: Author(){

}

void Author::setEmail (string email_add)
{
            email=email_add;
}

string Author :: getName()
{
			return name;
}

string Author :: getEmail()
{
			return email;
}

char Author :: getGender()
{
			return gender;
}

string Author :: toString()
{
            return getName() + " at " + getEmail();
}

