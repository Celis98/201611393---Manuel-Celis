#include<iostream>

using namespace std;

int main() {
    int inputValue1, inputValue2;
    int sumResult, subResult, multiplyResult, divisionResult, moduleResult;

    cout << "Bienvenido" << endl;
    cout << "Ingrese el primer valor: ";
    cin >> inputValue1;
    cout << "Ingrese el segundo valor: ";
    cin >> inputValue2;

    sumResult = inputValue1 + inputValue2;
    cout << "El resultado de la suma es: " << sumResult << endl;

    subResult = inputValue1 - inputValue2;
    cout << "El resultado de la resta es: " << subResult << endl;

    multiplyResult = inputValue1 * inputValue2;
    cout << "El resultado de la multiplicacion es: " << multiplyResult << endl;

    divisionResult = inputValue1 / inputValue2;
    cout << "El resultado de la division es: " << divisionResult << endl;

    moduleResult = inputValue1 % inputValue2;
    cout << "El resultado del modulo es: " << moduleResult << endl;

    return 0;
}