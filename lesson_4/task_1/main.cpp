#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[256] = {""};
    int currentPunct = 0;
    string text;
    cout << "Enter any string: ";
    cin.getline(str, 256);
    for (int iter = 0; iter < strlen(str); iter++){
        if (str[iter] == ',' || str[iter] == '.' ||
            str[iter] == ';' || str[iter] == ':' ||
            str[iter] == '!' || str[iter] == '?' ||
            str[iter] == '-' || str[iter] == '"' ||
            str[iter] == '(' || str[iter] == ')')
            currentPunct += 1;
    }
    if (strlen(str) == 0) cout << "String is empty..." << endl;
        else cout << "Number of punctuation marks: " << currentPunct << endl;
}
