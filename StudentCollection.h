//StudentCollection.h
#ifndef STUDENTCOLLECTION_H
#define STUDENTCOLLECTION_H

#include <vector>
using namespace std;
#include "studentProfile.h"

class StudentCollection
{
 private:
  vector<StudentProfile> StCollection;
 public:
  void GetInfo();
  void PrintCollections();
};

#endif
