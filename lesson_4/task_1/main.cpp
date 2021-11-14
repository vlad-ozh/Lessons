#include <iostream>

using namespace std;

int main()
{
    string str = {" "};
    int currentPunct = 0;
    cout << "Enter any string: ";
    getline(cin, str);
    for (int iter = 0; iter < str.size(); iter++){
        if (str[iter] == ',' || str[iter] == '.' ||
            str[iter] == ';' || str[iter] == ':' ||
            str[iter] == '!' || str[iter] == '?' ||
            str[iter] == '-' || str[iter] == '"' ||
            str[iter] == '(' || str[iter] == ')')
            currentPunct += 1;
    }
    if (str.empty()) cout << "String is empty...";
    cout << "Number of punctuation marks: " << currentPunct << endl;
}
