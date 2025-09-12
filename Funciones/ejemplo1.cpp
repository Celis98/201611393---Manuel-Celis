#include<iostream>

using namespace std;

void numberIsLessThatZeroMessage(int value) {
    cout << "Usted ingreso: " << value << " - " << "El numero es menor que 0" << endl;
}

void numberIsEqualToZeroMessage(int value) {
    cout << "Usted ingreso: " << value << " - " << "El numero es igual que 0" << endl;
}

void numberIsHigherThatZeroMessage(int value) {
    cout << "Usted ingreso: " << value << " - " << "El numero es mayor que 0" << endl;
}

int main() {
    int userValue;

    cout << "Ingrese un valor: ";
    cin >> userValue;

    if (userValue < 0)
    {
        numberIsLessThatZeroMessage(userValue);
    }
    else if (userValue == 0)
    {
        numberIsEqualToZeroMessage(userValue);
    }
    else
    {
        numberIsHigherThatZeroMessage(userValue);
    }

    return 0;
}