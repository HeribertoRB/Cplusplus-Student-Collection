//student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;
#include "course.h"

class Student
{
 private:
  long StNo;
  Course Course1;
  Course Course2;
  Course Course3;
 public:
  void SetAStudent(long SN, long  C1Num, string C1Name, long C2Num, string C2Name, long C3Num, string C3Name);
  void PrintAStudent();
};

#endif
