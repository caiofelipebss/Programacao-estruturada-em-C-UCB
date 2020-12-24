#include <stdio.h>
#include <conio.h>

//Biblioteca necess�ria para habilitar o comando getech()

main() //Ponto de inicializa��o;
{
	int numero; 
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &numero);
	
	fflush(stdin); //Limpeza do Buffer do scanf.
	
	/* Quando a fun��o  scanf  � processada, ela l� somente o caractere digitado e a tecla <Enter> (2� caractere) continua armazenado no buffer, como sujeira. 
	 * Essa sujeira precisa ser removida (limpeza de buffer), pois caso essa limpeza n�o seja feita, o programa poder� ser impactado. 
	 * A Linguagem C n�o faz essa limpeza automaticamente, para tal, recomenda-se a utiliza��o da fun��o  fflush(stdin); 
	 * ap�s a escrita do comando  scanf()  para resolver o problema.
	*/
	
	
	printf("O numero digitado foi %d. \n", numero);
	
	getch(); //Dar uma pausa na tela de modo que o programa ser� encerrado ap�s a digita��o de uma tecla qualquer. 
}
