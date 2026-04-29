/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Victor Cruz de Farias
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 1234
Data        : 28/04/2026
Objetivo    : usar strings
Aprendizado : inicio da linguagem C
-------------------------------------------------------------------------- */
using System;

class URI {
    static void Main(string[] args) {
        string linha;

        while ((linha = Console.ReadLine()) != null) {
            string resultado = "";
            bool deveSerMaiuscula = true;

            for (int i = 0; i < linha.Length; i++) {
                char c = linha[i];

                if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                    if (deveSerMaiuscula) {
                        resultado += char.ToUpper(c);
                    } else {
                        resultado += char.ToLower(c);
                    }
                    deveSerMaiuscula = !deveSerMaiuscula;
                } else {
                    resultado += c;
                }
            }

            Console.WriteLine(resultado);
        }
    }
}
