//Contar a quantidade de n�meros digitados com WHILE

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	
	float num; 
	int cont;
	
	cont = 0; //inicializa a vari�vel
	
	printf("Digite o numero ou zero para sair: ");
	scanf("%d", &num);
	
	while (num != 0) { //Condi��o
		cont = cont++; //Processo de contagem (n = n+1)
		
	printf("\nDigite um numero ou zero para sair: ");
	scanf("%d", &num);
	
	}
	
	printf("\n---------------------------------\n\n");
	printf("Foram digitados %d numeros! ", cont);
	
	system("pause");
	return 0;
	
}
