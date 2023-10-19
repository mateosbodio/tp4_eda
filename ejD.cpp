/*
D. La función Hogwarts recibirá un puntero a cadena “hechizo”, y muestra por pantalla cuantas vocales y consonantes tiene. Testear con ‘Expelliarmus’, nos muestra: 5 vocales, 7 consonantes.
*/
#include <iostream>
#include <string>

using namespace std;

void contar_vocales_y_consonantes(string *hechizo) {
    int vocales = 0;
    int consonantes = 0;

    for (int i = 0; i < hechizo->length(); i++) {
        char letra = (*hechizo)[i];
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            vocales++;
        } else if (letra != ' ') {
            consonantes++;
        }
    }

    cout << "Vocales: " << vocales << endl;
    cout << "Consonantes: " << consonantes << endl;
}

int main() {
    string hechizo = "Expelliarmus";
    contar_vocales_y_consonantes(&hechizo);
    return 0;
}