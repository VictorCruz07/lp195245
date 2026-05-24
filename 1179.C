/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1179
Data        : 23/05/2026
Objetivo    : Preenchimento de Vetor IV
Aprendizado : Conhecimentos de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int par[5];
    int impar[5];
    int qtd_par = 0;
    int qtd_impar = 0;
    int valor;

    for (int i = 0; i < 15; i++) {
        if (scanf("%d", &valor) != 1) {
            break;
        }

        if (valor % 2 == 0) {
            par[qtd_par] = valor;
            qtd_par++;
            if (qtd_par == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                qtd_par = 0;
            }
        } else {
            impar[qtd_impar] = valor;
            qtd_impar++;
            if (qtd_impar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                qtd_impar = 0;
            }
        }
    }

    for (int j = 0; j < qtd_impar; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for (int j = 0; j < qtd_par; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
