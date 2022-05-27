#include "conta.h"

Conta::Conta(){
    mAccountNumber = 0;
    mBalance = 0.0;
}

Conta::Conta(int mAccountNumber_){
    mAccountNumber = mAccountNumber_;
}

int Conta::getAccountNumber(){
    return mAccountNumber;
}

double Conta::getBalance(){
    return mBalance;
}
