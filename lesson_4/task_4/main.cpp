#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[200] = "";
    long long hashCode = 0;
    cout << "Enter the string: ";
    cin.getline(str, 200);
    for (int i = 0; i < strlen(str); i++){
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'y' ||
            str[i] == 'A' || str[i] == 'E' ||
            str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U' || str[i] == 'Y'){
            hashCode++;
        }
        if (str[i] == ' '){
            if (str[i + 1] != ' ' && i != strlen(str) - 1) hashCode *= 10;
                else continue;
        }
    }
    if (strlen(str) == 0) cout << "String is empty";
        else cout << "Your hash code: " << hashCode;
        cout << endl << strlen(str);

}
