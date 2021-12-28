#include <iostream>

using namespace std;

void drawLineOfSymbols(int sz, string symbol) {
    if (sz > 0) {
        cout << symbol;
        drawLineOfSymbols(sz - 1, symbol);
    }
}

void drawStars(int sz) {
    drawLineOfSymbols(sz, "* ");
}

void drawSpaces(int sz) {
    drawLineOfSymbols(sz, "  ");
}

void drawFrame (int sz){
    for (int row = 0; row < sz; row++){
        if (row == 0 || row == sz - 1) drawStars(sz);
        else if (row >= 1 && row < sz - 1){
            drawStars(1);
            drawSpaces(sz - 2);
            drawStars(1);
        }
        cout << endl;
    }
}

int getUserInput(){
    float sizeFrame = 0;
    cout << "enter size square: ";
    cin >> sizeFrame;
    if ( (float)( (int) sizeFrame ) == sizeFrame){
        return sizeFrame;
    } else getUserInput();
}

int main()
{
    while(true){
        drawFrame(getUserInput());
    }
    return 0;
}




