/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1000
Data        : 23/06/2026
Objetivo    : Confeir um jogo de sudoku
Aprendizado : Conhecimentos de matrizes
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int inst = 1; inst <= t; inst++) {
        int sudoku[9][9];

        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                scanf("%d", &sudoku[i][j]);

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

        printf("Instancia %d\n", inst);
        printf("%s\n\n", valido ? "SIM" : "NAO");
    }

    return 0;
}
