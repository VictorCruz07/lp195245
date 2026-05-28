/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1168
Data        : 22/05/2026
Objetivo    : Contagem de Leds
Aprendizado : Usar recursos de strings e funções 
-------------------------------------------------------------------------- */
#include <stdio.h>

int obter_leds(char digito) {
    switch (digito) {
        case '1': 
            return 2;
        case '7': 
            return 3;
        case '4': 
            return 4;
        case '2': 
        case '3': 
        case '5': 
            return 5;
        case '6': 
        case '9': 
        case '0': 
            return 6;
        case '8': 
            return 7;
        default: 
            return 0;
    }
}

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 0; i < n; i++) {
        char numero[102];
        int total_leds = 0;
        
        scanf("%s", numero);
        
        int j = 0;
        while (numero[j] != '\0') {
            total_leds += obter_leds(numero[j]);
            j++;
        }
        
        printf("%d leds\n", total_leds);
    }
    
    return 0;
}
