#include <stdio.h>
#include <conio.h>

int main(){
	
float num1, num2, num3; 

	printf("Informe o primeiro valor: ");
	scanf("%f", &num1);
	fflush(stdin);
	
	printf("Informe o segundo valor: ");
	scanf("%f", &num2);
	fflush(stdin);
	
	printf("Informe o terceiro valor: ");
	scanf("%f", &num3);
	fflush(stdin);
	
	if (num1 > num2)
		if (num1 > num3)
			printf("O primeiro valor e maior! \n");
	if (num2 > num1)
		if(num2 > num3)
			printf("O segundo valor e maior! \n");
	if (num3 > num1)
		if (num3 > num2)
		printf("O terceiro valor e maior!\n");

system("pause");

return(0);	
	
}
