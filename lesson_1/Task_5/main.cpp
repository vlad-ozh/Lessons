#include <iostream>

using namespace std;

int main()
{
    int weightShip;
    cout << "enter the mass of the ship (in kg): ";
    cin >> weightShip;
    cout << "the amount of fuel per 300 light years: " << 300 * (weightShip / 3 - 2);
}
