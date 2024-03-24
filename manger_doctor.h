#ifndef MANGER_DOCTOR_H
#define MANGER_DOCTOR_H
#include "user_flow.h"
#include<vector>
using namespace std;
class Doctor{
     public :
      User Doctor;
       vector<Course>courses;
         void AddData();
         void updatedata();
         void Main_Menu(auto );
         void viewcourse(string);
};
auto Isvalid_doctoruser(string ,string);
vector<User>Doctors_;
#endif