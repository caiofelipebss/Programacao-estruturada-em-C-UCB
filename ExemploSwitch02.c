#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){
	char est_civil;
	printf("Qual o estado civil? [C/S/D/V] ");
	scanf("%c", &est_civil);
	
	switch(est_civil){
		
		case 'C': printf("Casado \n"); break; 
		case 'c': printf("Casado \n"); break;
		case 'S' : printf("Solteiro \n"); break;
		case 's': printf("Solteiro \n"); break;
		case 'D': printf("Divorciado \n"); break;
		case 'd': printf("Divorciado \n"); break;
		case 'V': printf("Viuvo(a) \n"); break;
		case 'v': printf("Viuvo(a) \n"); break;
		default: printf("Estado civil invalido \n");
	
	}
	
	system("pause");
	return(0);
}
