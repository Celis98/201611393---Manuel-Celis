#include <iostream>
using namespace std;

void semaforo(string color){
    if(color=="amarillo")
    {
        cout << "Espere" << endl;
    }
    else if(color=="rojo")
    {
        cout << "Deternerse" << endl;
    }
    else if (color=="verde")
    {
        cout << "Avance" << endl;
    }
    else
    {
        cout << "El color no es valido" << endl;
    }
}


int main() {
    string userColor;
    cout << "Ingrese el color: ";
    cin >> userColor;
    semaforo(userColor);

    return 0;
}

