#pragma once
#include "LoyaltyScheme.h"

ref class CreditCardAccount
{
public:
    // Constructor declaration
    CreditCardAccount(long number, double limit);

    // Member function declarations
    void SetCreditLimit(double amount);
    bool MakePurchase(double amount);
    void MakeRepayment(double amount);
    void PrintStatement();
    long GetAccountNumber();
    static int GetNumberOfAccounts(); // Static member function declaration
    void RedeemLoyaltyPoints(); // Redeem loyalty points function

private:
    long accountNumber;
    double currentBalance;
    double creditLimit;
    LoyaltyScheme^ scheme; // Handle to a LoyaltyScheme object
    static int numberOfAccounts; // Static member variable declaration
};
