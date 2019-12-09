#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>
using std::string;
using std::vector;
class student
{
private:
        string firstName="";
        string lastName="";
        vector<double> grades;

                

public:
       void setName(string first, string last);
       string fullName();
       void addGrade(int num);
       double getScore();
};





#endif


