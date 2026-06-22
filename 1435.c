/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 22/06/2026
Objetivo    : Construir uma matriz de acordo com a entrada
Aprendizado : Matrizes
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;

    for (int caso = 0; caso < 100; caso++) {
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int valor = 1;

                for (int camada = 1; camada <= n; camada++) {
                    if (i >= camada - 1 && i <= n - camada && j >= camada - 1 && j <= n - camada) {
                        valor = camada;
                    }
                }

                if (j == 0) {
                    printf("%3d", valor);
                } else {
                    printf(" %3d", valor);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
