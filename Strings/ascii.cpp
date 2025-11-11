#include<iostream>

using namespace std;

void asciiExample() {
    // 32
    char charAMayus = 'P';
    cout << "Caracter en mayuscula: " << charAMayus << endl;
    char charAMinus = charAMayus + 32;
    cout << "Caracter en minuscula: " << charAMinus << endl;
    char newAMayus = charAMinus - 32;
    cout << "Caracter en mayuscula: " << newAMayus << endl;

    char example = 'g';
    if (example > 'A' && example < 'Z')
    {
        cout << "Mayuscula" << endl;
    }
    if (example > 'a' && example < 'z')
    {
        cout << "Minuscula" << endl;
    }

}

void forInsideFor() {
    string example = "example";
    for (int i = 0; i < example.size(); i++)
    {
        for (int j = 0; j < example.size(); j++)
        {
            
        }
        
    }
}

int main() {
    asciiExample();
    return 0;
}