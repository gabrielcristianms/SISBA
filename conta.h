#include<vector>
#include<utility>
#include<iostream>

class Conta{
private:
    int mAccountNumber;
    double mBalance;
public:
    Conta(/* args */);

    Conta(int);
    
    int getAccountNumber();
    double getBalance();
};