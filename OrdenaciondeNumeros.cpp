
/*
 * Ordenación de números: Crea un programa que permita al usuario ingresar una lista de
   números enteros y luego ordene esos números de menor a mayor utilizando el algoritmo de ordenación de
   burbuja o cualquier otro algoritmo de ordenación que prefieras.

 */


#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {     // Se puede decir que es un sencillo algoritmo de ordenamiento
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Lo uqe hace es intercambia los elementos si están en el orden incorrecto
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {

    const int MAX_SIZE = 100; // Tamaño maximo
    int numbers[MAX_SIZE];
    int n;

    cout << "Ingrese la cantidad de numeros (menos de " << MAX_SIZE << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        cout << "Cantidad invalida de numeros.\n";
        return 1;
    }

  cout << "Ingrese los " << n << " numeros separados por espacios:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Llamar a la función bubbleSort para ordenar los números
    bubbleSort(numbers, n);

    cout << "Numeros ordenados de menor a mayor:\n";
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;


    return 0;
}
