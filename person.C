//person.C
 #include <iostream>
using namespace std;
#include "person.h"

void Person::SetAPerson(long id, string Fn, string Ln, int ag, char Gen)
{
  SSN = id;
  Fname = Fn;
  Lname = Ln;
  Age = ag;
  Gender = Gen;
}

void Person::PrintAPerson()
{
  cout << "Firts Name of Person: " << Fname << endl;
  cout << "Last Name of Person: " << Lname << endl;
  cout << "Social Security Number of Person: " << SSN << endl;
  cout << "Age of Person: " << Age << endl;
  cout << "Gender of Person: " << Gender << endl;

}
