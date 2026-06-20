/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 26/05/2026
Objetivo    : Organizar camisetas
Aprendizado : Conhecimentos e manipulação de strings
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    char cor[20];
    char tamanho;
} Camiseta;

int comparar(const void *a, const void *b) {
    Camiseta *c1 = (Camiseta *)a;
    Camiseta *c2 = (Camiseta *)b;

    int comp_cor = strcmp(c1->cor, c2->cor);
    if (comp_cor != 0) {
        return comp_cor;
    }

    if (c1->tamanho != c2->tamanho) {
        return c2->tamanho - c1->tamanho; 
    }

    return strcmp(c1->nome, c2->nome);
}

int main() {
    int N;
    int primeiro_caso = 1;

    while (scanf("%d", &N) && N != 0) {
        getchar(); 

        if (!primeiro_caso) {
            printf("\n");
        }
        primeiro_caso = 0;

        Camiseta turmas[N];

        for (int i = 0; i < N; i++) {
            fgets(turmas[i].nome, sizeof(turmas[i].nome), stdin);
            turmas[i].nome[strcspn(turmas[i].nome, "\n")] = '\0';

            scanf("%s %c", turmas[i].cor, &turmas[i].tamanho);
            getchar(); 
        }

        qsort(turmas, N, sizeof(Camiseta), comparar);

        for (int i = 0; i < N; i++) {
            printf("%s %c %s\n", turmas[i].cor, turmas[i].tamanho, turmas[i].nome);
        }
    }

    return 0;
}
