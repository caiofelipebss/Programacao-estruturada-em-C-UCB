/*
Programa 2. Um n�mero � considerado primo se for divis�vel apenas por 1 e por ele mesmo. Assim, tomando
em considera��o as seguintes regras: (15 pontos)

-  Se o n�mero for maior que 20, o programa deve dizer que o n�mero � inv�lido.
-  Se o n�mero for divis�vel por 2, 3, 5, 7, 11, 13, 17 ou 19 ...E.. n�o for um desses n�meros o algoritmo deve
dizer que ele n�o � primo;

Com base nessas regras, escreva um programa que verifique se um n�mero menor ou igual a 20 � primo. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Solicita o valor 
	int n1; 
	printf("Digite o valor que sera verificado: ");
	scanf("%d", &n1);
	
	if (n1>20) {
		printf("Erro! Nao e possivel verificar um valor maior que 20. ");
	} else if ((n1 % 2 == 0 && n1 != 2) || (n1 % 3 == 0 && n1 != 3) ||(n1 % 5 == 0 && n1 !=5) || (n1 % 7 == 0 && n1 != 7)
	 		|| (n1 % 11 ==0 && n1 != 11) || (n1 % 13 == 0 && n1 != 13) || (n1 % 15 == 0 && n1 != 15) || (n1 % 17 == 0 && n1 != 17) || (n1 % 19 == 0 && n1 != 19))
	{		
			printf("O numero %d nao e primo! ", n1);
	} else {
		printf("O numero %d e primo! ", n1);
	}

return(0);
}
