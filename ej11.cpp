/*
11. Declare un vector Vec de tamaño TAM constante. Cree una función Cuadrado, a la cual se le envíe Vec y lo modifique con el cuadrado de sus valores. Otra función que lo muestre. Reutilice.
*/#include <iostream>
#include <vector>

using namespace std;

vector<int> vec = {1, 2, 3, 4, 5};
const int TAM = 5;

void cuadrado(vector<int>& vec) {
   for (int i = 0; i < TAM; i++) {
       vec[i] = vec[i] * vec[i];
   }
}

void mostrar(const vector<int>& vec) {
   for (const int& elem : vec) {
       cout << elem << " ";
   }
   cout << endl;
}

int main() {
   cuadrado(vec);
   mostrar(vec);

   return 0;
}