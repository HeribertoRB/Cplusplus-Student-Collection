//person.h
#ifndef PERSON_H
#define PERSON_H

#include<string>
using namespace std;

class Person
{
 private:
  long SSN;
  string Fname;
  string Lname;
  int Age;
  char Gender;
 public:
  void SetAPerson(long id, string Fn, string Ln, int ag, char Gen);
  void PrintAPerson();
};

#endif
