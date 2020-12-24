#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//Incializa gerador de numeros aleatorios
	
	srand( time(0));
	
	printf("**** Sugestao Mega-Sena **** \n");
	printf("**************************** \n");

	int i;
	for (i=1; i<=6; i++){
		
		//Sorteia valor entre 1 e 60
		int numero = (rand() % 60) + 1;
		printf("Sugestao %d => %d \n", i, numero);
	}
}
