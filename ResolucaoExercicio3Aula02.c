/* Aula 2, atividade 3. 
Implemente um programa em C, que deverá ler o ano de nascimento de uma pessoa e o ano atual. Calcule e
imprima na tela o número de dias aproximados já vividos por essa pessoa, desconsidere anos bissextos. 
*/

#include<stdio.h>

int main(){
	
	//Solicita o nome da pessoa
	char nome[50];
	printf("Informe o nome da pessoa: ");
	gets(nome);
	
	//Solicita ano de nascimento
	int anoNasc;
	printf("Entre com o ano de nascimento: ");
	scanf("%d", &anoNasc);
	
	//Solicita o ano atual;
	int anoAtual;
	printf("Entre com o ano atual: ");
	scanf("%d", &anoAtual);
	
	//Calcula o numero de dias vividas
	int diasVividos; 
	diasVividos = ((anoAtual - anoNasc)*365);
	
	//Informa o numero de dias vividos. 
	
	printf("O numero aproximado de dias vividos de %s e: %d", nome, diasVividos);
}
