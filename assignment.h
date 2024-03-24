#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include <cstring>
#include <vector>
 using namespace std;
 static int cnt=1;
struct Assignment
{
    string content;
    string prof_notes;
    int id;
    int fullmark;
    int grade;
    vector<pair<int,string>> answers; // student code , his answer 
};
#endif 