#include <iostream>

using namespace std;

void forWithString() {
    cout << "----------" << endl;
    string exampleText = "otorrinonaringologo";
    for (int i = 0; i < exampleText.size(); i++)
    {
        char textCharacter = exampleText[i];
        if (textCharacter == 'a' || textCharacter == 'e') 
        {
            cout << "Se encontro una a o una e" << endl;
        }
        //cout << "position: " << i << " - " << textCharacter << endl;
    }
}

int main() {
    forWithString();
    return 0;
}