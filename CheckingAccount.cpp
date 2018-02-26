//
// Created by Scoth Wisky on 2/25/2018.
//

#include "CheckingAccount.h";

CheckingAccount::CheckingAccount(double dBalance, double dfeeCharge) : Account(dBalance){

    feeCharge =dfeeCharge;
}

void CheckingAccount::credit(double fcredit) {
    Account::credit(fcredit-feeCharge);
}

void CheckingAccount::debit(double fdebit) {
    Account::debit(fdebit+feeCharge);
}
