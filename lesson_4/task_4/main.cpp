#include <iostream>

using namespace std;

int main()
{
    char str[200] = "";
    int hashCode = 0;
    cout << "Enter the string: ";
    cin.getline(str, 200);
    cout << "Your hash code: ";
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'y' ||
            str[i] == 'A' || str[i] == 'E' ||
            str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U' || str[i] == 'Y'){
            hashCode++;
        }
        if ((str[i] == ' ' &&
             str[i + 1] != ' ') ||
             str[i + 1] == '\0'){
            cout << hashCode;
            hashCode = 0;
        }
    }
}
