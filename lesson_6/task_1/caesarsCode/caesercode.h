#ifndef CAESERCODE_H
#define CAESERCODE_H

#include <iostream>
#include <string>

using namespace std;

class CaeserCode
{
public:
    CaeserCode();
    CaeserCode(string data);
    CaeserCode(string data, int key);

    int userInputKey();
    string userInputData();

    void setInputData(string data) { inputData = data; }
    void setInputKey(int key) { inputKey = key; }
    void setOutputCipher(string data) { outputCipher = data; }
    void setOutputDecipher(string data) { outputDecipher = data; }

    string getInputData() { return inputData; }
    int getInputKey() { return inputKey; }
    string getOutputCipher() { return outputCipher; }
    string getOutputDecipher() { return outputDecipher; }

    void showResult();

    int inputAction();

    string cipherCode(string data, int key);
    string decipherCode(string data, int key);
private:
    string inputData;
    int inputKey;
    string outputCipher;
    string outputDecipher;

};

#endif // CAESERCODE_H
