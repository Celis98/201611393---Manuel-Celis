#include <iostream>

using namespace std;


void weather(int temperature){
    if(temperature<15)
    {
        cout << "Esta haciendo frio" << endl;
    }
    else if (temperature>25)
    {
        cout << "Esta haciendo calor" << endl;

    }
    else
    {
        cout << "El clima es agradable" << endl;
    } 

}

int main(){
    int userTemperature;
    cout << "Ingrese el valor de la temperatura: ";
    cin >> userTemperature;
    weather(userTemperature);

    return 0;
}