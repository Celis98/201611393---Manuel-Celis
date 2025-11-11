#include<iostream>

using namespace std;

void forWithString() {
    string text = "Hola Mundo";
    char singleCharacter = text[0];
    for (int i = 0; i < text.length(); i++)
    {
        char textCharacter = text[i];
        cout << textCharacter << endl;
    }
}

void forWithArrays() {
    string textArray[3] = { "Manuel", "Pedro", "Pablo" };
    /**
    cout << textArray[0] << endl;
    cout << textArray[1] << endl;
    cout << textArray[2] << endl;
    */
    for (int i = 0; i < 3; i++)
    {
        cout << "Contador en:" << i << endl;
        string arrayValue = textArray[i];
        cout << "El valor en la lista es: " << arrayValue << endl;
    }
}

int main() {
    forWithArrays();
    return 0;
}