#include <sstream>
#include <string>
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
    std::stringstream ss;
    std::string input;
    char escolha = '\0';

    //Boas vindas
    std::cout << "Seja bem vindo ao SISBA" << std::endl;
    while(true){
        std::cout << "Digite a operacao que deseja realizar:" << std::endl;
        std::cout << "1-Cadastrar Conta\n2-Consultar Conta\n3-Operacao de Credito\n4-Operacao de Debito\n5-Transferencia\n0-Sair\n\nPor favor efetue sua escolha\n";
        std::cin >> escolha;

        //Criar Conta
        if(escolha == '1'){
            std::cout << "Voce escolheu 'Cadastrar uma conta'! Por favor, insira o numero de conta que deseja para a nova conta:\n";
            std::cin >> input;
            ss << input;
            int numeroConta;
            ss >> numeroConta;
            ss.clear();
            input.clear();
            Conta novaConta = createAccount(numeroConta);
            listaContas.push_back(novaConta);
            std::cout << "A conta " << novaConta.getAccountNumber() << " foi criada com sucesso!\n\n";
        }
        //Consultar Conta
        else if(escolha == '2'){
            std::cout << "Por favor, digite o numero da conta que deseja consultar:\n";
            std::cin >> input;
            ss << input;
            int numeroConta;
            ss >> numeroConta;
            ss.clear();
            input.clear();
            for (auto &&i : listaContas){
                if(i.getAccountNumber() == numeroConta)
                    std::cout << "A conta de numero " << numeroConta << " possui o seguinte saldo: " << i.getBalance() << std::endl;
            }
        }
        //Creditar conta
        else if(escolha == '3'){
            std::cout << "Digite o numero da conta que deseja relizar credito e o valor (ex 666 2345.50):\n";
            std::cin >> input;
            ss << input;
            int numeroConta;
            double valor;
            ss >> numeroConta;
            ss >> valor;

            for (auto &&i : listaContas){
                if(i.getAccountNumber() == numeroConta){
                    i.setBalance(valor); //implementar setBalance
                    std::cout << "O valor " << valor << " foi creditado na conta de numero " << numeroConta << std::endl;
                }
            }
            
        }

        //Debitar conta
        else if(escolha == '4'){
            std::cout << "Digite o numero da conta que deseja relizar debito e o valor (ex 666 2345.50):\n";
            std::cin >> input;
            ss << input;
            int numeroConta;
            double valor;
            ss >> numeroConta;
            ss >> valor;

            for (auto &&i : listaContas){
                if(i.getAccountNumber() == numeroConta){
                    i.setBalance(valor); //implementar setBalance
                    std::cout << "O valor " << valor << " foi debitado na conta de numero " << numeroConta << std::endl;
                }
            }
            
        }

        //Transferência entre contas
        else if(escolha == '5'){
            //Ler numero da conta origem-destino, valor e então executar o débito em uma e o crédito em outra
        }

        if(escolha == '0'){
            break;
        }
        
    }
    //transferência
    //sair
}