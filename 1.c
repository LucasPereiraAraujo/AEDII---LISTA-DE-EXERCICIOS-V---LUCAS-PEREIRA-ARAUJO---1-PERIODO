#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double calcularMedia(int array[], int tamanho, int i) {
    int soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return (double)soma / tamanho;
}

int main() {
    int tamanho;
    int i;

    srand(time(NULL));

    printf("Digite a quantidade de elementos do array: ");
    scanf("%d", &tamanho);

    int array[tamanho];

    printf("Valores gerados para o array:\n");
    for (i = 0; i < tamanho; i++) {
        array[i] = rand() % 101;
        printf("%d ", array[i]);
    }
    printf("\n");

    double media = calcularMedia(array, tamanho, i);

    printf("A média dos valores do array e: %.2f\n", media);

    return 0;
}

