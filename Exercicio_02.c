// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 18 /05/2025
/* QUESTAO...........:

Exercício 2: Quadrado dos Elementos de um Vetor
Descrição: Crie um algoritmo que leia 15 elementos de um vetor A e construa um vetor
B, onde cada elemento de B é o quadrado do elemento correspondente em A. Ao final,
apresente os vetores A e B.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // MUDAR VALOR DE INDEX
    int numerosIniciais[15];
    int numerosAoQuadrado[15];
    int i = 0;

    for (i = 0; i < 15; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numerosIniciais[i]);

        numerosAoQuadrado[i] = numerosIniciais[i] * numerosIniciais[i];
    }
    printf("\n__________________\n\n\n");

    for (i = 0; i < 15; i++)
    {
        printf("%dº VALOR INICIAL: %d\n", i + 1, numerosIniciais[i]);
    }

    printf("\n\n--------------- NUMEROS AO QUADRADO ---------------\n\n\n");

    for (i = 0; i < 15; i++)
    {
        printf("%dº VALOR AO QUADRADO: %d\n", i + 1, numerosAoQuadrado[i]);
    }

    return 0;
}
