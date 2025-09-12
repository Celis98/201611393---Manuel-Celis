#include<iostream>

using namespace std;

// Usando una funcion
// Indicar al usuario si el valor ingresado sirve para pasar la materia 

void sumOfTwoValues(int valueOne, int valueTwo) {
    int sumResult;
    sumResult = valueOne + valueTwo;
    cout << "La suma de los valores es: " << sumResult << endl;
}

int subsOfTwoValues(int valueOne, int valueTwo) {
    int subsResult;
    subsResult = valueOne - valueTwo;
    return subsResult;
}

void compareTwoValues(int valueOne, int valueTwo) {
    if (valueOne > valueTwo)
    {
        cout << valueOne << " es mayor que " << valueTwo << endl;
    }
    else
    {
        cout << valueOne << " es menor que " << valueTwo << endl;   
    }
}

string endOfProgramMessage() {
    return "El programa finalizó, gracias";
}

int main() {
    int valueOne, valueTwo, subsResult;

    cout << "Ingrese un numero: ";
    cin >> valueOne;

    cout << "Ingrese otro numero: ";
    cin >> valueTwo;

    // Suma
    sumOfTwoValues(valueOne, valueTwo);

    // Resta
    subsResult = subsOfTwoValues(valueOne, valueTwo);
    cout << "La resta de los valores es: " << subsResult << endl;

    // Comparacion
    compareTwoValues(valueOne, valueTwo);

    cout << endOfProgramMessage() << endl;

    return 0;
}