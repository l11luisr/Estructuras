
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
esto es por la implementación de la función atan. Pero cuando el usuario ya capture valores el programa no tendrá ningún problema y mostrará los resultados correspondientes. 
