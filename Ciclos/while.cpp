#include<iostream>

using namespace std;

int main() {
    int userValue;

    // Jugador 1 ingresa el numero a adivinar
    // Jugador 2 adivina el numero que ingresa jugador 1
    // El juego no termina hasta que se adivine el numero
    // Decirle al jugador si el numero esta por encima 
    // o por debajo del que debe adivinar
    while (userValue != 10)
    {
        cout << "Ingrese el 10 en la consola: " << endl;
        cin >> userValue;
    }
    

    return 0;
}