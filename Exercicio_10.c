// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 22/05/2025
/* QUESTAO...........:

Exercício 10: Transposição de Matriz 2x3
Descrição: Ler uma matriz 2x3 de reais, gerar
e mostrar a matriz transposta 3x2.*/

#include <stdio.h>

int main() {
    float matriz[2][3];
    float transposta[3][2];
    int i, j;

    // Ler elementos da matriz 2x3
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Gerar matriz transposta 3x2
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Mostrar matriz original
    printf("\nMatriz original (2x3):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    // Mostrar matriz transposta
    printf("\nMatriz transposta (3x2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.2f ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
