#include<stdio.h>

 int calculaIMC(float peso, float altura){
 	
 	printf("Insira o seu peso: ");
 	scanf("%f", &peso);
 	
 	printf("\nInsira a sua altura em metros: ");
 	scanf("%f", &altura);
 	
 	float IMC = peso/ (altura*altura);
 	
 	printf("\nSeu IMC e igual a: %f\n", IMC);
 	
 	if(IMC < 18.5){
 		printf("\nAbaixo do peso: IMC menor que 18,5");
	 } else if(IMC >= 18.5 && IMC <= 24.9){
	 	printf("\nPeso normal: IMC entre 18,5 e 24,9");
	 } else if(IMC >= 25 && IMC <= 29.9){
	 	printf("\nSobrepeso: IMC entre 25 e 29,9");
	 } else if(IMC >= 30 && IMC <= 34.9){
	 	printf("\nObesidade (grau I): IMC entre 30 e 34,9");
	 } else if(IMC >= 35 && IMC <= 39.9){
	 	printf("\nObesidade (grau II): IMC entre 35 e 39,9");
	 } else {
	 	printf("\nObesidade morbida (grau III): IMC igual ou superior a 40");
	 }
	 
	 return 1;
 }
 
 
 int main(){
 	float peso;
	float altura; 
	float IMC;
	
	calculaIMC(peso, altura);
	
	return 0;
	
 }
