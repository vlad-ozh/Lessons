#include <iostream>

using namespace std;

int main(){
    int size_sqr;
    cout << "enter size square: ";
    cin >> size_sqr;
    for (int iter = 0; iter < size_sqr; iter++){
        for (int iter_2 = 0; iter_2 < size_sqr; iter_2++){
                if (iter >= 1 && iter <= size_sqr - 2 && iter_2 >= 1 && iter_2 <= size_sqr - 2){
                    cout << "  ";
                } else cout << "* ";
        }
    cout << endl;
    }
}
