 #include <stdio.h>
 
 int main(){
 	
 	//Declara variáveis
 	
 	const double PI = 3.1415; 
 	const int raio = 5;
 	double area, perimetro; 
 	
 	//Calcula raio e perímetro daa circunferência.
 	
 	area = PI * raio * raio; 
 	perimetro = 2 * PI * raio; 
 	
 	// Mostra resultados
 	
 	printf("Circunferencia de raio %d \n", raio);
 	printf("Area => %.2f \n", area);
 	printf("Perimetro => %.2f \n", perimetro);
 }
