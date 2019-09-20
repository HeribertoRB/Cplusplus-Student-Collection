//course.C
#include <iostream> //you should be using cout in this file
using namespace std;
#include "course.h" //include the class definition

void Course::SetACourse(long num, string name)
{
  CourseNum = num;
  CourseName = name;
}

void Course::PrintACourse()
{
  cout << "Name of the course " << CourseName << endl;
  cout << "Number of the course " << CourseNum << endl;
}


