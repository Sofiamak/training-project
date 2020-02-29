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
    const char * UINFORMATION= "2-User Information";
    const char * UPAYMENT = "3-User Payment";
    const char * UREGISTRATION = "4-Registration of User";
    
    const char * RETURN_MENU = "Do you want to return to menu?(yes or no)";
    const char *TRUE_STR="yes";
    const char *FALSE_STR="no";
    const char *RETURN_AUTH="Do you want to authorize?(yes or no)";
    const char *TEXT_ERROR="Incorrect input, enter again.";


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
       
       cout<<"USER AUTH:"<<endl;
       cout<<"Insert Username:"<<endl;
       cin>>this->username;
       cout<<"Insert Password:"<<endl;
       cin>>this->password;
       
       ua.setUserName(this->username);
       ua.setPasword(this->password);
      
       cout<<"SUCCESS:"<<endl;
       ua.Info();
    }

    void userinfoAction(){
       string auth;
       cout<<"USER INFORMATION:"<<endl;
       cout<<RETURN_AUTH<<endl;
       cin>>auth;

       if (auth!=TRUE_STR || auth!=FALSE_STR){
           
            while(true)
            {   
                cout<<TEXT_ERROR<<endl;
                cin>>auth;
                if(auth!=TRUE_STR||auth!=FALSE_STR){
                   continue;
                }
                break;
            }
       }
       
        if (auth==TRUE_STR){
            system("clear");
            userauthAction();
            return;
        } 
        
        if(auth==FALSE_STR){
            cout<<"SUCCESS:"<<endl;
            ui.Info();
            return;
        }

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
       cout<<"SUCCESS:"<<endl;
      
       ur.Info();
        return;
    }

    void userpaymentAction(){
       up.setCurrency("USD");
       up.setAmount(10.65);
       cout<<"SUCCESS:"<<endl;
       up.Info();
       return;
    }

public:
    void  consoleRun(){
      string str;
      cin>>this->operation;
      cout<<RETURN_MENU<<endl;
      cin>>str;
      if(str==TRUE_STR){
        system("clear");
        optionsCout();
        return;
      }
      this->switchAction(operation);
    }

     void optionsCout(){
        cout<<UAUTH<<endl;
        cout<< UINFORMATION<<endl;
        cout<<UPAYMENT<<endl;
        cout<<UREGISTRATION<<endl;
        cout<<"select:"<<endl;
    }
    
};