#include<iostream>
using namespace std;
#include "student.h"

void Student::SetAStudent(long SN, long C1Num, string C1Name, long C2Num, string C2Name, long C3Num, string C3Name)
{
  StNo = SN;
  Course1.SetACourse(C1Num, C1Name);
  Course2.SetACourse(C2Num, C2Name);
  Course3.SetACourse(C3Num, C3Name);
}

void Student::PrintAStudent()
{
  cout << "Student ID: " << StNo << endl;
  cout << "Course 1: ";
  Course1.PrintACourse();
  cout << "Course 2: ";
  Course2.PrintACourse();
  cout << "Course 3: ";
  Course3.PrintACourse();
}
