/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 28/04/2026
Objetivo    : usar strings
Aprendizado : comandos de strings
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        char sentenca[51];
        int deslocamento;

        scanf("%s", sentenca);
        scanf("%d", &deslocamento);

        int tamanho = strlen(sentenca);

        for (int j = 0; j < tamanho; j++) {
            char c = sentenca[j];
            int posicao = c - 'A';
            int novaPosicao = posicao - deslocamento;

            if (novaPosicao < 0) {
                novaPosicao += 26;
            }

            printf("%c", (char)(novaPosicao + 'A'));
        }

        printf("\n");
    }

    return 0;
}
