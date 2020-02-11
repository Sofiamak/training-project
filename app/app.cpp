#include <bits/stdc++.h> 
#include <iostream>
#include <string>
#include "userinformation.cpp"

using namespace std;

class  App
{

private:
    UserInformation ui;
    int operation ;
    string userName;
    string password;

public:
    
    void   loginOrSignupUser(){

           cout<<"Login or SingUp:"<<endl;
           cout<<"1- registration of user"<<endl;
           cout<<"2- login user"<<endl;
           cout<<"SELECT:"<<endl;
           cin>>this->operation;

       
            switch (this->operation) {
                case 1:
                cout << "Registration of User";
            break;
                case 2:
                cout << "Login User"<<endl;
                cout<<"Input your name:"<<endl;
                cin>>this->userName;
                cout<<"Input your password:"<<endl;
                cin>>this->password;
                this->ui.setUserName(this->userName);
                this->ui.setPasword(this->password);
                cout<<this->ui.getUserName()<<endl;
                cout<<this->ui.getPasword()<<endl;
            break;
                default:
                cout << "Error. Make a choice";
            }

    }
  

};