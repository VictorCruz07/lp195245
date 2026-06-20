/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : Criptografar 
Aprendizado : Manipulações de Strings
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char linha[1101], resultado[1101];

    if (scanf("%d ", &N) != 1) return 0;

    while (N--) {
        if (fgets(linha, 1101, stdin) == NULL) break;

        int tam = (int)strlen(linha);
        if (tam > 0 && linha[tam - 1] == '\n') {
            linha[--tam] = '\0';
        }

        for (int i = 0; i < tam; i++) {
            char c = linha[i];
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                c += 3;
            }
            resultado[tam - 1 - i] = c;
        }
        resultado[tam] = '\0';

        int metade = tam / 2;
        for (int i = metade; i < tam; i++) {
            resultado[i] -= 1;
        }

        printf("%s\n", resultado);
    }

    return 0;
}
