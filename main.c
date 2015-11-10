#include <stdio.h>
#include <stdlib.h>
void residuos(base,numero);
int valores[],i;
int main() {
	int base,numero,j;
	printf("Inserta un numero en base 10: ");
	scanf("%d",&numero);
	printf("Inserta la nueva base: ");
	scanf("%d",&base);
	residuos(base,numero);
	j = i;
	printf("El valor en la base seleccionada es: ");
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
}
void residuos(base,numero){
	int letras;
	i=0;
	while(numero != 0){
		letras = numero%base;
		numero = numero/base;
		valores[i] = letras;
		++i;
	}
}
