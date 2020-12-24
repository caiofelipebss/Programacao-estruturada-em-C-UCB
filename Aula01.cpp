#include <stdio.h>
#include <conio.h>

//Biblioteca necessária para habilitar o comando getech()

main() //Ponto de inicialização;
{
	int numero; 
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &numero);
	
	fflush(stdin); //Limpeza do Buffer do scanf.
	
	/* Quando a função  scanf  é processada, ela lê somente o caractere digitado e a tecla <Enter> (2° caractere) continua armazenado no buffer, como sujeira. 
	 * Essa sujeira precisa ser removida (limpeza de buffer), pois caso essa limpeza não seja feita, o programa poderá ser impactado. 
	 * A Linguagem C não faz essa limpeza automaticamente, para tal, recomenda-se a utilização da função  fflush(stdin); 
	 * após a escrita do comando  scanf()  para resolver o problema.
	*/
	
	
	printf("O numero digitado foi %d. \n", numero);
	
	getch(); //Dar uma pausa na tela de modo que o programa será encerrado após a digitação de uma tecla qualquer. 
}
