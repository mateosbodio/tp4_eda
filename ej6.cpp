/*
6. En este ejemplo, tenemos una estructura Abuela que contiene un nombre, edad, y hobby. La función modificarAbuela recibe una referencia a una estructura Abuela, y cambia nombre, edad, y hobby (tejer, amasar, bordar). En la función main, creamos una instancia de Abuela llamada abue1 con su nombre, edad, y hobby inicial. Luego, imprimimos los valores originales. Después, llamamos a la función modificarAbuela pasando abue1 por referencia. Esto significa que los cambios realizados dentro de la función afectarán directamente a la estructura original. Finalmente, imprimir los valores de abue1 después de la modificación para mostrar que los cambios han sido aplicados.
*/
#include <iostream>
#include <string>

struct Abuela {
   std::string nombre;
   int edad;
   std::string hobby;
};

void modificarAbuela(Abuela &abuela) {
   abuela.nombre = "Lourdes";
   abuela.edad = 85;
   abuela.hobby = "tejer, amasar, bordar";
}

int main() {
   Abuela abue1 = {"Carmen", 80, "crochet, cooking, sewing"};

   std::cout << "Nombre: " << abue1.nombre << std::endl;
   std::cout << "Edad: " << abue1.edad << std::endl;
   std::cout << "Hobby: " << abue1.hobby << std::endl;

   modificarAbuela(abue1);

   std::cout << "Nombre modificado: " << abue1.nombre << std::endl;
   std::cout << "Edad modificada: " << abue1.edad << std::endl;
   std::cout << "Hobby modificado: " << abue1.hobby << std::endl;

   return 0;
}