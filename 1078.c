/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : tabuada do numero escrito
Aprendizado : Fazer uma tabuada
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int A, B, C;
    scanf ("%d", &A);
    for (B=1; B<=10; B++){
        C = B * A;
    
    printf ("%d x %d = %d\n", B , A , C);
    }
    return 0;
}
