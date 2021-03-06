#include <iostream>

using namespace std;

int main() {
    int usersData[10] = {0};
    int usersPasswords[10] = {0};
    int userIndex = -1, userPassword = -1, value = 0, valueChoice = 0;
    usersPasswords[0] = rand() % 9000 + 1000;
    for (int i = 0; i < 10; i++){
        usersPasswords[i] = rand() % 9000 + 1000;
        usersData[i] = rand();
        cout << "PIN to account "<< i + 1 << ": " << usersPasswords[i] << endl;
    }
    do {
        cout << endl << "Enter your account number: ";
        cin >> userIndex;
        if (userIndex <= 0 || userIndex > 10) {
            cout << "Your user account is wrong!" << endl;
            cout << "Try again..." << endl;
            continue;
        }
        cout << "Enter the password for the "<< userIndex << " account: ";
        cin >> userPassword;
        if (usersPasswords[userIndex - 1] != userPassword) {
            cout << "Your password is wrong!" << endl;
            cout << "Try again..." << endl;
            continue;
        }
        cout << endl << "Your money is: " << usersData[userIndex - 1] << "$" << endl;
        cout << "What I can do?" << endl;
        cout << "1 - add money" << endl;
        cout << "2 - withdraw money" << endl;
        cout << "3 - Exit" << endl;
        cout << "Your choose: ";
        cin >> valueChoice;
        switch (valueChoice){
            case 1:
                cout << "How much you want to add money: ";
                cin >> value;
                if (value < 1) {
                    value = 0;
                    cout << "Error..." << endl;
                    cout << "Try again!" << endl;
                    continue;
                }
                cout << "Are you sure?" << endl;
                cout << "1 - Yes" << endl;
                cout << "2 - No" << endl;
                cout << "3 - Exit" << endl;
                cout << "Your choose: ";
                cin >> valueChoice;
                switch (valueChoice){
                    case 1:
                        usersData[userIndex - 1] += value;
                        cout << "Transaction successful!" << endl;
                        cout << "Your money: " << usersData[userIndex - 1] << "$";
                        break;
                    case 2: continue;
                    case 3: break;
                }
                break;
            case 2:
                cout << "How much you want to withdraw money: ";
                cin >> value;
                if (value < 0) value = -value;
                else if (value > usersData[userIndex - 1]){
                    cout << "There are not enough funds in your account to withdraw this amount!" << endl;
                    cout << "Try again..." << endl;
                    continue;
                }
                cout << "Are you sure?" << endl;
                cout << "1 - Yes" << endl;
                cout << "2 - No" << endl;
                cout << "3 - Exit" << endl;
                cout << "Your choose: ";
                cin >> valueChoice;
                switch (valueChoice){
                    case 1:
                        usersData[userIndex - 1] -= value;
                        cout << "Transaction successful!" << endl;
                        cout << "Your money: " << usersData[userIndex - 1] << "$";
                        break;
                    case 2: continue;
                    case 3: break;
                }
                break;
            case 3: break;
        }

        cout << endl << "Do you want continue?" << endl;
        cout << "1 - Yes" << endl;
        cout << "2 - No" << endl;
        cout << "Your choose: ";
        cin >> valueChoice;
        if (valueChoice == 1){
            userIndex = -1;
            userPassword = -1;
            value = 0;
            system ("cls");
            for (int i = 0; i < 10; i++) cout << "PIN to account "<< i + 1 << ": " << usersPasswords[i] << endl;
        } else break;
    } while (true);
}
