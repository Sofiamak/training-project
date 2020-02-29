#include <bits/stdc++.h> 
#include <iostream>
#include <string>

using namespace std;

class UserAuth
{

    private:
        string username;
        string password;

    public:

        void setPasword(string password){
            this->password=password;
        }
        
        string getPasword(){
            return this->password;
        }

        void setUserName(string username){
            this->username=username;
        }
        
        string getUserName(){
            return this->username;
        }

        void Info(){
            cout<<this->getUserName()<<endl;
            cout<<this->getPasword()<<endl;
        }
};