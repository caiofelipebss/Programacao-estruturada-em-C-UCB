#include <stdio.h>
#include <conio.h>

int main()
{

/*
--- DADOS BÁSICOS SOBRE O CÓDIGO ---

Objetivo: Escrever um programa que receba os seguintes dados de um cliente de uma companhia aérea:

Entrada: nome, sexo, cpf, telefone, quantidadeMalas, pesoMalas

Saída: Apresentar todos os dados lidos, sendo um em cada linha

Autor: Caio Felipe B. S. Silva.

Data: 21/10/2020

Hora: 19:03

*/	



printf("Entre com o nome do cliente: \n");
char nome[50];
gets(nome);

printf("Entre com o sexo: [M - Masculino ou F - Feminino]\n");
char sexo = getchar();
fflush(stdin);

printf("Entre com o CPF: \n");
char cpf[15];
gets(cpf);

printf("Entre com o telefone: \n");
char telefone[15];
gets(telefone);

printf("Entre com a quantidade de malas: \n");
int quantidadeMalas;
scanf("%d", &quantidadeMalas);

printf("Entre com o peso total das malas: \n");
int pesoMalas;
scanf("%d", &pesoMalas);

printf("Nome: "); 
puts(nome);  

printf("\nSexo: ");
putchar(sexo);

printf("\nCPF: ");
puts(cpf);

printf("\nTelefone: ");
puts(telefone);

printf("\nQuantidade de malas: %d. \nPeso das malas: %d.", quantidadeMalas, pesoMalas);

getch();
}
