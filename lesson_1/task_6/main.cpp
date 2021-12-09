#include <iostream>

using namespace std;

int main()
{
    int subnetMask = 0;
    bool value = false;
    do {
    cout << "Enter subnet mask:" << endl;
    cout << "255.255.255.";
    cin >> subnetMask;
    cout << "Number of addresses in a subnet: ";
    switch (subnetMask){
        case 255:
            cout << "1";
            break;
        case 254:
            cout << "2";
            break;
        case 252:
            cout << "4";
            break;
        case 248:
            cout << "8";
            break;
        case 240:
            cout << "16";
            break;
        case 224:
            cout << "32";
            break;
        case 192:
            cout << "64";
            break;
        case 128:
            cout << "128";
            break;
        case 000:
            cout << "256";
            break;
        default:
            cout << "Invalid value";
    }
    cout << endl << "Do you want to continue?" << endl;
    cout << "0 - Yes" << endl;
    cout << "1 - No" << endl;
    cin >> value;
    if (value == 0) continue;
        else break;
    }while(true);
}
