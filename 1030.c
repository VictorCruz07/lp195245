/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 22/06/2026
Objetivo    : ver qual soldado sobra por último 
Aprendizado : Usar melhor funções
-------------------------------------------------------------------------- */
#include <stdio.h>

int A(int n, int k) {
    if (n == 1) {
        return 0;
    }
    return (A(n - 1, k) + k) % n;
}

int main() {
    int nc;
    if (scanf("%d", &nc) != 1) return 0;

    for (int i = 1; i <= nc; i++) {
        int n, k;
        scanf("%d %d", &n, &k);

        int sobrevivente = A(n, k) + 1;
        printf("Case %d: %d\n", i, sobrevivente);
    }

    return 0;
}
