#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, D, x1, x2;
    cout << "enter a: ";
    cin  >> a ;
    cout << "enter b: ";
    cin  >> b ;
    cout << "enter c: ";
    cin  >> c ;
    cout << "a = " << a << ", " << "b = " << b << ", " << "c = " << c << endl;
    D = pow(b, 2) - (4 * a * c);
    cout << "diskriminant = " << D << endl;
    if (D > 0){
        x1 = (- b - sqrt(D)) / (2 * a);
        x2 = (- b + sqrt(D)) / (2 * a);
        cout << "x1 = " << x1 << ", " << "x2 = " << x2 << endl;
    } else if (D < 0){
        cout << "no solutions" << endl;
    } else {
        x1 = - b / (2 * a);
        cout << "x = " << x1 << endl;
    }
}
