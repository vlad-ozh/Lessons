#include <iostream>

using namespace std;

int main()
{
    unsigned long long  num;
    unsigned short int  progress = 0, result = 0;
    cout << "enter number: ";
    cin >> num;
    for (unsigned long long i = num; i > 0; i /= 10){
        progress = i % 10;
        if (progress == (i / 10) % 10) result += progress;
    }
        if (progress == num % 10) result += progress;
    cout << "your hash code: " << result;
}
