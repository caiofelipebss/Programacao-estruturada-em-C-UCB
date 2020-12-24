#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
float num1; 
	printf("Informe um valor :");
	scanf("%f", &num1);
	fflush(stdin);
	
	if (num1 > 0){
		printf("\n %f e positivo! \n", num1);
	}
	if (num1 < 0){
		printf("\n %f e negativo! \n", num1);
	}
	if (num1 == 0){
		printf("\n %f e nulo! \n", num1);
	}
		
system("pause");
return(0);
}
