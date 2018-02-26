//
// Created by Scoth Wisky on 2/25/2018.
//

#ifndef ASSIGNMENT4_SAVINGSACCOUNT_H
#define ASSIGNMENT4_SAVINGSACCOUNT_H

#include "Account.h"


class SavingsAccount : public Account {
public:
    SavingsAccount(double daccountbalance, double dinterestRate);
    double calculateInterest();

private:
    double interestRate;
};


#endif //ASSIGNMENT4_SAVINGSACCOUNT_H
