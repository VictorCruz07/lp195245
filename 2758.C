/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2758
Data        : 11/04/2026
Objetivo    : Manipular números com diferentes casas decimais
Aprendizado : Utilização de %
-------------------------------------------------------------------------- */
int main()
{
	float ps1 , ps2;
    double pd1 , pd2;
	scanf("%f %f %lf %lf",&ps1,&ps2,&pd1,&pd2);
	printf("A = %f, B = %f\n", ps1, ps2);
	printf("C = %lf, D = %lf\n", pd1, pd2);
    printf("A = %.1f, B = %.1f\n", ps1, ps2);
	printf("C = %.1lf, D = %.1lf\n", pd1, pd2);
	printf("A = %.2f, B = %.2f\n", ps1, ps2);
	printf("C = %.2lf, D = %.2lf\n", pd1, pd2);
	printf("A = %.3f, B = %.3f\n", ps1, ps2);
	printf("C = %.3lf, D = %.3lf\n", pd1, pd2);
	printf("A = %.3E, B = %.3E\n", ps1, ps2);
	printf("C = %.3E, D = %.3E\n", pd1, pd2);
	printf("A = %.0f, B = %.0f\n", ps1, ps2);
	printf("C = %.0lf, D = %.0lf\n", pd1, pd2);
	
return 0;

}
