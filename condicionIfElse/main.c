#include <stdio.h>

int main()
{
    int numero = 0; // declaramos la variable para almacenar el numero ingresado

    printf("Ingrese un numero:");
    scanf("%d", &numero); // ingreso del numero ingresado por el usuario


    if (numero > 0) // Si el número es mayor que 0
    {
        printf("El numero es positivo\n");
    }

    else if (numero < 0) // Si el número es menor que 0
    {
        printf("El numero es negativo\n");
    }

    else // Si ninguna de las condiciones anteriores se cumple, entonces es 0
    {
        printf("El numero es cero\n");
    }

    return 0;
}
