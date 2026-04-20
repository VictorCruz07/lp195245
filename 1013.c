/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 195245
Linguagem   : C
Nome        : Victor Cruz de Farias
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1013
Data        : 10/04/2026
Objetivo    : Exibir o maior valor entre dois valores
Aprendizado : Utilizar scanf 
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b){
    return (a + b + abs(a - b))/2;
}

int main(){
    int a, b, c, resposta;

    scanf("%d %d %d", &a, &b, &c);
    
    resposta = maior(a, maior(b, c));

    printf("%d eh o maior\n", resposta);

    return 0;
}
