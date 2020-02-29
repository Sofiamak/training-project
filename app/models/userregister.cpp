
#include <bits/stdc++.h> 
#include <iostream>
#include <string>

using namespace std;

class  UserRegister
{
    private: 
        string fName;
        string lName;
        int age;
        string passport;
        string country;
        string username;
        string password;
        

    public:

        void setFName(string fName){
            this->fName=fName;
        }
        
        void setLName(string lName){
            this->lName=lName;
        }

        string getFName(){
            return this->fName;
        }
        
        string getLName(){
            return this->lName;
        }

        void setAge(int age){
            this->age=age;
        }
        
        int getAge(){
            return this->age;
        }

        void setPassport(string passport){
            this->passport=passport;
        }
        
        string getPassport(){
            return this->passport;
        }

        void setCountry(string country){
            this->country=country;
        }
        
        string getCountry(){
            return this->country;
        }

        void setPasword(string password){
            this->password=password;
        }

        void setUserName(string username){
            this->username=username;
        }

        string getPasword(){
            return this->password;
        }

        string getUsername(){
            return this->username;
        }

        void Info(){
            cout<<this->getFName()<<endl;
            cout<<this->getLName()<<endl;
            cout<<this->getAge()<<endl;
            cout<<this->getPassport()<<endl;
            cout<<this->getPasword()<<endl;
            cout<<this->getUsername()<<endl;
            cout<<this->getCountry()<<endl;
        }
};