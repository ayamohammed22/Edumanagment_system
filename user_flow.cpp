#include"user_flow.h"
#include"manger_doctor.h"
#include"manger_student.h"
#include<iostream>
#include<string>
using namespace std;
void User::Show_menu(){
      cout<<"Main Menu \n";
      cout<<"1)sign up\n";
      cout<<"2)log in\n";
      cout<<"3)shut down\n";
      while(true){
      int x; cin>>x;
      if(x==1){
          Signup();
          login();
      }
      else if(x==2){
          login();
      }
      else if(x==3){
         return ;
      }
      else{
        cout<<"Invalid Input , Pleass Try again :)\n";
      }
      }
}
void login(){
      string username_;
      string password_;
      while(true){
      cout<<"Enter your Username and Password \n";
      cin>>username_>>password_;
        auto it=Isvalid_doctoruser(username_,password_);
       if(it!=Doctors_.end()){
            Doctor temp;
            temp.Main_Menu(it);
            return ;
       }
       it=Isvalid_studentUser(username_,password_);
        if(it!=Student_.end()){
            Student temp;
            temp.main_menu(it);   
            return ;
         }
        
        cout<<"username or password Wrong , Pleass try again :)\n";
    }
}
void signup(){
       cout<<"1) Doctor\n";
       cout<<"2) Stuudent\n";
       cout<<"Enter Your choice\n";
       int x; cin>>x;
       if(x==1){
          Student_.emplace_back();
          auto it=Student_.back();
          it.id=++ucnt;
          it.type=0;
          cout << "Enter username(no spaces): ";
          cin >> it.username;
          cout << "Enter Your name: ";
          cin>>it.name;
          cout << "Enter Your password: ";
          cin >> it.password;
         cout << "\n";
          cout << "Enter Your email: ";
          cin >> it.email;
          cout << "\n";   
          Student temp;
          temp.update_data();
       }
       else {
              Doctors_.emplace_back();
          auto it=Doctors_.back();
          it.id=++ucnt;
          it.type=0;
          cout << "Enter username(no spaces): ";
          cin >> it.username;
          cout << "Enter Your name: ";
          cin>>it.name;
          cout << "Enter Your password: ";
          cin >> it.password;
         cout << "\n";
          cout << "Enter Your email: ";
          cin >> it.email;
          cout << "\n";   
          Doctor temp;
          temp.updatedata();
       }
}
int main(){
       Student temp1;
       Doctor temp2;
    temp1.adddata();
    temp2. AddData();
     User temp3;
     temp3.Show_menu();
}
