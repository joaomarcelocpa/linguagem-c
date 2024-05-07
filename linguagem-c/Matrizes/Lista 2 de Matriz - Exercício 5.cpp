#include <stdio.h>

int main() {
    int matriz[4][4], soma_coluna = 0, soma_linha = 0;
    int i, j;

    printf("Digite os valores da matriz 4x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        	printf("Elemento [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma_linha = soma_linha + matriz[i][j];
        }
        matriz[i][3] = soma_linha;
    }


    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            soma_coluna = soma_coluna + matriz[i][j];
        }
        matriz[3][j] = soma_coluna;
    }


    printf("\nMatriz resultante:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
