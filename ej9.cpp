/*
9. Realice un programa permita elegir entre contar palabras de una frase y contar la ocurrencia de una palabra en la frase, mientras el usuario lo desee. Para ello valerse de lo siguiente:
• Una función que permita conocer cuantas palabras hay en una frase recibida como parámetro.
• Otra función que determine cuantas veces se encuentra una palabra en una frase.
*/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(string str) {
   int count = 0;
   istringstream stream(str);
   string word;
   while (stream >> word) {
       count++;
   }
   return count;
}

int countOccurrences(string str, string word) {
   int count = 0;
   istringstream stream(str);
   string temp;
   while (stream >> temp) {
       if (temp == word) {
           count++;
       }
   }
   return count;
}

int main() {
   string userInput;
   int option;

   do {
       cout << "Ingrese una frase: ";
       getline(cin, userInput);

       cout << "Seleccione una opción:" << endl;
       cout << "1. Contar palabras" << endl;
       cout << "2. Contar ocurrencias de una palabra" << endl;
       cout << "3. Salir" << endl;
       cin >> option;
       cin.ignore();

       switch (option) {
           case 1:
               cout << "La frase tiene " << countWords(userInput) << " palabras." << endl;
               break;
           case 2:
               cout << "Ingrese la palabra que desea contar: ";
               string word;
               getline(cin, word);
               cout << "La palabra \"" << word << "\" se encuentra " << countOccurrences(userInput, word) << " veces en la frase." << endl;
               break;
           case 3:
               cout << "Saliendo..." << endl;
               break;
           default:
               cout << "Opción inválida." << endl;
               break;
       }
   } while (option != 3);

   return 0;
}