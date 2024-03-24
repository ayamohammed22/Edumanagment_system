#include "manger_student.h"
#include "course.h"
#include<iostream>
using namespace std;
void Student::main_menu(auto student){
    while(true){
        cout<<"1) Register in course\n";
        cout<<"2) List My courses\n";
        cout<<"3)View a course \n";
        cout<<"4) Grades Report \n";
        cout<<"5) Log out \n";
        cout<<"Please Enter Your Choice (1:4)\n";
        int x;
        cin>>x;
        if(x==1){
           cout<<"Enter Code of course \n";
           string code;
           cin>>code;     
           bool ok=false;
           for(auto course:Courses_){
               if(course.code==code){
                ok=true;
                  course.registered_student.push_back(student.name);
                  break;
               }
           }
           if(!ok)
           cout<<"Invalid code\n";
        }
        else if(x==2){
            int cnt=1;
           for(auto it:student.courses)
              cout<<cnt<<") "<<it<<"\n";
        }
        else if(x==3){
           cout<<"Enter code of corse \n";
           string code; 
           cin>>code;
           viewcourse(code);
        }
        else if(x==4){
                for(auto it:student.report)
                     cout<<"In course "<<it.first<<" your grade is "<<it.second<<"\n";
        }
        else if(x==5){
            return ;
        }
        else {
           cout<<"Is invalid input, please try again :)\n";
        
        }
    }
}
void Student :: viewcourse(string code){
     auto it=courses.begin();
    while(it!=courses.end()){
        if(it->code==code) break;
        it++;
    }  
    if(it==courses.end()){
        cout<<"Is invalid code\n";
        return ;
    }
    while(true){
        cout<<"1) list of assiments\n";
        cout<<"2) answer assiment \n";
        cout<<"3) back\n";
        cout<<"Please enter num from 1 to 4 \n";
        int x; 
        cin>>x;
        if(x==1){
            for(auto assigments:it->assignments)
                 cout<<"Assigment content "<<assigments.content<<"\n";
        }
        else if(x==2){
             cout<<"Enter Assigment id \n";
              int id; 
              cin>>id;
              bool ok=false;
              for(auto ass:it->assignments){
                if(ass.id==id){
                    cout<<"Enter Your answer \n";
                    string ans;
                    cin>>ans;
                    ass.answers.emplace_back(student.id,ans);
                    // update data
                    ok=true;
                    break;
                }
              }
            if(!ok)
               cout<<"Invalid input\n";
        }
        else if(x==3){
          return ;
        }
        else{
            cout<<"Is Invalid input, Please try again :)\n";
        }
    }
}
auto Isvalid_doctoruser(string username,string password){
          auto it=Student_.begin();
          while(it!=Student_.end()){
            if(it->username==username and it->password==password) {
              break;
            }
          }
          return it;
}