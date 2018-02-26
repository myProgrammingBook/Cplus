//
// Created by Scoth Wisky on 2/25/2018.
//

#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(double faccountBalance) {

    accountBalance = faccountBalance;
    if (accountBalance == 0.0)
    {
        cout << "Account balance is invalid" <<endl;
    }

}

double Account::getblance()  {

    return accountBalance;
}

void Account::credit(double fcredit) {

    accountBalance+=fcredit;

}

void Account::debit(double fdebit) {

    if (fdebit>accountBalance)
    {
        cout << "debit amount exceed the account balance"<<endl;
    }
    else
    {
        accountBalance-=fdebit;
    }
}
