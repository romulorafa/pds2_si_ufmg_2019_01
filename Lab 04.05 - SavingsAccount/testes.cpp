#include "doctest.h"
#include "savings.h"


TEST_CASE("01 - Testando o construtor") {
    CHECK_NOTHROW(SavingsAccount(20000));
}


TEST_CASE("02 - Testando o static") {
    SavingsAccount c1 = SavingsAccount(20000);
    SavingsAccount c2 = SavingsAccount(20000);
    SavingsAccount::annual_savings_rate = 1.10;

    double anterior = c1.calculate_monthly_balance();
    CHECK(c1.calculate_monthly_balance() == c2.calculate_monthly_balance());

    SavingsAccount::annual_savings_rate = 1.30;
    CHECK(anterior != c2.calculate_monthly_balance());
    CHECK(c1.calculate_monthly_balance() == c2.calculate_monthly_balance());
}