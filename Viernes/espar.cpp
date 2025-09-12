#include <iostream>
using namespace std;

bool esPar(int number){
    if (number%2==0)
    {
        return true;
    }
    else
    {
        return false;
    } 
}

int main(){
    int userNumber;
    bool isUserNumberPair;
    cout << "Ingrese el numero: ";
    cin >> userNumber;
    isUserNumberPair = esPar(userNumber);
    if (isUserNumberPair)
    {
        cout << "El numero es par";
    }
    else
    {
        cout << "El numero es impar";
    }
    return 0;
}
