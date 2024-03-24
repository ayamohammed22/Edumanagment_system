#ifndef course_H
#define course_H
#include"assignment.h"
#include<string>
#include<vector>
using namespace std;
struct Course{
     string name;
    string code;
    string name_doctor;
    vector<string>registered_student;
    vector<Assignment > assignments;
};
class management_course:Course{
    public:
    void addcourse();
    void showcourses();
};
vector<Course>Courses_;
void add_data();
void updata_data();
#endif
