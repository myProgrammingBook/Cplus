//
// Created by Scoth Wisky on 2/25/2018.
//

#ifndef ASSIGNMENT4_ACCOUNT_H
#define ASSIGNMENT4_ACCOUNT_H


class Account {


public:
    Account(double faccountBalance = 0.0);
    double getblance() ;
    void credit(double fcredit);
    void debit(double fdebit);

private:

    double accountBalance = 0.0;



};


#endif //ASSIGNMENT4_ACCOUNT_H
