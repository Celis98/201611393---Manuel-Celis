#include <iostream>

using namespace std;

// Validar que un string sea una contraseña valida
// Longitud minima de 8 caracteres
// Que contenga minimo 3 caracteres especiales
// Que tenga una mayuscula
// Que tenga una minuscula

// Validador de señales de radio
// -----.----.---.---
// Contar cuantos guines hay (selñales positivas)
// Cuantos cuantos puntos hay (señales negativas)
// Retornar el promedio de señales positivas sobre negativas

//Leer una palabra sin espacios y generar un nuevo string en el que las letras en posiciones pares sean
//convertidas a mayúsculas y las impares a minúsculas, usando únicamente operaciones con valores
//ASCII.

bool isEven(int position) {
    //return position % 2 == 0
    if (position % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isMayus(char letter) {
    if (letter >= 'A' && letter <= 'Z') {
        return true;
    } else {
        return false;
    }
}

bool isMinus(char letter) {
    if (letter >= 'a' && letter <= 'z') {
        return true;
    } else {
        return false;
    }
}

char transformToMayus(char letter) {
    return letter - 32;
}

char transformToMinus(char letter) {
    return letter + 32;
}

void transformString() {
    string originalText = "Hola Soy un Texto";
    cout << "Original string: " << originalText << endl;
    string newText = "";
    for (int i = 0; i < originalText.size(); i++)
    {
        char letter = originalText[i];
        if (isEven(i))
        {
            if (isMayus(letter))
            {
                newText += letter;
            } else {
                newText += transformToMayus(letter);
            }
            
        } 
        else 
        {
            if (isMinus(letter))
            {
                newText += transformToMinus(letter);
            } else {
                newText += letter;
            }
        }
    }
    cout << "New string: " << newText << endl;
}

int main() {
    transformString();
    return 0;
}