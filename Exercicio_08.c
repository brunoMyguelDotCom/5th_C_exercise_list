// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 22/05/2025
/* QUESTAO...........:

Exercício 8: Classificação de Notas
Descrição: Ler 10 notas de alunos, calcular a média,
e contar quantas estão acima, na média e abaixo da média.*/

#include <stdio.h>

int main() {
    float notas[10];
    int i, acima = 0, naMedia = 0, abaixo = 0;
    float soma = 0, media;

    for (i = 0; i < 10; i++) {
        printf("Digite a nota do %dº aluno: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10;

    for (i = 0; i < 10; i++) {
        if (notas[i] > media)
            acima++;
        else if (notas[i] == media)
            naMedia++;
        else
            abaixo++;
    }

    printf("\nMedia das notas: %.2f\n", media);
    printf("Notas acima da media: %d\n", acima);
    printf("Notas na media: %d\n", naMedia);
    printf("Notas abaixo da media: %d\n", abaixo);

    return 0;
}
