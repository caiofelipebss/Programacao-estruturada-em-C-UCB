// Exemplo de utilização do comando IF

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

int num1, num2; 
	printf("Informe um valor: ");
	scanf("%d", &num1);	
	fflush(stdin);
	
	printf("Informe um valor: ");
	scanf("%d", &num2);
	fflush(stdin);
	
	if (num1 > num2){
		printf("\n %d e maior que %d\n", num1, num2);
	} else {
		printf("\n %d e maior que %d\n", num2, num1);
	}
system("pause");
return(0);
	
}
