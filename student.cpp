#include "student.h"
#include <string>
#include <iostream>
#include <vector>
using std::string;
using std::cin;
void student::setName(string first, string last)
{
        firstName=first;
        lastName=last;
}

string student::fullName()
{
        string name;
        name = firstName;
        name.append(" ");
        name.append(lastName);
        return name;
}

void student::addGrade(int num)
{
        grades.push_back(num);
}

double student::getScore()
{
        double scores=0;
        for (int i=0; i<grades.size();i++)
        {
                scores = scores + grades.at(i);
        }
        if (grades.size()>0)
        {
                scores = scores / grades.size();
        }

                
                return scores;
}
