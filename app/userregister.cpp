
#include <bits/stdc++.h> 
#include <iostream>
#include <string>
#include "userauth.cpp"

using namespace std;

class  UserRegister: protected UserAuth
{
    private: 
        string FName;
        string LName;
        int Age;
        string Passport;
        string Country;
        

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

        void setAge(int Age){
            this->Age=Age;
        }
        
        int getAge(){
            return this->Age;
        }

        void setPassport(string Passport){
            this->Passport=Passport;
        }
        
        string getPassport(){
            return this->Passport;
        }

        void setCountry(string Country){
            this->Country=Country;
        }
        
        string getCountry(){
            return this->Country;
        }

        void setPaswordCopy(string Pasword){ //wrapper
            this->setPasword(Pasword);
        }

        void setUserNameCopy(string UserName){ //wrapper
            this->setUserName(UserName);
        }


        void Info(){
            cout<<this->getFName()<<"\n";
            cout<<this->getLName()<<"\n";
            cout<<this->getAge()<<"\n";
            cout<<this->getPassport()<<"\n";
            //cout<<this->getPasword()<<"\n";
            cout<<this->getCountry()<<"\n";
            //cout<<this->getUserName()<<"\n";
        }

};