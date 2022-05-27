#include<Conta.h>

Conta::Conta(){
    mAccountNumber = 0;
    mBalance = 0.0;
}

Conta::Conta(int mAccountNumber_, double mBalance_){
    mAccountNumber = mAccountNumber_;
    mBalance = mBalance_;
}

int Conta::getAccountNumber(){
    return mAccountNumber;
}

double Conta::getBalance(){
    return balance;
}