//course.h
#ifndef  COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course
{
 private:
  long CourseNum;
  string CourseName;
 public:
  void SetACourse(long num, string name);
  void PrintACourse();
};

#endif
