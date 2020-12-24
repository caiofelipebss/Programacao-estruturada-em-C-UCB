#include <stdio.h>

int main(){
	
	//Programa para trocar o valor das variáveis. 
	
	//Inicializa as variáveis
	
	int a;
	int b;
	a = 15;
	b = 54; 
	
	//Faz a troca. 
	
	printf("Antes da troca a = %d e b = %d \n", a, b);
	int aux = a; 
	a = b; 
	b = aux; 
	
	// Mostra o resultado: 
	
	printf("Depois da troca, a = %d e b= %d \n", a, b);
}
