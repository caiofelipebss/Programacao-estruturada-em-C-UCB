#include <stdio.h>

int main(){
	printf("%-20s %12s \n", "Produto", "Preco");
	printf("%-20s %12.2f \n", "Memoria DDR4", 120.50);
	printf("%-20s %12.2f \n", "Disco Rigido", 250.0);
	printf("%-20s %12.2f \n", "Teclado Wireless", 60.0);
	
	
	// %12s -> Texto usando 12 caracteres; 
	// %-20s -> texto usando 20 caracteres e alinhado à esquerda; 
	// 12.2f -> Real usando 12 caracteres e duas casas decimais. 
}
