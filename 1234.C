/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1234
Data        : 28/04/2026
Objetivo    : usar strings
Aprendizado : comandos básicos de strings
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <ctype.h>  
#include <stdbool.h>

int main() {
    char linha[1001];
    while (fgets(linha, 1001, stdin) != NULL) {
        bool deveSerMaiuscula = true;

        for (int i = 0; linha[i] != '\0'; i++) {
            if ((linha[i] >= 'a' && linha[i] <= 'z') || (linha[i] >= 'A' && linha[i] <= 'Z')) {
                if (deveSerMaiuscula) {
                    printf("%c", toupper(linha[i]));
                } else {
                    printf("%c", tolower(linha[i]));
                }
                deveSerMaiuscula = !deveSerMaiuscula;
            } else {
                printf("%c", linha[i]);
            }
        }
    }

    return 0;
}
