#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[200] = "";
    cout << "Enter the string (on english): ";
    cin.getline(str, 200);
    for (int i = 0; i < strlen(str); i++){
        if ((str[i] == 'f' || str[i] == 'F') &&
            (str[i + 1] == 'u' || str[i + 1] == 'U') &&
            (str[i + 2] == 'c' || str[i + 2] == 'C') &&
            (str[i + 3] == 'k' || str[i + 3] == 'K'))
        {
            str[i] = '*';
            str[i + 1] = '*';
            str[i + 2] = '*';
            str[i + 3] = '*';
        } else
        if ((str[i] == 'f' || str[i] == 'F') &&
            (str[i + 2] == 'u' || str[i + 2] == 'U') &&
            (str[i + 4] == 'c' || str[i + 4] == 'C') &&
            (str[i + 6] == 'k' || str[i + 6] == 'K'))
        {
            str[i] = '*';
            str[i + 2] = '*';
            str[i + 4] = '*';
            str[i + 6] = '*';
        }
    }
    cout << "Your line with an anti-matte filter: " << str;
}
