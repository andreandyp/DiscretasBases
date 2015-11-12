#include <stdio.h>
#include <stdlib.h>
void residuos(int base,int numero);
int valores[] = {},i;
int main() {
	int base,numero,j;
	printf("\nInserta un numero en base 10: ");
	scanf("%d",&numero); //Obteniendo numero
	printf("Inserta la nueva base (2-16): ");
	scanf("%d",&base); //Obteniendo base
	residuos(base,numero); //Metodo para obtener residuos
	j = i;
	printf("El valor en la base seleccionada es: ");
	//Imprime todos los números desde el ultimo residuo hasta el primero
	//Convierte a letras para bases de 10 a 16
	while(j > 0){
		switch(valores[j-1]){
			case 10:
				printf("%c",'A');
				break;
			case 11:
				printf("%c",'B');
				break;
			case 12:
				printf("%c",'C');
				break;
			case 13:
				printf("%c",'D');
				break;
			case 14:
				printf("%c",'E');
				break;
			case 15:
				printf("%c",'F');
				break;
			default:
				printf("%d",valores[j-1]);
				break;
		}
		j--;
	}
	printf("\n");
}
void residuos(base,numero){
	int letras;
	i=0;
	while(numero != 0){
		//Aplicando el algoritmo de la división
		letras = numero%base;
		numero = numero/base;
		valores[i] = letras; //Guardando los residuos en un arreglo
		++i;
	}
}
