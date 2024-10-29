/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

// Función recursiva para calcular el factorial
unsigned long long factorial(int n) {
    // Caso base
    if (n <= 1) {
        return 1;
    }
    // Llamada recursiva
    return n * factorial(n - 1);
}

int main() {
    int num;

    std::cout << "Ingrese un número para calcular su factorial: ";
    std::cin >> num;

    // Validación de entrada
    if (num < 0) {
        std::cout << "El factorial no está definido para números negativos." << std::endl;
    } else {
        std::cout << "El factorial de " << num << " es: " << factorial(num) << std::endl;
    }

    return 0;
}

