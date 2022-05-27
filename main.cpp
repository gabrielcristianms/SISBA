#include <iostream>
#include "conta.h"

Conta createAccount(const int acc_number){
    Conta conta(acc_number);
    return conta;
}

double checkBalance(int acc_number){
    return 0.0;
}

bool credit(int acc_number, double value){
    return false;
}

bool debit(int acc_number, double value){
    return false;
}

bool transfer(int origin_acc, int destination_acc, double value){
    return false;
}


int main(){
    //iniciar programa
    std::vector<Conta> listaContas;
    char escolha = '\0';

    //Boas vindas
    std::cout << "Seja bem vindo ao SISBA" << std::endl;
    while(true){
        std::cout << "Digite a operacao que deseja realizar:" << std::endl;
        std::cout << "1-Cadastrar Conta\n2-Consultar Conta\n3-Operacao de Credito\4-Operacao de Debito\n5-Transferencia\n0-Sair\n\nPor favor efetue sua escolha\n\n";
        std::cin >> escolha;

        if(escolha == '0'){
            break;
        }
        
    }
    //listar opções
    //cadastrar conta
    //consultar conta
    //crédito
    //débito
    //transferência
    //sair
}