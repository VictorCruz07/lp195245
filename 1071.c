/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 16/04/2026
Objetivo    : Mostrar a soma entre 2 valores 
Aprendizado : Usar repetições 
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int X, Y, Maior, Menor, Soma = 0;
    
    if (scanf("%d %d", &X, &Y) != 2) return 0;
    
    if (X > Y) {
        Maior = X;
        Menor = Y;
    } else {
        Maior = Y;
        Menor = X;
    }   
    
    for (int i = Menor + 1; i < Maior; i++) {
        if (i % 2 != 0) {
            Soma += i;
        }
    }
    
    printf("%d\n", Soma);
    
    return 0;
}
