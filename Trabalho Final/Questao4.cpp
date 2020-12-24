/* Aqui vamos melhorar a solução apresentada no Programa 1, movendo o cálculo de Vout para
dentro de uma função. Para isso vamos escrever uma função que recebe como entrada os valores de R1,
R2 e Vin e, usando a fórmula do Programa 1, calcula e retorna o valor da tensão de saída Vout.. (15 pontos)

Pontos a serem observados:
? Sua função não pode fazer a leitura dos valores de R1, R2 e Vin (ela deve receber os valores)
? Sua função não pode mostrar o valor de Vout (esse valor deve ser retornado pela função)
	
	Assim sendo:
? Seu programa deve solicitar os valores de R1, R2 e Vin e chamar a função para obter Vout.
? Uma vez feito isso, ele deve mostrar o valor de Vout. 
*/ 

#include <stdio.h>

// Função que calcula e retorna o valor da tensão de saída Vout
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
	
	// solicita o valor da tensão de referência (Vin)
	
	float VIN; 
	printf("Entre com o valor da tensao de referencia(Vin): ");
	scanf("%f", &VIN); 
	
	// A função é chamada
	float tensaoS = tensaoSaida (R1, R2, VIN);
	
	// informa o valor da tensão de saída
	printf("O valor da tensao de saida e: %.2f", tensaoS);
	
}
