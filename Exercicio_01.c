// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 18 /05/2025
/* QUESTAO...........:

Exercício 1: Imprimir Números em Ordem Inversa
Descrição: Crie um algoritmo que leia 10 números inteiros em um vetor e, em seguida,
imprima esses números na tela na ordem inversa.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nums[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("--------------- NUMEROS IMPESSOS DE MANEIRA INVERSA AO INPUT ---------------\n");

    for (i = 9; i >= 0; i--)
    {
        printf("%dº numero: %d\n", i + 1, nums[i]);
    }

    return 0;
}
