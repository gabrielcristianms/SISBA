#ifndef CONTA_H_
#define CONTA_H_

#include<vector>
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
#endif