/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1080
Data        : 21/04/2026
Objetivo    : Mostrar o Maior numero e a posição dele com o uso de array
Aprendizado : usar o array
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int i, maior = 0, posicao = 0;
    int V[100]; 

    for (i = 0; i < 100; i++) {
        scanf("%d", &V[i]); 
    }

    for (i = 0; i < 100; i++) {
        if (V[i] > maior) {
            maior = V[i];
            posicao = i + 1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}
