#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int i;
	
	printf("Numeros em ordem decrescente de 10 ate 0: \n \n");
	
	for (i=10; i>=0; i--) {
		printf("%d \n", i);
	}
	printf("\n");
	system("pause");
	
	return(0);
}
