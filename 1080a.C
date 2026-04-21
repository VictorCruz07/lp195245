/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1080
Data        : 21/04/2026
Objetivo    : Mostrar o Maior numero e a posição dele sem uso de array
Aprendizado : usar o IF
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
  int i,maior=0,posicao=0,valor;
  for (i=0; i <= 100; i++){
    scanf ("%d", &valor);
    if (valor>maior) {
    maior = valor;
    posicao = i;
    }
  }
  printf ("%d\n", maior);
  printf ("%d\n", posicao);
 return 0;
}
