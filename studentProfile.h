//studentProfile.h
#ifndef STUDENTPROFILE_H
#define STUDENTPROFILE_H

#include <string>
using namespace std;
#include "person.h"
#include "student.h"

class StudentProfile
{
 private:
  Person PersonalInfo;
  Student StdInfo;
 public:
  void SetAstudentProfile(long id, string Fn, string Ln, int ag, char Gen, long SN, long  C1Num, string C1Name, long C2Num, string C2Name, long C3Num, string C3Name);

 
  void PrintAStudentProfile();
};

#endif
