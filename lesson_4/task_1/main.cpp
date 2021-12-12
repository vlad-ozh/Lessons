#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[250] = "";
    int currentPunct = 0;
    cout << "Enter any string: ";
    cin.getline(str, 250);
    for (int iter = 0; iter < strlen(str); iter++){
        if (str[iter] == ',' || str[iter] == '.' ||
            str[iter] == ';' || str[iter] == ':' ||
            str[iter] == '!' || str[iter] == '?' ||
            str[iter] == '-' || str[iter] == '"' ||
            str[iter] == '(' || str[iter] == ')')
            currentPunct++;
    }
    if (strlen(str) == 0) cout << "String is empty..." << endl;
        else cout << "Number of punctuation marks: " << currentPunct << endl;
}
