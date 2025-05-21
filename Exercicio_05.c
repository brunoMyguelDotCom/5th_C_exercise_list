// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 20/05/2025
/* QUESTAO...........:

Exercício 5: Soma de Números Maiores que a Média
Descrição: Crie um algoritmo que leia um vetor de 10 números reais e imprima a soma
dos valores que são maiores que a média do vetor.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float numeros[10];
    float somaValores = 0.0, somaMaioresQueMedia = 0.0, mediaValores = 0.0;

    for (size_t i = 0; i < 10; i++)
    {
        printf("Digite %dº valor: ", i + 1);
        scanf("%f", &numeros[i]);

        somaValores += numeros[i];
    }
    mediaValores = somaValores / 10;

    printf("Media do vetor: %.2f\n", mediaValores);

    for (size_t j = 0; j < 10; j++)
    {
        if (numeros[j] > mediaValores)
        {
            somaMaioresQueMedia = somaMaioresQueMedia + numeros[j];
            printf("%dº valor maior que a media: %.2f\n", j, numeros[j]);
        }
    }

    printf("Soma dos valores maiores que a media: %.2f\n", somaMaioresQueMedia);

    return 0;
}
