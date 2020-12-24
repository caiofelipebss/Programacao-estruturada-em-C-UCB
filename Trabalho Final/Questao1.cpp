/* Programa 1. Em eletr�nica usa-se uma t�cnica conhecida como divisor de tens�o para se obter uma tens�o
el�trica (Vout) menor que outra tens�o de refer�ncia (Vin).Essa t�cnica � ilustrada no circuito abaixo, onde
temos dois resistores (R1 e R2) ligados em s�rie: (15 pontos)

Assim, sabendo-se que Vin � a tens�o de entrada do circuito, Vout a tens�o de sa�da, temos que:

Tomando como base essa defini��o, escreva um programa que solicite ao usu�rio valores para R1, R2 e Vin
e, usando a f�rmula acima, calcule o valor da tens�o de sa�da Vout.
Nesse programa voc� n�o deve usar fun��es. Seu programa deve ter somente a fun��o main. 
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
	
	// solicita o valor da tens�o de refer�ncia (Vin)
	float Vin; 
	printf("Entre com o valor da tensao de referencia(Vin): ");
	scanf("%f", &Vin); 
	
	// calcula o valor da tens�o de sa�da (Vout)
	float Vout; 
	Vout = (r2/(r1+r2))* Vin;
	
	// informa o valor da tens�o de sa�da
	printf("O valor da tensao de saida e: %.2f", Vout);
	
	
}
