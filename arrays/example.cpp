#include<iostream>

using namespace std;

void exampleOne() {
    string cars[3] = {"mazda", "toyota", "volvo"};
    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;
}

void exampleTwo() {
    string cars[3] = {"mazda", "toyota", "volvo"};
    for (int i = 0; i < sizeof(cars); i++)
    {
        cout << cars[i] << endl;
    }
}

int main() {
    exampleOne();
    exampleTwo();
    return 0;
}