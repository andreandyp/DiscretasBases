#include <stdio.h>
#include <stdlib.h>
void residuos(base,numero);
int valores[],i;
int main() {
	int base,numero,j;
	printf("Inserta un numero en base 10");
	scanf("%d",&numero);
	printf("Inserta la nueva base");
	scanf("%d",&base);
	residuos(base,numero);
	j = i;
	while(j > 0){
		printf("%d",valores[j-1]);
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
