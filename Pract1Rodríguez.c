/*
									UNIVERSIDAD AUTÓNOMA DE BAJA CALIFORNIA
								  FACULTAD DE CIENCIAS QUÍMICAS E INGENIERÍA
									  ALGORITMOS Y ESTRUCTURA DE DATOS
											     PRÁCTICA #1

Nombre: Rodríguez Muñoz José Luis
Práctica: Estructuras de datos
Fecha: 24/Agosto/2019
Descripción completa: Un número complejo z=x+iy se puede representar en forma polar r_θ. Utilizando una estructura
para representar un número complejo, implemente un menú que permita al usuario efectuar N veces las
operaciones aritméticas básicas entre dos números complejos capturados en su forma rectangular. Las
funciones que se le pide implementar son:

1. Capturar un número complejo.
2. Suma de dos números complejos.
3. Resta de dos números complejos.
4. Multiplicación de dos números complejos.
5. División de dos números complejos.
6. Salir

- La función de captura solo debe capturar un número complejo a la vez. Se debe hacer una
llamada a la función por cada número.
- Las operaciones solo se pueden realizar si se han capturado ambos números.
- Debe utilizar otra estructura de datos para guardar los números en su forma polar.
- La estructura para forma rectangular solo puede contener un número complejo en su forma
rectangular (x+iy).
- La estructura para forma polar solo puede contener un número complejo en su forma polar
(x+iy).
- Las operaciones de multiplicación y división se deben realizar utilizando la forma polar de ambos
números.
- En todos los casos se deben mostrar los datos y resultados en forma rectangular y forma polar.
- El programa debe repetirse N veces hasta que se elija la opción de salida.
- Debe evitarse el uso de variables globales.
- Debe evitar el uso de archivos.
- Debe elaborarse en forma individual.

Nota: Al elegir una operación sin antes capturar los números el programa si funcionará y mostrará que es 0 + 0i. Pero se "trabará"
esto es por la implementación de la función atan. Pero cuando el usuario ya capture valores el programa no tendrá ningún problema y mostrará
los resultados correspondientes 

*/

#include <stdio.h>
#include <math.h> // Para la función arcotangente

typedef struct
{
    float a; // Parte real
    float b; // Parte imaginaria
} Complejo;

typedef struct
{
    float r; // Módulo
    float theta; // Ángulo θ
} Polar;

Complejo complejo1, complejo2;// Variables de la estructura Complejo
Polar modulo, angulo; // Variables de la estructura Polar

// Prototipos de las funciones necesarias para la construcción del programa
void captura(Complejo *complejo1, Complejo *complejo2);
void suma(Complejo *complejo1, Complejo *complejo2);
void resta(Complejo *complejo1, Complejo *complejo2);           /*  " * " Para utilizar puntero con parámetros por referencia  */
void multiplicacion(Complejo *complejo1, Complejo *complejo2);
void division(Complejo *complejo1, Complejo *complejo2);

int main()
{
    int opcion;
    do
    {
        system("cls");
        printf("\n\t Operaciones con N%cmeros Complejos", 163);
        printf("\n\n 1) Capturar un n%cmero complejo \n 2) Suma de dos n%cmeros complejos \n 3) Resta de dos n%cmeros complejos", 163, 163, 163);
        printf("\n 4) Multiplicaci%cn de dos n%cmeros complejos \n 5) Divisi%cn de dos n%cmeros complejos \n 6) Salir", 162, 163, 162, 163);
        opcion = getch();

        switch(opcion)
        {
        case '1':
            system("cls");
            captura(&complejo1, &complejo2);
            break;

        case '2':
            system("cls");
            suma(&complejo1, &complejo2);
            getch();
            break;

        case '3':
            system("cls");
            resta(&complejo1, &complejo2);
            getch();
            break;

        case '4':
            system("cls");
            multiplicacion(&complejo1, &complejo2);
            getch();
            break;

        case '5':
            system("cls");
            division(&complejo1, &complejo2);
            getch();
            break;
        }
    } while(opcion != '6'); // Si el usuario teclea un "6" entonces saldra del programa
    {
        system("cls");
        printf("\n\n Nos vemos ...");
    }
}
        /* Mandamos a llamar a cada función
Como es por referencia se utiliza el operador flecha " -> "  */

void captura(Complejo *complejo1, Complejo *complejo2)
{
    printf("\n\n\t Primer n%cmero complejo", 163);
    printf("\n\n Ingresa la parte real: ");
    scanf("%f", &complejo1->a);
    printf("\n Ingresa la parte imaginaria: ");
    scanf("%f", &complejo1->b);

    system("cls");
    printf("\n\n\t Segundo n%cmero complejo", 163);
    printf("\n\n Ingresa la parte real: ");
    scanf("%f", &complejo2->a);
    printf("\n Ingresa la parte imaginaria: ");
    scanf("%f", &complejo2->b);
}

void suma(Complejo *complejo1, Complejo *complejo2)
{
    Complejo complejo3;
    Polar modulo, angulo;
    printf("\n\n\t\t Forma rectangular");
    complejo3.a = complejo1->a + complejo2->a;
    complejo3.b = complejo1->b + complejo2->b;
    modulo.r = sqrt(pow(complejo3.a, 2) + pow(complejo3.b, 2));
    angulo.theta = atan((complejo3.b) / (complejo3.a)); // Arcotangente de b / a
    printf("\n\n\t El resultado de la suma es: %.2f + %.2fi", complejo3.a, complejo3.b);
    printf("\n\n\n\t\t Forma polar");
    printf("\n\n\t M%cdulo: %.2f\n\n\t Angulo: %.2f", 162, modulo.r, angulo.theta);
}

void resta(Complejo *complejo1, Complejo *complejo2)
{
    Complejo complejo3;
    Polar modulo, angulo;
    printf("\n\n\t\t Forma rectangular");
    complejo3.a = complejo1->a - complejo2->a;
    complejo3.b = complejo1->b - complejo2->b;
    modulo.r = sqrt(pow(complejo3.a, 2) + pow(complejo3.b, 2));
    angulo.theta = atan((complejo3.b) / (complejo3.a));
    printf("\n\n\t El resultado de la resta es: %.2f + %.2fi", complejo3.a, complejo3.b);
    printf("\n\n\n\t\t Forma polar");
    printf("\n\n\t M%cdulo: %.2f\n\n\t Angulo: %.2f", 162, modulo.r, angulo.theta);
}

void multiplicacion(Complejo *complejo1, Complejo *complejo2)
{
    Complejo complejo3;
    Polar modulo, angulo;
    printf("\n\n\t\t Forma rectangular");
    complejo3.a = (complejo1->a * complejo2->a);
    complejo3.b = (complejo1->b + complejo2->b);
    modulo.r = sqrt(pow(complejo3.a, 2) + pow(complejo3.b, 2));
    angulo.theta = atan((complejo3.b) / (complejo3.a));
    printf("\n\n\t El resultado de la multiplicaci%cn es: %.2f + %.2fi", 162, complejo3.a, complejo3.b);
    printf("\n\n\n\t\t Forma polar");
    printf("\n\n\t M%cdulo: %.2f\n\n\t Angulo: %.2f", 162, modulo.r, angulo.theta);
}

void division(Complejo *complejo1, Complejo *complejo2)
{
    Complejo complejo3;
    Polar modulo, angulo;
    printf("\n\n\t\t Forma rectangular");
    complejo3.a = (complejo1->a / complejo2->a);
    complejo3.b = (complejo1->b - complejo2->b);
    modulo.r = sqrt(pow(complejo3.a, 2) + pow(complejo3.b, 2));
    angulo.theta = atan((complejo3.b) / (complejo3.a));
    printf("\n\n\t El resultado de la divisi%cn es: %.2f + %.2fi", 162, complejo3.a, complejo3.b);
    printf("\n\n\n\t\t Forma polar");
    printf("\n\n\t M%cdulo: %.2f\n\n\t Angulo: %.2f", 162, modulo.r, angulo.theta);
}
