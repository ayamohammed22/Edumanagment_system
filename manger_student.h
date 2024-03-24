#ifndef MANGER_STUDENT_H
#define MANGER_STUDENT_H
#include "user_flow.h"
#include"course.h"
#include <vector>
#include "string"
class Student{
    public:
      User student;
      vector<Course>courses;
      vector<pair<string,int>>report; // code sourse, grade
      void adddata();
      void update_data();
      void viewcourse(string);
      void main_menu(auto);

};
vector<User>Student_;
auto Isvalid_studentUser(string ,string);
#endif