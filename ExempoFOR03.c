#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int i, quant; 
	printf("Informe a quantidade de numeros que deseja imprimir: ");
	scanf("%d", &quant);
	
	printf("Numeros em ordem crescente de 1 ate %d: \n ", quant);
	
	for (i=1; i<=quant; i++){
		printf("%d \n", i);
	}
	printf("\n");
	system("pause");
	return(0);
	
}
