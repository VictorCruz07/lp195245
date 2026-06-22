/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 22/06/2026
Objetivo    : Dadas as posições dos pães de queijo, determine o tabuleiro do jogo!
Aprendizado : Reforço de matriz
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n, m;

    while (scanf("%d %d", &n, &m) == 2) {
        int mat[100][100];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &mat[i][j]);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    printf("9");
                } else {
                    int paes = 0;

                    if (i > 0 && mat[i - 1][j] == 1) paes++;
                    if (i < n - 1 && mat[i + 1][j] == 1) paes++;
                    if (j > 0 && mat[i][j - 1] == 1) paes++;
                    if (j < m - 1 && mat[i][j + 1] == 1) paes++;

                    printf("%d", paes);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
