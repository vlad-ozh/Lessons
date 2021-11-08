#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int arr_1[4] = {0};
    int arr_2[4] = {0};
    int value_1 = 0, value_2 = 0;
    for (int i = 0; i < 4; i++){
        arr_1[i] = rand() % 10;
        arr_2[i] = rand() % 10;
        cout << arr_1[i] << "\t";
        value_1 = (value_1 * 10) + arr_1[i];
    }
    cout << endl;
    for (int i = 0; i < 4; i++){
        value_2 = (value_2 * 10) + arr_2[i];
        cout << arr_2[i] << "\t";
    }
    cout << endl << "Got: " << value_1 << " + " << value_2 << endl;
    cout << "Result: " << value_1 + value_2;
}
