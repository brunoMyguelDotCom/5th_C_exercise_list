// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 22/05/2025
/* QUESTAO...........:

Exercício 7: Inverter um Vetor
Descrição: Crie um algoritmo que leia um vetor de 8 números reais e imprima os
números na ordem inversa.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float numerosReais[8];
    int i;

    for (i = 0; i < 8; i++)
    {
        printf("Digite o valor do %dº numero: ", i + 1);
        scanf("%f", &numerosReais[i]);
    }

    printf("Vetor invertido: \n");

    for (i = 8; i > 0; i--)
    {
        printf("%dº numero da lista: %.2f\n", i, numerosReais[i - 1]);
    }

    return 0;
}
