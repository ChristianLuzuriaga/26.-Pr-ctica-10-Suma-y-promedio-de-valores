#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Desarrolla un programa que solicite constantemente la carga de un número al usuario.
    El programa finalizará cuando el usuario introduzca un 0, momento en el que se debe visualizar la suma y el promedio de todos los números introducidos. */

    int suma = 0, contador = 0, numero = -1;

    while (numero != 0) {
        printf("Introduce un numero: ");
        scanf("%d", &numero);

        contador++;
        suma += numero;
    }

    float promedio = (float)suma / (contador - 1);

    printf("La suma de todos los numeros es: %d y el promedio es: %.2f\n", suma, promedio);

    
}
