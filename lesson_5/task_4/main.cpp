#include <iostream>
#include <cmath>

using namespace std;

struct coefficients{
    float a = 0;
    float b = 0;
    float c = 0;
};

struct roots{
    float x1 = 0;
    float x2 = 0;
};

int userInput(){
    int coefficient = 0;
    cin >> coefficient;
    return coefficient;
}

roots solution(float a, float b, float c){
    float discriminant = 0;
    roots root;
    discriminant = pow(b, 2) - (4 * a * c);
    if (discriminant > 0){
        root.x1 = (- b - sqrt(discriminant)) / (2 * a);
        root.x2 = (- b + sqrt(discriminant)) / (2 * a);
    } else if (discriminant == 0){
        root.x1 = - b / (2 * a);
        root.x2 = - b / (2 * a);
    } else {
        root.x1 = 0;
        root.x2 = 0;
    }
    return root;
}

roots solution(float a, float b){
    roots root;
    root.x1 = 0;
    root.x2 = - (b / a);
    return root;
}

int main()
{
    coefficients coefficient;
    roots root;
    cout << "Enter coefficient <a>: ";
    coefficient.a = userInput();
    cout << "Enter coefficient <b>: ";
    coefficient.b = userInput();
    cout << "Enter coefficient <c>: ";
    coefficient.c = userInput();

    if (coefficient.c != 0)
        root = solution(coefficient.a, coefficient.b, coefficient.c);
    else
         root = solution(coefficient.a, coefficient.b);

    cout << "x1 = " << root.x1 << endl;
    cout << "x2 = " << root.x2 << endl;
}
