/* Aula 2, Atividade 2.
Foi incumbida a você, programador, uma demanda de implementar um cadastro de estudantes de uma escola. 
Identifique quais serão esses dados - e somente os dados necessários, para a realização desse cadastro. 
Implemente um programa em C que receba os referidos dados e, em seguida, os apresente na tela. 
*/ 

#include <stdio.h>

int main(){
	//Declara variáveis
	
	char nome[50];
	char sexo[15];
	char cpf[20];
	char telefone[20];
	int idade, serieMedio, serieF;
	char ensMedio;
	char ensF;

	//Solicita valores para as variáveis. 
	
	printf("---DADOS DO ALUNO---\n\n");
	
	printf("Entre com o nome: ");
	gets(nome); 
	
	printf("\nEntre com o sexo (masculino ou feminino): ");
	scanf("%s", sexo);
	
	printf("\nEntre com o CPF: ");
	scanf("%s", cpf);
	
	printf("\nEntre com o numero do responsavel: ");
	scanf("%s", telefone);
	
	printf("\nEntre com a idade do aluno: ");
	scanf("%d", &idade);
	
	printf("\nO aluno esta fazendo o ensino medio? [s/n]: ");
	scanf("%s", &ensMedio);
	fflush(stdin);
	
	//Mostrar os valores informados
	

	
	if (ensMedio == 's' || ensMedio =='S') {
		printf("\nInforme a serie do aluno [1/2/3]: ");
		scanf("%d", &serieMedio);
	} else if (ensMedio == 'n' || ensMedio =='N'){
		printf("\nO aluno estuda no ensino fundamental? [s/n]: ");
		scanf("%s", &ensF);
 	} if (ensF == 's' || ensF == 'S'){
 		printf("\nInforme a serie do aluno [1 a 9]: ");
 		scanf("%d", &serieF);
	} 
	
	printf("---Dados do aluno---\n\n");
	
	printf("Nome: %s \n", nome);
	
	printf("Sexo: %s \n", sexo);
	
	printf("CPF: %s \n", cpf);
	
	printf("Telefone do responsavel: %s \n", telefone);
	
	if (ensMedio == 's' || ensMedio =='S') {
	printf("\n O aluno cursa o %d ano do Ensino Medio", serieMedio);
	} else if (ensF == 's' || ensF == 'S'){
	printf("\n O aluno cursa o %d ano do Ensino Fundamental", serieF);
	} else if (ensF == 'n' || ensF == 'N'){
		printf("\n Lamentamos informar que o aluno nao pode se matricular nesta escola. Trabalhamos apenas com o ensino fundamental e medio."); 
	}
}
