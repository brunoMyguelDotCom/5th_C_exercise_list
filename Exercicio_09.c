// AUTOR..............: BRUNO MYGUEL MARCAL
// DATA...............: 22/05/2025
/* QUESTAO...........:

Exercício 9: Soma das Diagonais de Matriz 4x4
Descrição: Ler uma matriz 4x4 e calcular a soma da
diagonal principal e secundária.*/

#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int somaPrincipal = 0, somaSecundaria = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j)
                somaPrincipal += matriz[i][j];
            if (i + j == 3)
                somaSecundaria += matriz[i][j];
        }
    }

    printf("\nSoma da diagonal principal: %d\n", somaPrincipal);
    printf("Soma da diagonal secundaria: %d\n", somaSecundaria);

    return 0;
}
