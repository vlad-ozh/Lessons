#include <iostream>

using namespace std;

void createUsersData(int usersData[], int usersPasswords[]){
    usersPasswords[0] = rand() % 9000 + 1000;
    for (int i = 0; i < 10; i++){
        usersPasswords[i] = rand() % 9000 + 1000;
        usersData[i] = rand();
    }
}

void showPasswords (int usersPasswords[]){
    for (int i = 0; i < 10; i++)
        cout << "PIN to account "<< i + 1 << ": " << usersPasswords[i] << endl;
}

int getInputAccount(){
    int userIndex = 0;
    cout << "Enter your account number: " ;
    cin >> userIndex;
    if (userIndex <= 0 || userIndex > 10){
        cout << "Your user account is wrong!" << endl;
        cout << "Try again..." << endl;
        getInputAccount();
    } else return userIndex;
}

void getInputPassword(int userIndex, int usersPasswords){
    int userPassword = 0;
    cout << "Enter the password for the "<< userIndex << " account: ";
    cin >> userPassword;
    if (usersPasswords != userPassword) {
        cout << "Your password is wrong!" << endl;
        cout << "Try again..." << endl;
        getInputPassword(userIndex, usersPasswords);
    }
}

void userData(int userData){
    cout << "Your money is: " << userData << "$" << endl;
}

int showAction(string askAction, string actionOne, string actionTwo){
    int valueChoice = 0;
    cout << askAction << endl;
    cout << actionOne << endl;
    cout << actionTwo << endl;
    cout << "Your choose: ";
    cin >> valueChoice;
    return valueChoice;
}

int checkToAddMoney(){
    int value = 0;
    cout << "How much you want to add money: ";
    cin >> value;
    if (value < 1) {
        cout << "Error..." << endl;
        cout << "Try again!" << endl;
        checkToAddMoney();
    } else return value;
}

int checkToWithdrawMoney(int userData){
    int value = 0;
    cout << "How much you want to withdraw money: ";
    cin >> value;
    if (value < 0) value = -value;
    if (value > userData){
        cout << "There are not enough funds in your account to withdraw this amount!" << endl;
        cout << "Try again..." << endl;
        checkToWithdrawMoney(userData);
    } else return value;
}

int askContinue(){
    switch (showAction("Do you want continue?", "1 - Yes", "2 - No")){
        case 1:
            system ("cls");
            break;
        default: return -1;
    }
}

int main() {
    int usersData[10] = {0};
    int usersPasswords[10] = {0};
    int userIndex = 0;
    int value = 0;

    createUsersData(usersData, usersPasswords);

    do {
        showPasswords(usersPasswords);
        userIndex = getInputAccount();
        getInputPassword(userIndex, usersPasswords[userIndex - 1]);
        userData(usersData[userIndex - 1]);

        switch (showAction("What i can do?", "1 - Add money", "2 - Withdraw money")){
            case 1:
                value = checkToAddMoney();
                usersData[userIndex - 1] += value;
                cout << "Transaction successful!" << endl;
                break;
            case 2:
                value = checkToWithdrawMoney(usersData[userIndex - 1]);
                usersData[userIndex - 1] -= value;
                cout << "Transaction successful!" << endl;
                break;
            default: break;
        }

        userData(usersData[userIndex - 1]);

    } while (askContinue() != -1);
}
