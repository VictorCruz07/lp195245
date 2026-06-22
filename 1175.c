/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 22/06/2026
Objetivo    : Ler os elementos do vetor até trocar o 10º com o 11º
Aprendizado : Usar vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int N[20];

    for (int i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }

    for (int i = 0; i < 10; i++) {
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
