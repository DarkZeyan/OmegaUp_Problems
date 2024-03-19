#include <iostream>
#include <vector>
#include <cmath>

// Función para contar los números con 3 divisores en un rango dado
int contarNumerosConTresDivisores(int inicio, int fin) {
    // Generar todos los números primos hasta la raíz cuadrada del límite superior del rango
    long limite = static_cast<int>(std::sqrt(fin));
    std::vector<bool> esPrimo(limite + 1, true);
    esPrimo[0] = esPrimo[1] = false;

    for (long i = 2; i <= limite; ++i) {
        if (esPrimo[i]) {
            for (int j = i * i; j <= limite; j += i)
                esPrimo[j] = false;
        }
    }

    // Contar los números con 3 divisores dentro del rango
    int contador = 0;

    for (long i = 2; i * i <= fin; ++i) {
        if (esPrimo[i]) {
            int cuadrado = i * i;
            int numero = cuadrado;

            while (numero >= inicio && numero <= fin) {
                contador++;
                numero *= cuadrado;
            }
        }
    }

    return contador;
}

int main() {
    long inicio, fin;
    std::cout << "Ingrese el rango inicial: ";
    std::cin >> inicio;
    
    std::cin >> fin;

    int cantidad = contarNumerosConTresDivisores(inicio, fin);

    std::cout << cantidad;

    return 0;
}