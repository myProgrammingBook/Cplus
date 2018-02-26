//
// Created by Scoth Wisky on 2/25/2018.
//

#ifndef ASSIGNMENT4_CHECKINGACCOUNT_H
#define ASSIGNMENT4_CHECKINGACCOUNT_H

#include <cmath>
#include "Account.h"

class CheckingAccount : public Account{

public:
    CheckingAccount(double dBalance, double dfeeCharge);
    void credit(double fcredit) ;
    void debit(double fdebit) ;

private:
    double feeCharge;

};


#endif //ASSIGNMENT4_CHECKINGACCOUNT_H
