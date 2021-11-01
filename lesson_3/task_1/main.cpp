#include <iostream>

using namespace std;

int main()
{
    int arr[10], num = 0;
    cout << "Enter the number you want to add to the elements of the array: ";
    cin >> num;
    for (int i = 0; i < 10; i++){
        cout << "Enter element array number " << i + 1 << ":";
        cin >> arr[i];
        arr[i] += num;
    }
    cout << endl;
    for (int i = 0; i < 10; i++){
        cout << "Element array number " << i + 1 << ":" << arr[i]<< endl;
    }
}
