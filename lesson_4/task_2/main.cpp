#include <iostream>

using namespace std;

int main()
{
    char firstStr[200] = "";
    char secondStr[200] = "";
    cout << "Enter the first line: ";
    cin.getline(firstStr, 200);
    cout << "Enter the second line: ";
    cin.getline(secondStr, 200);
    int arrElement = 0;
    while(true){
        if (firstStr[arrElement] == secondStr[arrElement]){
            arrElement++;
            if (firstStr[arrElement] == '\0' && secondStr[arrElement] == '\0'){
                cout << "Strings are equal";
                break;
            }
        } else {
            cout << "Strings are NOT equal";
            break;
        }
    }
}
