#include <stdio.h>
		
	int Maior (int matrizA[6][6]) {
		
		int maior = matrizA[0][0];
		
		for (int i=0; i<6; i=i+1) {
			for (int j=0; j<6; j=j+1) {
				
			if (matrizA[i][j] > maior) {
				maior = matrizA[i][j];
			
		}}}
		
		return maior;
	}
	
	int Menor (int matrizA[6][6]){
		
		int menor=matrizA[0][0];
		
		for (int i=0; i<6; i=i+1) {
			for (int j=0; j<6; j=j+1) {
				
			if (matrizA[i][j] < menor) {
			menor = matrizA[i][j];
			
		}}} return menor;
		}
	
	
	void Media (int mediaA2, int matrizA[6][6]){
	
		mediaA2 = mediaA2/36;
		
		printf("\n\nA media dos elementos da matriz A: %d\n\n", mediaA2);
		
			printf("Elementos acima da media:\n");
		for (int i=0; i<6; i=i+1) {
			for (int j=0; j<6; j=j+1) {
				
				if (mediaA2 < matrizA[i][j]) {
					printf(" %d ", matrizA[i][j]);
				}
				
			}
		}
	}
	
	void MatrizTranspostaA (int matrizA[6][6]) {
			
			printf("\n\nMatriz A transposta:\n");
		for (int j=0; j<6; j=j+1) {
			for (int i=0; i<6; i=i+1) {
				
				printf(" %d ", matrizA[i][j]);
				
			} printf("\n");
		}		
	}
	
	
	int main() {
		
		int matrizA[6][6], i, j;
		int mediaA=0;
		int maiorA, menorA;
		
		for (i=0; i<6; i=i+1) {
			for (j=0; j<6; j=j+1) {
				
				matrizA[i][j] = 5 * i - 2 * j;	
			}
		}
		
			printf("\nMatriz A:\n");
		for (i=0; i<6; i=i+1) {
			for (j=0; j<6; j=j+1) {
				
				printf(" %d ", matrizA[i][j]);
				mediaA=mediaA+matrizA[i][j];
				
			} 
			printf("\n");
		}
		
		
		printf("\nDiagonal principal de A:\n");
		
		for (i=0; i<6; i=i+1) {
				
			printf(" %d ", matrizA[i][i]);
				
		}
		
		
		 maiorA = Maior(matrizA);
			printf("\n\nO maior elemento da matriz A: %d e sua posicao: [%d][%d]", maiorA, 1, j);
			
		menorA = Menor(matrizA);
			printf("\n\nO menor elemento da matriz A: %d e sua posicao: [%d][%d]", menorA, i, 1);
		
		
		Media (mediaA, matrizA); 
		
		MatrizTranspostaA (matrizA);
		
    return 0;
}
