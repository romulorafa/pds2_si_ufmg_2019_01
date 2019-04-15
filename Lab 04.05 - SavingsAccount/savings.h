#ifndef PDS2_SAVINGSACCOUNT_H
#define PDS2_SAVINGSACCOUNT_H

class SavingsAccount
{
private:
    double savings_balance;
public:
    // *CONSTRUTOR
    SavingsAccount(double balance);
    
    // *DADOS
    static double annual_savings_rate;

    // **MÉTODOS
    double calculate_monthly_interest();
    double calculate_monthly_balance();
    static void modify_interest_rate(double taxa);
};

#endif /* PDS2_PDS2_SAVINGSACCOUNT */