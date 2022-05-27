#include<vector>
#include<utility>
#include<iostream>

class conta{
private:
    int account_number;
    double balance;
public:
    conta(/* args */);

    conta(int account_number_, double balance_){
        account_number = account_number_;
        balance = balance_;
    }
    
    int getAccount_Number(){
        return account_number;
    }

    double getBalance(){
        return balance;
    }

};

