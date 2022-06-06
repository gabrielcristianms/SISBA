#include <sstream>
#include <string>
#include "conta.h"

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
            int numero_conta = 0;
            ss >> numero_conta;
            ss.clear();
            input.clear();
            Conta novaConta = Conta(numero_conta);
            listaContas.push_back(novaConta);
            std::cout << ">>>>>>> A conta " << novaConta.getAccountNumber() << " foi criada com sucesso!\n\n";
        }
        //Consultar Conta
        else if(escolha == '2'){
            std::cout << "Por favor, digite o numero da conta que deseja consultar:\n";
            std::cin >> input;
            ss << input;
            int numero_conta = 0;
            ss >> numero_conta;
            ss.clear();
            input.clear();
            for (auto &&i : listaContas){
                if(i.getAccountNumber() == numero_conta)
                    std::cout << ">>>>>>> A conta de numero " << numero_conta << " possui o seguinte saldo: " << i.getBalance() << "\n\n";
            }
        }
        //Creditar conta
        else if(escolha == '3'){
            std::cout << "Digite o numero da conta que deseja relizar credito:\n";
            std::cin >> input;
            ss  << input;
            input.clear();
            int numero_conta = 0;
            ss >> numero_conta;

            std::cout << "Digite o valor a ser creditado:\n";
            std::cin >> input;
            ss.clear();
            ss << input;
            input.clear();
            double valor = 0.0;
            ss >> valor;
            ss.clear();

            if(valor < 0){
                std::cout << ">>>>>> Nao e possivel fazer transacoes com valores negativos!\n\n";
                continue;
            }

            for (auto &&i : listaContas){
                if(i.getAccountNumber() == numero_conta){
                    i.setBalance(i.getBalance() + valor); 
                    std::cout << ">>>>>>> O valor " << valor << " foi creditado na conta de numero " << numero_conta << "\n\n";
                }
            }
            
        }

        //Debitar conta
        else if(escolha == '4'){
            std::cout << "Digite o numero da conta que deseja relizar o debito:\n";
            std::cin >> input;
            ss  << input;
            input.clear();
            int numero_conta = 0;
            ss >> numero_conta;

            std::cout << "Digite o valor a ser debitado:\n";
            std::cin >> input;
            ss.clear();
            ss << input;
            input.clear();
            double valor = 0.0;
            ss >> valor;
            ss.clear();

            if(valor < 0){
                std::cout << ">>>>>> Nao e possivel fazer transacoes com valores negativos!\n\n";
                continue;
            }

            for (auto &&i : listaContas){
                if(i.getAccountNumber() == numero_conta){
                    if(i.getBalance() <= 0){
                        std::cout << ">>>>>> Impossivel realizar transacao. Saldo negativo ou nulo." << "\n\n";
                    }
                    else if(i.getBalance() - valor < 0){
                        std::cout << ">>>>>> Impossivel realizar transacao. Saldo insuficiente em conta." << "\n\n";
                    }
                    else{
                        i.setBalance(i.getBalance() - valor);
                        std::cout << ">>>>>>> O valor " << valor << " foi debitado na conta de numero " << numero_conta << "\n\n";
                    }
                    break;
                    
                }
            }
            
        }

        //Transferência entre contas
        else if(escolha == '5'){
            std::cout << "Digite o numero da conta origem:\n";
            std::cin >> input;
            ss << input;
            int conta_origem = 0;
            ss >> conta_origem;
            input.clear();
            ss.clear();

            std::cout << "Digite o numero da conta destino:\n";
            std::cin >> input;
            ss << input;
            int conta_destino = 0;
            ss >> conta_destino;
            input.clear();
            ss.clear();

            std::cout << "Digite o valor da transferencia:\n";
            std::cin >> input;
            ss << input;
            double valor = 0.0;
            ss >> valor;
            input.clear();
            ss.clear();

            if(valor < 0){
                std::cout << ">>>>>> Nao e possivel fazer transacoes com valores negativos!\n\n";
                continue;
            }

            //Debito na conta origem
            for (auto &&i : listaContas){
                if(i.getBalance() <= 0){
                    std::cout << ">>>>>> Impossivel realizar transacao. Saldo negativo ou nulo." << "\n\n";
                }
                else if(i.getBalance() - valor < 0){
                    std::cout << ">>>>>> Impossivel realizar transacao. Saldo insuficiente em conta." << "\n\n";
                }
                else{
                    i.setBalance(i.getBalance() - valor);
                    std::cout << ">>>>>>> O valor " << valor << " foi transferido da conta de numero " << conta_origem << " para a conta de numero " << conta_destino << "\n\n";
                    }
                break;
            }

            //Credito na conta destino
            for (auto &&i : listaContas){
                if(i.getAccountNumber() == conta_destino){
                    i.setBalance(i.getBalance() + valor); 
                }
            }
        }
        if(escolha == '0'){
            break;
        }        
    }
    //transferência
    //sair
}