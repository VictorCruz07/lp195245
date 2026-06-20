/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 21/05/2026
Objetivo    : calcular gasto de combustível
Aprendizado : operações básicas
-------------------------------------------------------------------------- */
#include <stdio.h>

float calcularLitros(int tempo, int velocidade) {
    int distancia = velocidade * tempo;
    return (float)distancia / 12;
}

int main() {
    int Vm, T;
    float L;

    scanf("%d", &T);
    scanf("%d", &Vm);

    L = calcularLitros(T, Vm);

    printf("%.3f\n", L);

    return 0;
}
