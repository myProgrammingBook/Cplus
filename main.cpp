#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;


int main() {

    //Checking Account Class
    Account a(1000);
    cout << "Initial Balance "<<a.getblance() <<endl;
    a.credit(100);
    cout << "After crediting 100 is "<< a.getblance() <<endl;
    a.debit(200);
    cout << "After debiting 200 is "<< a.getblance() <<endl;
    a.debit(2000);
    cout << "After debiting 2000 is "<< a.getblance() <<endl <<endl;


    //savings account

    SavingsAccount b(1000, 1);
    cout << "Initial Balance "<<b.getblance() <<endl;
    b.credit(100);
    cout << "After crediting 100 is "<< b.getblance() <<endl;
    b.debit(200);
    cout << "After debiting 200 is "<< b.getblance() <<endl;
    b.debit(2000);
    cout << "After debiting 2000 is "<< b.getblance() <<endl;
    cout << "Interest getting is " << b.calculateInterest() << "%" <<endl << endl;

    //Checking account

    CheckingAccount D(1000, 10);
    cout << "Initial Balance " << D.getblance() << endl;
    D.credit(100);
    cout << "After crediting 100 is " << D.getblance() << endl;
    D.debit(200);
    cout << "After debiting 200 is " << D.getblance() << endl;
    D.debit(2000);
    cout << "After debiting 2000 is " << D.getblance() << endl;


    return 0;
}