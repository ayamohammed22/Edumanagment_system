#include "course.h"
#include "assignment.h"
#include "manger_doctor.h"
#include<iostream>
#include<vector>
using namespace std;
void Doctor :: Main_Menu( auto doctor){
    while(true){
    cout<<"Please make a choice \n";
    vector<string>menu={ "List Courses", "Create course", "View Course", "Log out"};
    for(int i=0;i<4;i++)
      cout<<i+1<<") "<<menu[i]<<"\n";
      int choice ;
      cin>>choice;
      if(choice==1){
          cout<<"You are taught "<<courses.size()<<" courses\n";
          int indx=1;
          for(auto it:Courses_){
            cout<<indx<<" ) course name is "<<it.name<<"and is code "<<it.code<<"\n";
            indx++;
          }
      }
      else if(choice==2){
            management_course temp;
             temp.addcourse();
      }
      else if(choice==3){
          cout<<"Enter code of course \n";
          string code;
          cin>>code;
          viewcourse(code);
      }
      else if(choice==4){
        return ;
      }
      else{
        cout<<"Invalid Input ,Try again  \n";
      }
    }
}
void Doctor :: viewcourse(string code){
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
        cout<<"2) create assiment \n";
        cout<<"3) view assiment \n";
        cout<<"4) back\n";
        cout<<"Please enter num from 1 to 4 \n";
        int x; 
        cin>>x;
        if(x==1){
            for(auto assigments:it->assignments)
                 cout<<"Assigment content "<<assigments.content<<"\n";
        }
        else if(x==2){
             cout<<"Enter Assigment Content \n";
            it->assignments.emplace_back();
            it->assignments.back().id=cnt++;
             cin>>it->assignments.back().content;
            // updata_data();
        }
        else if(x==3){
            cout<<"Enter assignment id \n";
            int id; cin>>id;
            for(auto assigment:it->assignments){
               if(assigment.id==id){
                  for(auto it2:assigment.answers)
                      cout<<"Student ID "<<it2.first<<" and his answer \n";
                  break;
               }
            }
        }
        else if(x==4){
            return ;
        }
        else{
            cout<<"Is Invalid input, Please try again :)\n";
        }
    }
} 
auto Isvalid_doctoruser(string username,string password){
          auto it=Doctors_.begin();
          while(it!=Doctors_.end()){
            if(it->username==username and it->password==password) {
              break;
            }
          }
          return it;
}
