#include "caesercode.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    CaeserCode Program;

    switch (Program.inputAction()){
    case 0:
        Program.setInputData(Program.userInputData());
        Program.setInputKey(Program.userInputKey());
        Program.setOutputCipher(Program.cipherCode(Program.getInputData(), Program.getInputKey()));
        Program.showResult();
        break;
    case 1:
        Program.setInputData(Program.userInputData());
        Program.setInputKey(Program.userInputKey());
        Program.setOutputDecipher(Program.decipherCode(Program.getInputData(), Program.getInputKey()));
        Program.showResult();
        break;
    }
}
