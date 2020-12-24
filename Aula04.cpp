#include <stdio.h>

int main(){
	
	//Escreve constantes inteiras em formato decimal, octal e hexadecimal. 
	
	printf("Constantes inteiras em formato decimal, octal e hexadecimal:\n\n");
	printf("Em decimal => %d %d %d \n", 10, 012, 0xA);
	printf("Em octal => %o %o %o \n", 10, 012, 0xA);
	printf("Em hexa => %x %x %x \n\n", 10, 012, 0xA);
	
	//Escreve constantes reais:
	
	printf("Constantes reais: \n\n");
	printf("Constantes reais => %f %f \n", 3.1415, 2.E+3);
	printf("Duas casas decimais => %.2f %.2f \n\n", 3.1415, 2.E+3);
	
	//Escreve constantes literais:
	
	printf("Constantes Literais: \n\n");
	printf("Texto => %s \n", "Aprendendo a programar em C");
	printf("Caracteres => %c %c \n", 'a','\'');
	
}
