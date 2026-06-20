/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/2757
Data        : 11/04/2026
Objetivo    : Exibir numeros com 10 casas ou zeros a direita
Aprendizado : Utilizar preenchimento de casas
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int A , B , C;
    scanf ("%d %d %d" ,&A,&B,&C);
        if ((A >= -10000 && A <= 10000) && (B >= 0 && B <= 99) && (C >= 0 && C <= 999)) 
            printf ("A = %d, B = %d, C = %d\n" ,  A  , B  , C);
            printf ("A = %10d, B = %10d, C = %10d\n" ,  A  , B  , C);
            printf ("A = %010d, B = %010d, C = %010d\n" ,  A  , B  , C);
            printf ("A = %-10d, B = %-10d, C = %-10d\n" ,  A  , B  , C);
        
        
return 0; 
   
}
