#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* criarNo(int data) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    if (novoNo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    novoNo->data = data;
    novoNo->next = NULL;
    return novoNo;
}

void inserirNoFinal(Node** head, int data) {
    Node* novoNo = criarNo(data);
    if (*head == NULL) {
        *head = novoNo;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = novoNo;
    }
}


void imprimirLista(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    inserirNoFinal(&head, 10);
    inserirNoFinal(&head, 20);
    inserirNoFinal(&head, 30);
    inserirNoFinal(&head, 40);

    printf("Lista encadeada: ");
    imprimirLista(head);

    return 0;
}

