// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 22/05/2025
/* QUESTAO...........:

Exercício 6: Conversão de Temperaturas
Descrição: Crie um algoritmo que leia 25 temperaturas em graus Celsius e armazene-as
em um vetor A. Em seguida, construa um vetor B, onde cada elemento é a conversão da
temperatura correspondente em graus Fahrenheit. Ao ﬁnal, apresente os vetores A e B.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float temp, celcius[25], fahrenheit[25];

    for (size_t i = 0; i < 25; i++)
    {
        printf("Digite o valor da %dº temperatura em Celcius: ", i + 1);
        scanf("%f", &temp);
        celcius[i] = temp;
        fahrenheit[i] = temp * 1.8 + 32;
    }

    printf("\n* TEMPERATURAS EM CELCIUS:\n");
    for (size_t j = 0; j < 25; j++)
    {
        printf("Valor da %dº temperatura em Celcius: %.2f\n", j, celcius[j]);
    }

    printf("\n* TEMPERATURAS EM FAHRENHEIT:\n");
    for (size_t k = 0; k < 25; k++)
    {
        printf("Valor da %dº temperatura em Fahrenheit: %.2f\n", k, fahrenheit[k]);
    }

    return 0;
}
