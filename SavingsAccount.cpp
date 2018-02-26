//
// Created by Scoth Wisky on 2/25/2018.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double daccountbalance, double dinterestRate) : Account(daccountbalance) {

    interestRate = dinterestRate;
}

double SavingsAccount::calculateInterest() {

    return (interestRate*this->getblance())/100;
}
