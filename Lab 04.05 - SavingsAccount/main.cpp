#include <iostream>
#include "savings.h"

using namespace std;

int main(void)
{
    SavingsAccount c1 = SavingsAccount(20000);
    SavingsAccount c2 = SavingsAccount(20000);
    SavingsAccount::annual_savings_rate = 1.10;

    double anterior = c1.calculate_monthly_balance();

    cout << c1.calculate_monthly_balance() << " = " << c2.calculate_monthly_balance() << endl;

    SavingsAccount::annual_savings_rate = 1.30;
    cout << anterior << " != " << c2.calculate_monthly_balance() << endl;
    cout << c1.calculate_monthly_balance() << " = " << c2.calculate_monthly_balance() << endl;

    return 0;
}