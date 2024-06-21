#include <stdio.h>

void gerar_multiplos(int numero, int multiplos[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        multiplos[i] = numero * (i + 1);
    }
}

int main() {
    int tamanho_vetor=10;


    int vetor[tamanho_vetor];
    int multiplos[10];

    // Leitura do vetor de números diferentes
    printf("Digite %d numeros diferentes:\n\n", tamanho_vetor);
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Geração e exibição dos múltiplos
    for (int i = 0; i < tamanho_vetor; i++) {
    	
        gerar_multiplos(vetor[i], multiplos, 10);
        
        printf("Os primeiros 10 multiplos de %d:\n", vetor[i]);
        
        for (int j = 0; j < 10; j++) {
            printf("%d ", multiplos[j]);
        }
        printf("\n");
    }

    return 0;
}

