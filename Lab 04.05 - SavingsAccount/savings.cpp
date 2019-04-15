#include <iostream>
#include "savings.h"

using namespace std;

// *MÉTODOS

// **definição membro estático
double SavingsAccount::annual_savings_rate = 1;

// **construtor
SavingsAccount::SavingsAccount(double balance){
   this->savings_balance = balance;

}

// **calculate_monthly_interest: calcula o valor dos juros mensal
double SavingsAccount::calculate_monthly_interest(){
    double balance_juros;

    balance_juros = this->savings_balance * (annual_savings_rate / 12);
    return(balance_juros);
}

// **calculate_montly_balance: calcular o valor final em conta (principal + juros)
double SavingsAccount::calculate_monthly_balance(){

    return (this->savings_balance + this->calculate_monthly_interest());
}

// **modify_interest_rate: atualizar a taxa
void SavingsAccount::modify_interest_rate(double taxa){
    annual_savings_rate = taxa;
}