// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 20/05/2025
/* QUESTAO...........:

Exercício 4: Encontrar o Menor e o Maior Número
Descrição: Crie um algoritmo que leia um vetor de 10 números inteiros e imprima o
menor e o maior número do vetor.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numeros[10];
    int numMaior = 0;
    int numMenor = 9999999999;

    for (size_t i = 0; i < 10; i++)
    {
        printf("Digite o º%d numero: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] > numMaior)
        {
            numMaior = numeros[i];
        }
        else if (numeros[i] < numMenor)
        {
            numMenor = numeros[i];
        }
    }

    printf("Numero maior: %d\n", numMaior);

    printf("____________________\n");

    printf("Numero menor: %d\n", numMenor);

    return 0;
}
