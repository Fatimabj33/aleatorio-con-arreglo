#include <iostream>
#include <ctime>
#include <cstdlib>

// Función para generar un número entero aleatorio entre min y max (ambos inclusive)
int generarNumeroAleatorio(int min, int max) {
    // Calculamos un número aleatorio dentro del rango [min, max]
    return min + rand() % (max - min + 1);
}



// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// muestra el arreglo
void mostrarArreglo(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; ++i) {
      std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int tamanoArreglo = 20;
    int numerosAleatorios[tamanoArreglo];
    int numerosPrimos[tamanoArreglo];
    int contadorPrimos = 0;
    //genera la semilla aleatoria
    srand(time(nullptr));

    // Generar números aleatorios entre 0 y 99
    for (int i = 0; i < tamanoArreglo; ++i) {
        numerosAleatorios[i] = generarNumeroAleatorio(0, 99);
    }

    // Encontrar los números primos y almacenarlos en el nuevo arreglo
    for (int i = 0; i < tamanoArreglo; ++i) {
        if (esPrimo(numerosAleatorios[i])) {
            numerosPrimos[contadorPrimos] = numerosAleatorios[i];
            ++contadorPrimos;
        }
    }

    // Mostrar los dos arreglos
    std::cout << "Numeros aleatorios generados: ";
    mostrarArreglo(numerosAleatorios, tamanoArreglo);
    std::cout << "Numeros primos encontrados: ";
    mostrarArreglo(numerosPrimos, contadorPrimos);
    return 0;
}


