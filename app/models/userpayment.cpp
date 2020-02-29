#include <bits/stdc++.h> 
#include <iostream>
#include <string>

using namespace std;

class UserPayment
{

    private:
        double amount;
        string currency;
        
    
    public:
        
        void setAmount(double amount){
            this->amount=amount;
        }

        double getAmount(){
            return this->amount;
        }
        void setCurrency(string currency){
             this->currency=currency;
        }

        string getCurrency(){
            return this->currency;
        }

        void Info(){
            cout<<this->getAmount()<<endl;
            cout<<this->getCurrency()<<endl;
        }
};