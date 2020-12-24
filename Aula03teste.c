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

char nome[50], cpf[15], telefone[15];
char sexo[1];
int quantidadeMalas, pesoMalas; 


printf("Entre com o nome do cliente: \n");
gets(nome);


printf("Entre com o sexo: [M - Masculino ou F - Feminino]\n");
gets(sexo);


printf("Entre com o CPF: \n");
gets(cpf);


printf("Entre com o telefone: \n");
gets(telefone);


printf("Entre com a quantidade de malas: \n");
scanf("%d", &quantidadeMalas);


printf("Entre com o peso total das malas: \n");
scanf("%d", &pesoMalas);


printf("Nome: %c. \nSexo: %c. \nCPF: %c. Telefone: %c. \nQuantidade de malas: %d. \nPeso das malas: %d.", nome, sexo, cpf, telefone, quantidadeMalas, pesoMalas);

getch();
}
