/*
Programa 3. A matriz transposta de A (de dimensão m x n) é a matriz T (de dimensão n x m) onde cada
coluna de T corresponde a uma linha de A. (15 pontos)

Por exemplo, dada a matriz A
	10  20   30    40
	50  60   70    80
	90  100  110  120
	
sua matriz transposta T é 

	10 50 90
	20 60 100
	30 70 110
	40 80 120
	
Tomando como base essa definição, escreva um programa que:
? Solicite ao usuário os dados da matriz A, de 3 linhas e 4 colunas.
? Construa, a partir de A, a matriz transposta T, de 4 linhas e 3 colunas.
? Mostre na tela as duas matrizes. 
*/ 

#include <stdio.h>
#include <conio.h>
#define LIM 25


void transposta(int A[3][4], int T[4][3])
{ 
	int i, j;
	for (i=0; i<=2; i++)
		for(j=0; j<=3; j++) T[j][i] = A[i][j];
}

int main(void) { 

	//Cria matriz de 3 linhas e 4 colunas
	
	int i, j, matrizA[3][4], matrizT[4][3];
	
	//Geração de matriz 3x4 - inclusão dos elementos
	
	printf("Digite os elementos da matriz: \n");

	
	for (i=0; i<=2; i++) //Linhas da matriz 
		{
			for (j=0; j<=3; j++) //Colunas da matriz
			scanf("%i", &matrizA[i][j]);
		}

	//Impressão da matriz resultante
	
	printf("A matriz resultante e: \n");
	for (i=0; i<=2; i++) //Linhas 
	{
		for (j=0; j<=3; j++) //Colunas 
		printf("%i ", matrizA[i][j]);
		printf("\n");
	}
	
	//Impressão da matriz transposta
	
	transposta(matrizA, matrizT);
	printf("\n \n");
	printf("A matriz transposta e: \n");
	for (i=0; i<=3; i++)
	{
		for (j=0; j<=2; j++)
		printf("%3d ", matrizT[i][j]);
		putchar('\n');
	}
	
getch(); 
return(0);

}
