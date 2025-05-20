// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 18 /05/2025
/* QUESTAO...........:

Exercício 3: Média Aritmética de Números Positivos e Negativos
Descrição: Crie um algoritmo que leia um vetor de 20 números reais e imprima a média
aritmética dos valores positivos e a média aritmética dos valores negativos.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float numeros[20];
    float somaNumerosPositivos, somaNumerosNegativos = 0;
    int quantidadePositivo, quantidadeNegativo = 0;
    int i = 0;

    for (i = 0; i < 20; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%f", &numeros[i]);

        if (numeros[i] > 0)
        {
            quantidadePositivo++;
            somaNumerosPositivos += numeros[i];
        }
        else if (numeros[i] < 0)
        {
            quantidadeNegativo++;
            somaNumerosNegativos += numeros[i];
        }
    }

    printf("_________\nSoma dos positivos: %.2f\n", somaNumerosPositivos);
    printf("_________\nSoma dos negativos: %.2f\n", somaNumerosNegativos);

    printf("_________\nMedia dos numeros positivos: %.2f\n", somaNumerosPositivos / quantidadePositivo);
    printf("_________\nMedia dos numeros negativos: %.2f\n", somaNumerosNegativos / quantidadeNegativo);


    return 0;
}
