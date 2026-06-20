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
  int X,Y,Maior,Menor,Soma=0 ;
  scanf("%d %d" , &X , &Y);
  if (X>Y) {
    Maior=X;
    Menor=Y;
    printf ("Maior=%d \nMenor=%d", Maior, Menor);
  }
    else{
        Maior=Y;
        Menor=X;
    printf ("Maior=%d \nMenor=%d\n", Maior, Menor);
    }   
    Soma =Maior+Menor;
    printf ("Soma=%d", Soma);
return 0;
}
