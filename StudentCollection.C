//StudentCollection.C
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "StudentCollection.h"

void StudentCollection::GetInfo()
{
  int SSN;
  string Fn;
  string Ln;
  int age;
  char gen;
  int id;
  int ClassN1;
  string course1;
  int ClassN2;
  string course2;
  int ClassN3;
  string course3;

  ifstream fin;
  fin.open("lab3.txt");

  fin >> SSN >> Fn >> Ln >> age >> gen >> id >> ClassN1 >> course1 >> ClassN2 >> course2 >> ClassN3 >> course3;

  while(fin)
    {
      StudentProfile newEntry;
      newEntry.SetAstudentProfile(SSN, Fn, Ln, age, gen, id, ClassN1, course1, ClassN2, course2, ClassN3, course3);
      StCollection.push_back(newEntry);
      fin >> SSN >> Fn >> Ln >> age >> gen >> id >> ClassN1 >> course1 >> ClassN2 >> course2 >> ClassN3 >> course3;
    }
  fin.close();
}

void StudentCollection::PrintCollections()
{
  for(int i=0; i < StCollection.size(); i++)
    {
      cout << "Information about Student " << i << endl;
      cout << "-------------------------" << endl;
      StCollection[i].PrintAStudentProfile();
      cout << endl;
    }
}
