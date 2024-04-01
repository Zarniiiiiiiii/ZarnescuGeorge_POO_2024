#include "CreditCardAccount.h"
#include <iostream>

using namespace System;

// Initialize the static member variable numberOfAccounts
int CreditCardAccount::numberOfAccounts = 0;

// Constructor definition
CreditCardAccount::CreditCardAccount(long number, double limit)
{
    accountNumber = number;
    currentBalance = limit;
    creditLimit = 0.0;
    numberOfAccounts++;
    Console::Write("This is account number ");
    Console::WriteLine(numberOfAccounts);
    scheme = nullptr; // Initialize scheme handle to nullptr
}

// Member function definitions...
void CreditCardAccount::SetCreditLimit(double amount)
{
    creditLimit = amount;
}

bool CreditCardAccount::MakePurchase(double amount)
{
    if (currentBalance + amount > creditLimit)
    {
        return false;
    }
    else
    {
        currentBalance += amount;
        // If current balance is 50% (or more) of credit limit...
        if (currentBalance >= creditLimit / 2)
        {
            // If LoyaltyScheme object doesn't exist yet...
            if (scheme == nullptr)
            {
                // Create it
                scheme = gcnew LoyaltyScheme();
            }
            else
            {
                // LoyaltyScheme already exists, so accrue bonus points
                scheme->EarnPointsOnAmount(amount);
            }
        }
        return true;
    }
}

void CreditCardAccount::MakeRepayment(double amount)
{
    currentBalance -= amount;
}

void CreditCardAccount::PrintStatement()
{
    Console::Write("Current balance: ");
    Console::WriteLine(currentBalance);
}

long CreditCardAccount::GetAccountNumber()
{
    return accountNumber;
}

int CreditCardAccount::GetNumberOfAccounts()
{
    return numberOfAccounts;
}

void CreditCardAccount::RedeemLoyaltyPoints()
{
    // If the LoyaltyScheme object doesn't exist yet...
    if (scheme == nullptr)
    {
        // Display an error message
        Console::WriteLine("Sorry, you do not have a loyalty scheme yet");
    }
    else
    {
        // Tell the user how many points are currently available
        Console::Write("Points available: ");
        Console::Write(scheme->GetPoints());
        Console::Write(". How many points do you want to redeem? ");

