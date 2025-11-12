#include<iostream>

using namespace std;

class TitlesManager {
    public:
        bool isRunning = true;
        string* titles;
        int size;

        void run() {
            while(isRunning) {
                int userAction = getUserAction();
                switch (userAction)
            {
                // Modificar
                case 1:
                    modifyArray();
                    break;
                // Imprimir    
                case 2:
                    printTitles();
                    break;
                // Re-inicializar    
                case 3:
                    titles = initList();
                    break;
                // Salir    
                case 0:
                    delete[] titles;
                    isRunning = false;
                    break;
                default:
                    cout << "Opcion no valida" << endl;
                    break;
                }
            }
        }

        string* initList() {
            cout << "Ingrese el tamaño de la lista: ";
            cin >> size;
            string* newTitles = new string[size];
            for (int i = 0; i < size; i++)
            {
                string newValue;
                cout << "Ingrese el valor para la posicion " << i + 1 << ": ";
                cin >> newValue;
                newTitles[i] = newValue;
            }
            return newTitles;
        }

        void modifyArray() {
            int positionToModify;
            printTitles();
            cout << "Ingrese la posicion a modificar: ";
            cin >> positionToModify;
            positionToModify = positionToModify - 1;
            //positionToModify--;
            string newValue;
            cout << "Ingrese el nuevo valor: ";
            cin >> newValue;
            titles[positionToModify] = newValue;
            printTitles();
        }

        void printTitles() {
            cout << "Lista: " << endl;
            for (int i = 0; i < size; i++)
            {
                cout << "Posicion " << i + 1 << " - Valor: " << titles[i] << endl;
            }
        }

        int getUserAction() {
            int userAction;
            cout << "---------------------" << endl;
            cout << "Ingrese una opcion: " << endl;
            cout << "1 para modificar la lista: " << endl;
            cout << "2 para imprimir la lista: " << endl;
            cout << "3 para re-inicializar la lista: " << endl;
            cout << "0 para salir: " << endl;
            cin >> userAction;
            cout << "---------------------" << endl;
            return userAction;
        }
};

int main() {
    TitlesManager manager;
    manager.run();
    return 0;
}