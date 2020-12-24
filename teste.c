#include <stdio.h>

int main(){
	
// lê caractere

	printf("Informe um caractere: ");
	char caractere = getchar();
	fflush(stdin);
	
	/* O 'getchar' pega um caractere e guarda no buffer de entrada o <ENTER>. 
	 * 
	 * O 'fflush' serve para esvazia o buffer de entrada, jogando fora o <ENTER>. 
	 */
	 
// Exibe caractere
	 
	 printf("Caractere informado: ");
	 putchar(caractere);

// Lê cadeia

	printf("\n\n Informe uma cadeia: ");
	char cadeia[10];
	gets(cadeia);
	
// Exibe cadeia
	
	printf("\n Cadeia informada: "); 
	puts(cadeia);

}
