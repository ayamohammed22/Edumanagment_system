#include "assignment.h"
#include "course.h"
#include "manger_doctor.h"
#include "manger_student.h"
#include <fstream>
void Student::adddata()
{
    ifstream data1;
    data1.open("student.txt");
    Student_.clear();
    if (data1.is_open())
    {
        while (data1.good())
        {
            Student_.emplace_back();
            data1 >> Student_.back().id >> Student_.back().username >> Student_.back().password >> Student_.back().name >> Student_.back().type >> Student_.back().email;
        }
    }
    else
    {
        cout << "Failed downloads data of student\n";
    }
    data1.close();
}
void Student ::update_data()
{
    ofstream data1;
    data1.open("student.txt", ios ::trunc);
    if (data1.is_open())
    {
        for (auto p : Student_)
            data1 << p.id << " " << p.username << " " << p.password << " " << p.name << " " << p.type << " " << p.email << "\n";
    }
    else
    {
        cout << "Failed downloads of student \n";
    }
    data1.close();
}

void Doctor::AddData()
{
    ifstream data1;
    data1.open("doctor.txt");
    Student_.clear();
    if (data1.is_open())
    {
        while (data1.good())
        {
            Student_.emplace_back();
            data1 >> Student_.back().id >> Student_.back().username >> Student_.back().password >> Student_.back().name >> Student_.back().type >> Student_.back().email;
        }
    }
    else
    {
        cout << "Failed downloads data of doctor\n";
    }
    data1.close();
}
void Doctor ::updatedata()
{
    ofstream data1;
    data1.open("doctor.txt", ios ::trunc);
    if (data1.is_open())
    {
        for (auto p : Doctors_)
            data1 << p.id << " " << p.username << " " << p.password << " " << p.name << " " << p.type << " " << p.email << "\n";
    }
    else
    {
        cout << "Failed downloads of doctor \n";
    }
    data1.close();
}