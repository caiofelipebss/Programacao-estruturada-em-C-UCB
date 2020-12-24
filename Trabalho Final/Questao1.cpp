/* Programa 1. Em eletrônica usa-se uma técnica conhecida como divisor de tensão para se obter uma tensão
elétrica (Vout) menor que outra tensão de referência (Vin).Essa técnica é ilustrada no circuito abaixo, onde
temos dois resistores (R1 e R2) ligados em série: (15 pontos)

Assim, sabendo-se que Vin é a tensão de entrada do circuito, Vout a tensão de saída, temos que:

Tomando como base essa definição, escreva um programa que solicite ao usuário valores para R1, R2 e Vin
e, usando a fórmula acima, calcule o valor da tensão de saída Vout.
Nesse programa você não deve usar funções. Seu programa deve ter somente a função main. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// solicita o valor de R1
	
	float r1; 
	printf("Entre com o valor de R1: ");
	scanf("%f", &r1); 
	
	// solicita o valor de R2
	
	float r2; 
	printf("Entre com o valor de R2: ");
	scanf("%f", &r2); 
	
	// solicita o valor da tensão de referência (Vin)
	float Vin; 
	printf("Entre com o valor da tensao de referencia(Vin): ");
	scanf("%f", &Vin); 
	
	// calcula o valor da tensão de saída (Vout)
	float Vout; 
	Vout = (r2/(r1+r2))* Vin;
	
	// informa o valor da tensão de saída
	printf("O valor da tensao de saida e: %.2f", Vout);
	
	
}
