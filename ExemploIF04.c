#include <stdio.h>

int main(){
	
	int a, b, c, menor; 
	printf("Entre com os valores de a, b e c => ");
	scanf("%d %d %d", &a, &b, &c);
	
	//Determina o valor
	
	if(a < b && a < c){
		menor = a; 
	} else if (b < c) {
		menor = b; 
	} else {
		menor = c; 
	}
	
	printf("O menor valor e => %d", menor);
}
