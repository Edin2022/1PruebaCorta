/*
  Búsqueda de elementos: Desarrolla un programa que solicite al usuario ingresar un número
  y luego busque ese número en un vector predefinido. El programa debe indicar si el número
  está presente en el vector y, en caso afirmativo, en qué posición se encuentra.

*/


#include <iostream>

using namespace std;

#include <vector>

int main() {

    vector<int> numeros = {10, 20, 30, 40, 50};  //Ponemos numeros enteros

    // Solicitar al usuario ingresar un número
    int numerobuscado;
   cout << "Ingrese un numero: ";
    cin >> numerobuscado;

    // el numero en el vector
    bool encontrado = false;
    int posicion = -1; // Iniciamos con -1 para indicar que no se encontro
    for (int i = 0; i < numeros.size(); ++i) {
        if (numeros[i] == numerobuscado) {
            encontrado = true;
            posicion = i;
            break; // se pudo encotrar el numero ahora podemos salir del bucle
        }
    }


    if (encontrado) {
        cout << "El numero " << numerobuscado << " esta presente en la posicion " << posicion << endl;
    } else {
        cout << "El numero " << numerobuscado << " no se encuentra en el vector." << endl;
    }

    return 0;
}
