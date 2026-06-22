/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 22/06/2026
Objetivo    : computar o maior número na Sequência de Granizo
Aprendizado : Usando recursão
-------------------------------------------------------------------------- */
#include <stdio.h>

int encontrarmaximo(int atual, int maximo_atual) {
    if (atual == 1) {
        return maximo_atual;
    }

    int proximo;
    if (atual % 2 == 0) {
        proximo = atual / 2;
    } else {
        proximo = atual * 3 + 1;
    }

    if (proximo > maximo_atual) {
        maximo_atual = proximo;
    }

    return encontrarmaximo(proximo, maximo_atual);
}

int main() {
    int h;

    while (scanf("%d", &h) == 1 && h != 0) {
        
        int resultado = encontrarmaximo(h, h);
        printf("%d\n", resultado);
    }

    return 0;
}
