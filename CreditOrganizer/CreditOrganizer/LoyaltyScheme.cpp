#include "LoyaltyScheme.h"
#include <iostream>

// Constructor definition
LoyaltyScheme::LoyaltyScheme()
{
    loyaltyPoints = 0;
}

// Member function definitions...
void LoyaltyScheme::EarnPointsOnAmount(double amount)
{
    // Assuming 1 point for every $10 spent
    loyaltyPoints += amount / 10;
}

void LoyaltyScheme::RedeemPoints(int points)
{
    if (points <= loyaltyPoints)
    {
        loyaltyPoints -= points;
    }
    else
    {
        // Display an error message if not enough points to redeem
        Console::WriteLine("Not enough loyalty points to redeem.");
    }
}

int LoyaltyScheme::GetPoints()
{
    return loyaltyPoints;
}
