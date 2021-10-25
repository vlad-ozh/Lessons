#include <iostream>

using namespace std;

int main()
{
    int weightShip;
    cout << "enter the mass of the ship (in kg): ";
    cin >> weightShip;
    cout << "amount of fuel: " << weightShip / 3 - 2;
}
