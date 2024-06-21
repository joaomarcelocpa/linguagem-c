#include <stdio.h>

	int main() {
		
		int i, j, matrizA[3][2], matrizB[3][2], matrizC[3][2];
		int soma_linhaA=0, soma_colunaB=0, soma_linhaC=0, soma_total=0;
		
		// ENTRADA DE DADOS DA MATRIZ A
			printf("Entre com os elementos da matriz A: \n");
		for (i=0; i<3; i=i+1) {
			for (j=0; j<2; j=j+1) {
				
				printf("Elemento [%d][%d]", i, j);
				scanf("%d", &matrizA[i][j]);
				
			} 
		} 
		
		// ENTRADA DE DADOS DA MATRIZ B
			printf("\n Entre com os elementos da matriz B:\n");
		for (i=0; i<3; i=i+1) {
			for (j=0; j<2; j=j+1) {
				
				printf("Elemento [%d][%d]", i, j);
				scanf("%d", &matrizB[i][j]);
				
			} 
		}
		
		// MOSTRA A MATRIZ A
			printf("\n Matriz A:\n");
		for (i=0; i<3; i=i+1) {
			for (j=0; j<2; j=j+1) {
				
				printf(" %d ", matrizA[i][j]);
				
			} printf("\n");
		}
		
		// MOSTRA A MATRIZ B
			printf("\n Matriz B:\n");
		for (i=0; i<3; i=i+1) {
			for (j=0; j<2; j=j+1) {
				
				printf(" %d ", matrizB[i][j]);
				
			} printf("\n");
		}
		
		// CALCULA MATRIZ C
		for (i=0; i<3; i=i+1) {
			for (j=0; j<2; j=j+1) {
				
			matrizC[i][j] = 3 * matrizA[i][j] - matrizB[i][j];
			
			}
			}
		
		// MOSTRA A MATRIZ C TRANSPOSTA
			printf("\n Matriz C transposta:\n");
		for (j=0; j<3; j=j+1) {
			for (i=0; i<2; i=i+1) {
				
			printf(" %d ", matrizC[i][j]);
				
			}printf("\n");
		}
			
		// CALCULA A SOMA DE LINHAS E COLUNAS PEDIDAS	
		for (i=0; i<3; i=i+1) {
			for (j=0; j<2; j=j+1) {
				
			soma_linhaA=soma_linhaA+matrizA[2][j];
			soma_colunaB=soma_colunaB+matrizB[i][1];
			soma_linhaC=soma_linhaC+matrizC[0][j];
				
		}
		}
		
		soma_total=soma_linhaA+soma_colunaB+soma_linhaC;
		
		// MOSTRA O RESULTADO DA SOMA
		
		printf("\n A soma dos elementos = %d", soma_total);
			
			
    return 0;
}
