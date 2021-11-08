#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int bankCash[10] = {0};
    int pincode[10] = {0};
    int acc = 0, pin = 0, value = 0;
    bankCash[0] = rand();
    for (int i = 0; i < 10; i++){
        bankCash[i] = rand();
        pincode[i] = rand() % 10000;
    }
    do{
        //=================================================================================================== output PINs
        for (int i = 0; i < 10; i++) cout << "PIN for " << i + 1 << " account:\t" << pincode[i] << endl;
        //=================================================================================================== choose account
        cout << endl << "Bank account: ";
        cin >> acc;
        cout << endl;
        if (acc > 0 && acc <= 10) { //==================================================== check account
            do{
                cout << "PIN for " << acc << " account: ";
                cin >> pin;
                    if (pin == pincode[acc - 1]){ //====================================== check PIN
                    //==================================================================== balance account and action
                        cout << "Your money: " << bankCash[acc - 1] << "$" << endl;
                        cout << "What i can do?" << endl;
                        cout << "1 - add money" << endl;
                        cout << "2 - withdraw money" << endl;
                        do {
                            cout << "Your choose: ";
                            cin >> value;
                //========================================================================== add money
                            if (value == 1){
                                cout << endl << "How much do you want to add: ";
                                cin >> value;
                                bankCash[acc - 1] += value;
                                cout << "Transaction successful!";
                                cout << endl << "Your money: " << bankCash[acc - 1];
                                break;
                            } else if (value == 2){ //====================================== withdraw money
                                do {
                                    cout << endl << "How much do you want to withdraw: ";
                                    cin >> value;
                                    if (bankCash[acc - 1] >= value){
                                        bankCash[acc - 1] -= value;
                                        cout << "Transaction successful!";
                                        cout << endl << "Your money: " << bankCash[acc - 1];
                                        break;
                                    } else cout << "There are not enough money in the account...";
                                } while (true);
                                break;
                            } else cout << "Incorrect choice..." << endl << "Please choose 1 or 2" << endl;
                        }while (true);
                    } else cout << "Your PIN is incorrect!" << endl;
            }while (pin != pincode[acc - 1]);
        }else cout << "Account does not exist" << endl;
//================================================================================================ continue or break
        cout << endl << "Do you want continue?" << endl << "1 - yes" << endl << "2 - no";
        cout << endl << "Your choose: ";
        cin >> value;
        if  (value == 1) system ("cls");
            else {
                system ("cls");
                break;
            }
    }while (true);
}
