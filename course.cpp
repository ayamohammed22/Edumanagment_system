#include"course.h"

// #include"student.h"
#include"assignment.h"
#include<string>
#include<vector>
#include <iostream>
using namespace std;
void management_course::addcourse(){
    cout<<"Enter name and code of course\n";
    Course newcourse;
    cin>>newcourse.name>>newcourse.code;
    Courses_.push_back(newcourse);
    updata_data();
    return ;
}
void management_course::showcourses(){
    for(auto course:Courses_)
       cout<<"The course name "<<course.name<<" and code is "<<course.code<<endl;
       return ;
}

