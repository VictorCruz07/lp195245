/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 22/06/2026
Objetivo    : encontrar o menor elemento do vetor e a sua posição
Aprendizado : inicio da linguagem C
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    int menor = x[0];
    int posicao = 0;

    for (int i = 1; i < n; i++) {
        if (x[i] < menor) {
            menor = x[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
