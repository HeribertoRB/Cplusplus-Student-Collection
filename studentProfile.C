//studentProfile.C
#include <iostream>
using namespace std;
#include "studentProfile.h"

void StudentProfile::SetAstudentProfile(long id, string Fn, string Ln, int ag, char Gen, long SN, long  C1Num, string C1Name, long C2Num, string C2Name, long C3Num, string C3Name)
{
  PersonalInfo.SetAPerson(id, Fn, Ln, ag, Gen);
  StdInfo.SetAStudent(SN, C1Num, C1Name, C2Num, C2Name, C3Num, C3Name);
}

void StudentProfile::PrintAStudentProfile()
{
  PersonalInfo.PrintAPerson();
  StdInfo.PrintAStudent();
}

