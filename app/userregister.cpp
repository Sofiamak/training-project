
#include <bits/stdc++.h> 
#include <iostream>
#include <string>

using namespace std;

class  UserRegister
{
    private: 
        string FName;
        string LName;

    public:

        void setFName(string FName){
            this->FName=FName;
        }
        
        void setLName(string LName){
            this->LName=LName;
        }

        string getFName(){
            return this->FName;
        }
        
        string getLName(){
            return this->LName;
        }

        void Info(){
            cout<<this->getFName()<<"\n";
            cout<<this->getLName()<<"\n";
        }
};