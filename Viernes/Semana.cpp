#include <iostream>

using namespace std;


void week(int day){
    switch (day)
    {
    case 1:
        cout <<"lunes" <<endl;
        break;
    case 2:
        cout <<"martes" <<endl;
        break;
    case 3:
        cout <<"miercoles" <<endl;
        break;
    case 4:
        cout <<"jueves" <<endl;
        break;
    case 5:
        cout <<"viernes" <<endl;
        break;
    case 6:
        cout <<"sabado" <<endl;
        break;
    case 7:
        cout <<"domingo" <<endl;
        break;
    default:
        cout <<"valor no valido" <<endl;
        break;
    }



}

int main(){
    week(1);
    week(2);
    week(3);
    week(4);
    week(5);
    week(6);
    week(7);
    week(0);
    return 0;
}