#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str;
    long long hashCode = 0;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++){
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'y'){
            hashCode++;
        }
        if (str[i] == ' '){
            if (str[i + 1] != ' ' && i != str.size() - 1) hashCode *= 10;
                else continue;
        }
    }
    if (str.empty()) cout << "String is empty";
        else cout << "Your hash code: " << hashCode;
}
