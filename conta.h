#include<vector>
#include<utility>
#include<iostream>

class Conta{
private:
    int mAccountNumber;
    double mBalance;
public:
    Conta(/* args */);

    Conta(int, double);
    
    int getgAccountNumber();
    double getBalance();
};