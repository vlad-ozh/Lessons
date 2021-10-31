#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int num = 0;
    short int a = 1;
    cout << "Enter the number you want to add to the elements of the array: ";
    cin >> num;
    for (short int i = 0; i < 10; i++){
        cout << "Enter element array number " << a << ":";
        cin >> arr[i];
        arr[i] += num;
        a++;
    }
    a = 1;
    for (short int i = 0; i < 10; i++){
        cout << "Element array number " << a << ":" << arr[i]<< endl;
        a++;
    }
}
