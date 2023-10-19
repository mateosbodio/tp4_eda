/*
17. Realice un programa que mientras el usuario lo desee pueda realizar estas operaciones, llamando a la función correspondiente, según las que siguen: A. Calcula la multiplicación por sumas sucesivas. Ej. 2 x 4 = 2 + 2 + 2 + 2 (suma 4 veces el numero 2 generalizando nxm =n+n+…(m veces). B. Calcula la división por restas sucesivas Ej. 10/2=5 (5 indica la cantidad de veces que pude restar 2 al 10. Y C. Calcule la potencia por multiplicaciones sucesivas Ej 2 3= 2*2*2 (multiplica 2 por si mismo 3 veces)
*/
p
Descargar
Copiar código
#include <iostream>
using namespace std;

int MultiplicacionPorSumas(int n, int m) {
   return n * m;
}

int DivisionPorRestas(int n, int m) {
   int resultado = 0;
   while (n >= m) {
       n -= m;
       resultado++;
   }
   return resultado;
}

int PotenciaPorMultiplicaciones(int n, int m) {
   int resultado = 1;
   for (int i = 0; i < m; i++) {
       resultado *= n;
   }
   return resultado;
}

int main() {
   int n, m, opcion;
   char continuar;

   do {
       cout << "1. Multiplicacion por sumas sucesivas\n";
       cout << "2. Division por restas sucesivas\n";
       cout << "3. Potencia por multiplicaciones sucesivas\n";
       cout << "Seleccione una opcion: ";
       cin >> opcion;

       cout << "Ingrese el primer numero: ";
       cin >> n;

       cout << "Ingrese el segundo numero: ";
       cin >> m;

       switch (opcion) {
           case 1:
               cout << "Resultado: " << MultiplicacionPorSumas(n, m) << endl;
               break;
           case 2:
               cout << "Resultado: " << DivisionPorRestas(n, m) << endl;
               break;
           case 3:
               cout << "Resultado: " << PotenciaPorMultiplicaciones(n, m) << endl;
               break;
           default:
               cout << "Opcion invalida" << endl;
       }

       cout << "Desea continuar? (s/n): ";
       cin >> continuar;

   } while (continuar == 's' || continuar == 'S');

   return 0;
}