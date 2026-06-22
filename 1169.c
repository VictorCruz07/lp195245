
/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 22/06/2026
Objetivo    : Calcular a quantidade de kg de trigo
Aprendizado : Usar recursão para calcular os KG
-------------------------------------------------------------------------- */
#include <stdio.h>

unsigned long long somar_graos(int casas, unsigned long long atual) {
    if (casas == 1) {
        return atual;
    }
    return atual + somar_graos(casas - 1, atual * 2);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    while (n > 0) {
        int x;
        scanf("%d", &x);

        unsigned long long total_graos = somar_graos(x, 1ULL);
        unsigned long long kg = total_graos / 12000;

        printf("%llu kg\n", kg);
        n--;
    }

    return 0;
}
