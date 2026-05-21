/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1017
Data        : 21/05/2026
Objetivo    : calcular gasto de combustível
Aprendizado : operações básicas
-------------------------------------------------------------------------- */
#include <stdio.h>
int main(){
    int Vm, T, D;
    float L;
    scanf("%d", &T);
    scanf("%d", &Vm);
    D=Vm*T;
    L=(float)D/12;
    printf("%.3f\n", L);
    return 0;
}
