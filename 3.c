#include<stdio.h>

int verificar(int num, int cont, int i){
	printf("Insira um numero inteiro para veiricar se este e primo: ");
	scanf("%d", &num);
	
	if(num == 1){
		printf("Este numero nao e primo");
		
		return 0;
	}
	
	for(i = 1; i <= num; i++){
		if(num % i == 0){
			cont++;
	}
	
	}
	
		if(cont == 2){
			printf("\nO numero e primo");
			return 1;
		} else {
			printf("O nmero nao e primo");
			return 0;
		}
		    
	return 1;	    
}


int main(){
	int num;
	int cont = 0;
	int i;
	
	verificar(num, cont,i);
	
	return 0;
	
}
