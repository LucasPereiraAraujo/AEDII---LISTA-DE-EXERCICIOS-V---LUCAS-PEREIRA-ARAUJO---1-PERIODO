#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[50];
    char modelo[50];
    int ano_fabricacao;
} Carro;

int mesmoModelo(Carro carro1, Carro carro2) {
    return strcmp(carro1.modelo, carro2.modelo) == 0;
}

int main() {
    Carro carro1 = {"Toyota", "Corolla", 2010};
    Carro carro2 = {"Honda", "Civic", 2015};
    Carro carro3 = {"Toyota", "Corolla", 2018};

    if (mesmoModelo(carro1, carro2)) {
        printf("O carro1 e o carro2 sao do mesmo modelo.\n");
    } else {
        printf("O carro1 e o carro2 nao sao do mesmo modelo.\n");
    }

    if (mesmoModelo(carro1, carro3)) {
        printf("O carro1 e o carro3 sao do mesmo modelo.\n");
    } else {
        printf("O carro1 e o carro3 nao sao do mesmo modelo.\n");
    }

    return 0;
}

