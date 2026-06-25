#include <stdio.h>

int main() {
    int sudoku[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    int bloqueado[9][9] = {0};
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            if (sudoku[i][j] != 0) bloqueado[i][j] = 1;

    int l, c, val;

    while (1) {
        printf("\n    1 2 3   4 5 6   7 8 9\n");
        for (int i = 0; i < 9; i++) {
            if (i % 3 == 0) printf("  -------------------------\n");
            printf("%d | ", i + 1);
            for (int j = 0; j < 9; j++) {
                if (j % 3 == 0 && j != 0) printf("| ");
                printf("%d ", sudoku[i][j]);
            }
            printf("|\n");
        }
        printf("  -------------------------\n");

        printf("Jogada (Linha Coluna Valor): ");
        scanf("%d %d %d", &l, &c, &val);

        if (l == 0 && c == 0 && val == 0) break;
        l--; c--; 

        if (l >= 0 && l < 9 && c >= 0 && c < 9) {
            if (bloqueado[l][c] == 1) {
                printf("ERRO: Casa bloqueada!\n");
            } else if (val >= 1 && val <= 9) {
                sudoku[l][c] = val;
            }
        }
    }

    int valido = 1;

    for (int i = 0; i < 9 && valido; i++)
        for (int j = 0; j < 9 && valido; j++)
            if (sudoku[i][j] < 1 || sudoku[i][j] > 9)
                valido = 0;

    for (int i = 0; i < 9 && valido; i++)
        for (int j = 0; j < 9 && valido; j++)
            for (int C = j + 1; C < 9 && valido; C++)
                if (sudoku[i][j] == sudoku[i][C])
                    valido = 0;

    for (int j = 0; j < 9 && valido; j++)
        for (int i = 0; i < 9 && valido; i++)
            for (int C = i + 1; C < 9 && valido; C++)
                if (sudoku[i][j] == sudoku[C][j])
                    valido = 0;

    for (int bi = 0; bi < 9 && valido; bi += 3)
        for (int bj = 0; bj < 9 && valido; bj += 3)
            for (int i = bi; i < bi + 3 && valido; i++)
                for (int j = bj; j < bj + 3 && valido; j++)
                    for (int k = i; k < bi + 3 && valido; k++)
                        for (int l = (k == i ? j + 1 : bj); l < bj + 3 && valido; l++)
                            if (sudoku[i][j] == sudoku[k][l])
                                valido = 0;

    printf("\n%s\n", valido ? "SIM" : "NAO");

    return 0;
}
