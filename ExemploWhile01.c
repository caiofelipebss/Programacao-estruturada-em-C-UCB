//Contar a quantidade de números digitados com WHILE

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	
	float num; 
	int cont;
	
	cont = 0; //inicializa a variável
	
	printf("Digite o numero ou zero para sair: ");
	scanf("%d", &num);
	
	while (num != 0) { //Condição
		cont = cont++; //Processo de contagem (n = n+1)
		
	printf("\nDigite um numero ou zero para sair: ");
	scanf("%d", &num);
	
	}
	
	printf("\n---------------------------------\n\n");
	printf("Foram digitados %d numeros! ", cont);
	
	system("pause");
	return 0;
	
}
