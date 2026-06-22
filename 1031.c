/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 22/06/2026
Objetivo    : Fazer com que Wellington (região 13) possa continuar funcionando enquanto o resto do país esteja desligado
Aprendizado : Usar o break
-------------------------------------------------------------------------- */
#include <stdio.h>

int desligar(int n, int m) {
    int res = 0;
    for (int i = 2; i <= n; i++) {
        res = (res + m) % i;
    }
    return res;
}

int main(void) {
    int n;

    for (; scanf("%d", &n) == 1 && n != 0; ) {
        int m;
        
        for (m = 1; ; m++) {
            if (desligar(n - 1, m) == 11) {
                break;
            }
        }
        
        printf("%d\n", m);
    }

    return 0;
}
