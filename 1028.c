/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 10/04/2026
Objetivo    : Descobrir o tamanho máximo da pilha de figurinhas que poderia ser trocada entre dois jogadores
Aprendizado : Recursividade
-------------------------------------------------------------------------- */
#include <stdio.h>

int mdc(int a, int b) {
    
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

int main() {
    int n;
    int f1, f2;

    if (scanf("%d", &n) != 1) return 0;

    while (n--) {
        scanf("%d %d", &f1, &f2);
        printf("%d\n", mdc(f1, f2));
    }

    return 0;
}
