#include "caesercode.h"

CaeserCode::CaeserCode()
{
    inputKey = 0;
    inputData = "No input data!!!";
    outputCipher = "NO OUTPUT CIPHER DATA!!!";
    outputDecipher = "NO OUTPUT DECIPHER DATA!!!";
}

CaeserCode::CaeserCode(string data)
{
    inputKey = 0;
    inputData = data;
    outputCipher = "NO OUTPUT CIPHER DATA!!!";
    outputDecipher = "NO OUTPUT DECIPHER DATA!!!";
}

CaeserCode::CaeserCode(string data, int key)
{
    inputKey = key;
    inputData = data;
    outputCipher = "NO OUTPUT CIPHER DATA!!!";
    outputDecipher = "NO OUTPUT DECIPHER DATA!!!";
}

int CaeserCode::userInputKey()
{
    int key = 0;
    cout << "Enter cipher key: ";
    cin >> key;
    return key;
}

string CaeserCode::userInputData()
{
    string data = "";
    cin.ignore();
    cout << "Enter the text: ";
    getline(cin, data);
    return data;
}

void CaeserCode::showResult()
{
    cout << "Key: " << getInputKey() << endl;
    cout << "Input Data: " << getInputData() << endl;
    cout << "Output Cipher Data: " << getOutputCipher() << endl;
    cout << "Output Decipher Data: " << getOutputDecipher() << endl;
}

int CaeserCode::inputAction()
{
    int action = -1;
    cout << "What do you want?" << endl;
    cout << "cipher data(0) or decipher data(1)" << endl;
    cout << "Your choose: ";
    cin >> action;
    if (action != 0 && action != 1){
        inputAction();
    } else return action;
}

string CaeserCode::cipherCode(string data, int key)
{
    if (data == ""){
        setInputData("NO DATA!!!");
        return  "No DATA TO ENCRYPT!!!";
    }

    if (key < 0){
        setInputKey(0);
        return data;
    }

    for (unsigned long long i = 0; i < data.length(); i++){
        if (data[i] >= 'a' && data[i] <= 'z'){
            if ((data[i] + key) > 'z')
                data[i] -= (26 - key);
            else
                data[i] += key;
        }
        if (data[i] >= 'A' && data[i] <= 'Z'){
            if ((data[i] + key) > 'Z')
                data[i] -= (26 - key);
            else
                data[i] += key;
        }
    }
    return data;
}

string CaeserCode::decipherCode(string data, int key)
{
    if (data == ""){
        setInputData("NO DATA!!!");
        return  "No DATA TO DENCRYPT!!!";
    }

    if (key < 0){
        setInputKey(0);
        return data;
    }

    for (unsigned long long i = 0; i < data.length(); i++){
        if (data[i] >= 'a' && data[i] <= 'z'){
            if ((data[i] - key) < 'a')
                data[i] += (26 - key);
            else
                data[i] -= key;
        }
        if (data[i] >= 'A' && data[i] <= 'Z'){
            if ((data[i] - key) < 'A')
                data[i] += (26 - key);
            else
                data[i] -= key;
        }
    }
    return data;
}
