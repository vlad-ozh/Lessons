#include <iostream>

using namespace std;

int main()
{
    int number = 0, result = 0;
    cout << "enter number: ";
    cin >> number;
    for(int i = number; i > 0; i /= 10){
        result += (i % 10);
    }
    cout << endl << "sum: " << result;
}
