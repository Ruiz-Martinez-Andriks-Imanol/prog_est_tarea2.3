/* * Autor: Andriks Imanol Ruiz Mártinez, Realizado: 10/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa de condicionales en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -Condicionales
    -Espaciado \t y el salto de renglón \n
    -Operadores lógicos
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
int main() {
	//Declaración
	float colonial, dividida, planta,area1, area2, area3,valor, valor2, valor3;
	//Entrada de datos
	printf("Introduce el precio base de la casa Colonial: \n");
	scanf("%f", &colonial);
	printf("Introduce el area de la casa Colonial: \n");
	scanf("%f", &area1);
	printf("Introduce el precio base de la casa de Entrada Dividida: \n");
	scanf("%f", &dividida);
 printf("Introduce el area de la casa de Entrada Dividida: \n");
	scanf("%f", &area2);
	printf("Introduce el precio base de la casa de una Sola planta: \n");
	scanf("%f", &planta);
	printf("Introduce el area de la casa de una Sola planta: \n");
	scanf("%f", &area3);
	//Procesamiento
    valor=colonial/area1;
    valor2=dividida/area2;
    valor3=planta/area3;
    //Salida
    printf("\t\t El valor de la casa Colonial:\t-$%10.2f\n", valor);
	printf("\t\t El valor de la casa de Entrada Dividida:\t-$%10.2f\n", valor2);
	printf("\t\t El valor de la casa de una Sola planta:\t-$%10.2f\n", valor3);
	if ((valor<valor2) && (valor < valor3)) { //Condicionales
	printf("La primera casa es menor "); 
} else if ((valor2<valor) && (valor2 < valor3)) {
	printf("La segunda casa es menor ");
} else {
	printf("La tercera casa es menor ");
}
	return 0;
}
