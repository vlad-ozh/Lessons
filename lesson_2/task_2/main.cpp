#include <iostream>

using namespace std;

int main()
{
    unsigned long long  num;
    unsigned short int  prog_1 = 0, prog_2 = 0, result = 0;
    cout << "enter number: ";
    cin >> num;
    for (unsigned long long i = num; i > 0; i /= 10){
        prog_1 = i % 10;
        prog_2 = (i / 10) % 10;
        if (prog_1 == prog_2) result += prog_1;
    }
        if (prog_1 == num % 10) result += prog_1;
    cout << "your hash code: " << result;
}
