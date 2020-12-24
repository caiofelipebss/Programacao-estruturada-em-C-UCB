#include <stdio.h>
#include <conio.h>

main()
{

/*
--- DADOS BÁSICOS SOBRE O CÓDIGO ---

Objetivo: Calcular o valor de dois números inteiros

Entrada: dois números inteiros

Saída: soma destes números

Autor: Caio Felipe B. S. Silva.

Data: 21/10/2020

Hora: 19:03

*/	
	int n1, n2; 
	printf("Digite dois numeros inteiros: \n");
	scanf("%d%d", &n1, &n2);
	
	fflush(stdin); //Limpeza do Buffer do scanf.
	
	printf("O resultado da soma de %d + %d = %d \n", n1, n2, n1+n2);
	
	getch(); //ou system("pause");
}
