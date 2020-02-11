#include <bits/stdc++.h> 
#include <iostream>
#include <string>
#include "userauth.cpp"

using namespace std;

class UserPayment: public UserAuth{

    private:
        double Amount;
        string Currency;
        
    
    public:
        
        void setAmount(double Amount){
             this->Amount=Amount;
        }

        double getAmount(){
            return this->Amount;
        }
        void setCurrency(string Currency){
             this->Currency=Currency;
        }

        string getCurrency(){
            return this->Currency;
        }

        void Info(){
            cout<<this->getAmount()<<endl;
            cout<<this->getCurrency()<<endl;
            cout<<this->getUserName()<<endl;
            cout<<this->getPasword()<<endl;
        }
};