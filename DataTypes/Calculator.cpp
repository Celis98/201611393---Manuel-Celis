#include<iostream>

using namespace std;

int main() {
    int inputValue1, inputValue2;
    int sumResult, subResult, multiplyResult;
    // 1 = suma, 2 = resta, 3 = multiplicacion
    int selectedOperation;

    cout << "Bienvenido" << endl;
    cout << "Ingrese el primer valor: ";
    cin >> inputValue1;
    cout << "Ingrese el segundo valor: ";
    cin >> inputValue2;

    cout << "Seleccione la operacion matematica: 1 = suma, 2 = resta, 3 = multiplicacion: ";
    cin >> selectedOperation;

    switch (selectedOperation)
    {
        // Suma
    case 1:
        sumResult = inputValue1 + inputValue2;
        cout << "El resultado de la suma es: " << sumResult << endl;
        break;
        // Resta
    case 2:
        subResult = inputValue1 - inputValue2;
        cout << "El resultado de la resta es: " << subResult << endl;
        break;
        // Multiplicacion
    case 3:
        multiplyResult = inputValue1 - inputValue2;
        cout << "El resultado de la multiplicacion es: " << multiplyResult << endl;
        break;
    default:
        cout << "Opcion seleccionada no existe" << endl;
        break;
    }
    return 0;
}