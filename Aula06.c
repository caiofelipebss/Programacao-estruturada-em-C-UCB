 #include <stdio.h>
 
 int main(){
 	
 	//Declara vari�veis
 	
 	const double PI = 3.1415; 
 	const int raio = 5;
 	double area, perimetro; 
 	
 	//Calcula raio e per�metro daa circunfer�ncia.
 	
 	area = PI * raio * raio; 
 	perimetro = 2 * PI * raio; 
 	
 	// Mostra resultados
 	
 	printf("Circunferencia de raio %d \n", raio);
 	printf("Area => %.2f \n", area);
 	printf("Perimetro => %.2f \n", perimetro);
 }
