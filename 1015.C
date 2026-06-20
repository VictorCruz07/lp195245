/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Exercício   : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 14/05/2026
Objetivo    : Calcular a distancia entre dois ponts em um plano cartesiano XY
Aprendizado : Usar raiz quadrada e elevar um valor ao quadrado com uma nova biblioteca 
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, distancia, base1, base2, A, B;
    scanf ("%lf %lf %lf %lf", &x1 , &y1 , &x2 , &y2);
    base1 = x2 - x1;
    base2 = y2 - y1;
    A = pow(base1 , 2.0);
    B = pow(base2 , 2.0);
    distancia = sqrt(A + B);
    printf ("%.4lf\n", distancia);
    
    return 0;
}
    
