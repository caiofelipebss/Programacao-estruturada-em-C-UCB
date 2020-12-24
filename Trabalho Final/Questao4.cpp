/* Aqui vamos melhorar a solu��o apresentada no Programa 1, movendo o c�lculo de Vout para
dentro de uma fun��o. Para isso vamos escrever uma fun��o que recebe como entrada os valores de R1,
R2 e Vin e, usando a f�rmula do Programa 1, calcula e retorna o valor da tens�o de sa�da Vout.. (15 pontos)

Pontos a serem observados:
? Sua fun��o n�o pode fazer a leitura dos valores de R1, R2 e Vin (ela deve receber os valores)
? Sua fun��o n�o pode mostrar o valor de Vout (esse valor deve ser retornado pela fun��o)
	
	Assim sendo:
? Seu programa deve solicitar os valores de R1, R2 e Vin e chamar a fun��o para obter Vout.
? Uma vez feito isso, ele deve mostrar o valor de Vout. 
*/ 

#include <stdio.h>

// Fun��o que calcula e retorna o valor da tens�o de sa�da Vout
float tensaoSaida (float r1, float r2, float Vin){
	float Vout; 
	Vout = (r2/(r1+r2))* Vin;
	return Vout; 
}

int main(){
	
	// solicita o valor de R1
	
	float R1; 
	printf("Entre com o valor de R1: ");
	scanf("%f", &R1); 
	
	// solicita o valor de R2
	
	float R2; 
	printf("Entre com o valor de R2: ");
	scanf("%f", &R2); 
	
	// solicita o valor da tens�o de refer�ncia (Vin)
	
	float VIN; 
	printf("Entre com o valor da tensao de referencia(Vin): ");
	scanf("%f", &VIN); 
	
	// A fun��o � chamada
	float tensaoS = tensaoSaida (R1, R2, VIN);
	
	// informa o valor da tens�o de sa�da
	printf("O valor da tensao de saida e: %.2f", tensaoS);
	
}
