#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
};

void criaOrganiza(int i) {
    struct Livro livros[4] = {
        {"Ate que durou", "Pericles", 2018},
        {"E assim que acaba", "Colleen Hoover", 2017},
        {"Os dois morrem no final", "Adam Silvera", 2017},
        {"1984", "George Orwell", 1949}
    };
    
    struct Livro maisRecente = livros[0];
    for(i = 1; i < 4; i++) {
        if(livros[i].ano > maisRecente.ano) {
            maisRecente = livros[i];
        }
    }
    
    printf("O livro mais recente e: %s\n", maisRecente.titulo);
    printf("Autor: %s\n", maisRecente.autor);
    printf("Ano de Publicacao: %d\n", maisRecente.ano);
}

int main() {
	
	int i;

    criaOrganiza(i);
    
    return 0;
}

