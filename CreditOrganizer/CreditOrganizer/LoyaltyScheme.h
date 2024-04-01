#pragma once

ref class LoyaltyScheme
{
public:
    // Constructor
    LoyaltyScheme();

    // Member function declarations
    void EarnPointsOnAmount(double amount);
    void RedeemPoints(int points);
    int GetPoints();

private:
    int loyaltyPoints;
};
