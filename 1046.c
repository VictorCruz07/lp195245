/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 21/05/2026
Objetivo    : Calcular o tempo de jogo
Aprendizado : Usar funções para calcular o tempo de jogo 
-------------------------------------------------------------------------- */
#include <stdio.h>
int calcular_duracao(int inicio, int fim) {
    if (inicio == fim) {
        return 24;
    } else {
        return ((fim - inicio) + 24) % 24;
    }
}

int main()

{
    int inicio, fim, D;
    
    scanf("%d %d", &inicio, &fim);

    D = calcular_duracao(inicio, fim);

    printf("O JOGO DUROU %d HORA(S)\n", D);
    
    return 0;
}
