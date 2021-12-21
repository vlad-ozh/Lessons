#include <iostream>

using namespace std;

int main()
{
    char str[200] = "";
    cout << "Enter the string (on english): ";
    cin.getline(str, 200);
    for (int i = 0; str[i] != '\0'; i++){
        if ((str[i] == 'f' || str[i] == 'F') &&
            (str[i + 1] == 'u' || str[i + 1] == 'U') &&
            (str[i + 2] == 'c' || str[i + 2] == 'C') &&
            (str[i + 3] == 'k' || str[i + 3] == 'K')){
            for (int j = 0; j < 4; j++) str[i + j] = '*';
        }
    }
    cout << "Your line with an anti-matte filter: " << str;
}

