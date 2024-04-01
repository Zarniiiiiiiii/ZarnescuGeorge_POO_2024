#include "CreditCardAccount.h"
#include <iostream>

using namespace System;

int main(array<System::String^>^ args)
{
    // Get initial number of accounts
    int n = CreditCardAccount::GetNumberOfAccounts();
    Console::Write("Number of accounts initially: ");
    Console::WriteLine(n);

    // Creating first object
    Console::WriteLine("\nCreating first object");
    CreditCardAccount^ account1;
    account1 = gcnew CreditCardAccount(12345, 2000);
    account1->MakePurchase(300);
    account1->PrintStatement();

    // Creating second object
    Console::WriteLine("\nCreating second object");
    CreditCardAccount^ account2;
    account2 = gcnew CreditCardAccount(67890, 5000);
    account2->MakePurchase(750);
    account2->PrintStatement();

    // Get updated number of accounts
    n = CreditCardAccount::GetNumberOfAccounts();
    Console::Write("\nNumber of accounts now: ");
    Console::WriteLine(n);

    return 0;
}
