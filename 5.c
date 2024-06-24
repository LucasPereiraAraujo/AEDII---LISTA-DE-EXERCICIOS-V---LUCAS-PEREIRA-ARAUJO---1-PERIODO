#include <stdio.h>

int mdc(int num1, int num2, int temp) {
	
	printf("Insira dois numeros inteiros para calcular o MDC:\n");
    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);

    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int num1, num2;
    int resultado;
    int temp;
    
	resultado = mdc(num1, num2, temp);
    
    printf("O MDC de %d e %d e: %d\n", num1, num2, resultado);

    return 0;
}

