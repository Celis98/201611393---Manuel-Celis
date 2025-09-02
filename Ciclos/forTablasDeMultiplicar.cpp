#include<iostream>

using namespace std;

int main() {
    // int i = 0
    // i < 10 hasta que deje de cumplirse la condicion
    // i++ 

    for(int i = 1; i <= 10; i++)
    {
        cout << "Tabla del: " << i << endl;
        for (int j = 1; j <= 5; j++)
        {
            int result = i * j;
            cout << i << " * " << j << " = " << result << endl;
        }
    }

    return 0;
}