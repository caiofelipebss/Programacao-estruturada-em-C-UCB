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

char nome[50];
char sexo;
int quantidadeMalas, pesoMalas; 
string cpf;
string telefone;

printf("Entre com o nome do cliente: \n");
gets(nome);
fflush(stdin);

printf("Entre com o sexo: [M - Masculino ou F - Feminino]\n");
scanf("%c", &sexo);
fflush(stdin);

printf("Entre com o CPF (sem traços e pontos, apenas numeros): \n");
scanf("%s", &cpf);
fflush(stdin);

printf("Entre com o telefone (sem traços e pontos, apenas numeros): \n");
scanf("%s", &telefone);
fflush(stdin);

printf("Entre com a quantidade de malas: \n");
scanf("%d", &quantidadeMalas);
fflush(stdin);

printf("Entre com o peso total das malas: \n");
scanf("%d", &pesoMalas);
fflush(stdin);

printf("Nome: %c. \nSexo: %c. \nCPF: %s. Telefone: %s. \nQuantidade de malas: %d. \nPeso das malas: %d.", nome, sexo, cpf, telefone, quantidadeMalas, pesoMalas);

getch();
}
