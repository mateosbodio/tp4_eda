/*
E. Crear un procedimiento amigosDeMario que contenga un arreglo de personajes {Luigi, Donkey, Yoshi} y reciba un puntero pt a string*, nos muestre los personajes incrementando pt++.
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void amigosDeMario(string personajes[], int& n) {
    vector<string> vecPersonajes(personajes, personajes + n);
    cout << "Personajes amigos de Mario: ";
    for (string& s : vecPersonajes) {
        cout << s << " ";
    }
    cout << endl;
}

int main() {
    string personajes[] = {"Luigi", "Donkey", "Yoshi"};
    int n = sizeof(personajes) / sizeof(personajes[0]);
    int& m = n;

    amigosDeMario(personajes, m);

    return 0;
}