#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	
	int i, j, matriz[3][3];
	
	//Gera��o da matriz 3x3 - Inclus�o dos elementos; 
	
	printf("Digite os elementos da matriz: \n");
	for (i=0; i <= 2; i++) //Linhas da matriz
	{
		for (j=0; j <=2; j++) //colunas da matriz
		scanf("%i", &matriz[i][j]);	
	}
	
	//Impress�o da matriz resultante
	
	printf("A matriz resultante e: \n");
	for (i=0; i<=2; i++){
		for (j=0; j<=2; j++)
		printf("%i", matriz[i][j]);
		printf("\n");
	}
}
