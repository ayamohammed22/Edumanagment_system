#ifndef USER_FLOW_H_
#define USER_FLOW_H_
#include<iostream>
#include <string>
// #include"adddata.h"
using namespace std;
static int ucnt;
class User{
    public:
    int id;
    string username;
    string name;
    string password;
    bool type;  // 1 doctor 2 student
    string email;
    void Show_menu();
    void Signup();
    void login();
};

#endif
