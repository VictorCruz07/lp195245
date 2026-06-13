/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1029
Data        : 13/06/2026
Objetivo    : Fibonacci 
Aprendizado : Básico de recursão
-------------------------------------------------------------------------- */
#include <stdio.h>

int chamadas;

int fibonacci(int n) {
    chamadas++;
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int testes;
    int n, resultado;

    if (scanf("%d", &testes) == 1) {
        while (testes--) {
            scanf("%d", &n);
            chamadas = 0;
            resultado = fibonacci(n);
            printf("fib(%d) = %d calls = %d\n", n, chamadas - 1, resultado);
        }
    }

    return 0;
}
