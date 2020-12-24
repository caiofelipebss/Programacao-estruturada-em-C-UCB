#include <stdio.h>

int main(){
	//Declarar variáveis
	
	char nome[50];
	char sexo[15];
	char cpf[20];
	char telefone[20];
	int qtdMalas;
	float pesoMalas; 
	
	//Solicita valores para as variáveis. 
	
	printf("Entre com o nome: ");
	gets(nome); 
	
	/* Usar o GETS quando se quer mais de uma palavra, onde você dará espaço. Ex: "Caio Felipe", "(81) 9-9706884" etc.
	 * Poderia ser também scanf("%s", nome); 
	 * Não pode ser Scanf, pois scanf lê apenas UMA PALAVRA. Se eu colocasse "Caio Felipe", ele leria apenas o "Caio", armazenaria o "Felipe" no sexo e pularia a parte de "sexo". 
   	 * Se fosse usar o Scanf, deveria usar o "fflush(stdin)", para limpar o buffer. 
	*/
	
	printf("\nEntre com o sexo (masculino ou feminino): ");
	scanf("%s", sexo);
	
	printf("\nEntre com o CPF: ");
	scanf("%s", cpf);
	
	printf("\nEntre com o telefone: ");
	scanf("%s", telefone);
	
	printf("\nEntre com a quantidade de malas: ");
	scanf("%d", &qtdMalas);
	
	printf("\nEntre com o peso total das malas: ");
	scanf("%f", &pesoMalas);
	
	//Mostrar os valores: 
	
	printf("Nome: %s \n", nome);
	
	printf("Sexo: %s \n", sexo);
	
	printf("CPF: %s \n", cpf);
	
	printf("Telefone: %s \n", telefone);
	
	printf("Quantidade de malas: %d \n", qtdMalas);
	
	printf("Peso total das malas: %.2f", pesoMalas);

} 
