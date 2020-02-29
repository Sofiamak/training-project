#include <bits/stdc++.h> 
#include <iostream>
#include <string>
#include "models/userinformation.cpp"
#include "models/userauth.cpp"
#include "models/userpayment.cpp"
#include "models/userregister.cpp"

using namespace std;

class Console
{

private:
   
    UserAuth  ua;
    UserInformation ui;
    UserPayment up;
    UserRegister ur;

public:
   
    const char * UAUTH = "1-Login User";
    const char * UREGISTRATION = "2-Registration of User";
    const char * UPAYMENT = "3-User Payment";
    const char * UINFORMATION= "4-User Information";
    const char * CHANGE_OPTIONS= "you can change options:";


private:

    int   operation;
    string username;
    string password;
    string fName;
    string lName;
    double amountSum;
    string currency;
    int age;
    string passport;
    string country;

    enum  action { 
        userauth=1, 
        userinfo, 
        userpayment, 
        userregister 
    };

    void optionsCout(){
        cout<<UREGISTRATION<<";";
        cout<<UAUTH<<";";
        cout<<UPAYMENT<<";";
        cout<< UINFORMATION<<endl;
    }
    
    void switchAction(int operation){
        switch(operation)
        {
            case userauth: this->userauthAction(); break;
            case userinfo: this->userinfoAction(); break;
            case userpayment : this->userpaymentAction();  break;
            case userregister : this->userregisterAction();  break;
        }
    }

   void  userauthAction(){
       
       cout<<"Insert Username:"<<endl;
       cin>>this->username;
       cout<<"Insert Password:"<<endl;
       cin>>this->password;
       
       ua.setUserName(this->username);
       ua.setPasword(this->password);
      
       cout<<"SUCCESS:"<<endl;
       ua.Info();
     
      // system("clear");
    }

    void userinfoAction(){
        ui.Info();
        return;
    }

    void userregisterAction(){
      
       cout<<"Insert FName:"<<endl;
       cin>>this->fName;
       cout<<"Insert LName:"<<endl;
       cin>>this->lName;
       cout<<"Insert Username:"<<endl;
       cin>>this->username;
       cout<<"Insert Password:"<<endl;
       cin>>this->password;

        
       ur.setFName(this->fName);
       ur.setLName(this->lName);
       ur.setPassport("passport");
       ur.setCountry("country");
       ur.setAge(300);
       ur.setUserName(this->username);
       ur.setPasword(this->password);
       ur.Info();
        return;
    }

    void userpaymentAction(){
       up.setCurrency("USD");
       up.setAmount(10.65);
       up.Info();
       return;
    }

public:
    void  consoleRun(){
      cin>>this->operation;
      this->switchAction(operation);
    }


};