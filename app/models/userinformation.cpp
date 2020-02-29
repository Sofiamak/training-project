#include <bits/stdc++.h> 
#include <iostream>
#include <string>

using namespace std;

class UserInformation 
{
    private:

        string fName;
        string lName;
        double amountSum;
        string currency;

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

        
        void setCurrency(string currency){
             this->currency=currency;
        }

        string getCurrency(){
            return this->currency;
        }
        
         
        void setAmountSum(double amountSum){
            this->amountSum=amountSum;
        }

        double getAmountSum(){
            return this->amountSum;
        }

        void Info(){
            cout<<this->getFName()<<endl;
            cout<<this->getLName()<<endl;
            cout<<this->getAmountSum()<<endl;
            cout<<this->getCurrency()<<endl;
        }

};