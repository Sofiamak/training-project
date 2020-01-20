#include <bits/stdc++.h> 
#include <iostream>
#include <string>
#include "userauth.cpp"

using namespace std;

class UserInformation: public UserAuth {
    private:

        string FName;
        string LName;
        double AmountSum;
        string Currency;

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

        
        void setCurrency(string Currency){
             this->Currency=Currency;
        }

        string getCurrency(){
            return this->Currency;
        }
        
         
        void setAmountSum(double AmountSum){
            this->AmountSum=AmountSum;
        }

        double getAmountSum(){
            return this->AmountSum;
        }

};