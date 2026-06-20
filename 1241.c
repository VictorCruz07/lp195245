/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 05/05/2026
Objetivo    : Ver se encaixa
Aprendizado : Utilizar e comparar strings
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    char a[1001], b[1001];

    if (scanf("%d", &n) != 1) return 0;

    while (n--) {
        scanf("%s %s", a, b);

        int lenA = strlen(a);
        int lenB = strlen(b);

        if (lenB > lenA) {
            printf("nao encaixa\n");
        } else {
            int encaixa = 1;

            for (i = 0; i < lenB; i++) {
                if (a[lenA - 1 - i] != b[lenB - 1 - i]) {
                    encaixa = 0;
                    break;
                }
            }

            if (encaixa == 1) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }

    return 0;
}
