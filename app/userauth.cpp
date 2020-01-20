#include <bits/stdc++.h> 
#include <iostream>
#include <string>

using namespace std;

class UserAuth{

    private:
        string UserName;
        string Pasword;

    public:

        void setPasword(string Pasword){
            this->Pasword=Pasword;
        }
        
        string getPasword(){
            return this->Pasword;
        }


        void setUserName(string UserName){
            this->UserName=UserName;
        }
        
        string getUserName(){
            return this->UserName;
        }
};