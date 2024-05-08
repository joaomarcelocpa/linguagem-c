#include <stdio.h>
#include <stdlib.h>
	
	void maiorC (int matrizC2[4][5]) {
		
		int maior, lma, cma, i, j;
		
		maior=matrizC2[0][0];
		lma=0;
		cma=0;
		
		for (i=0; i<4; i=i+1) {
			for (j=0; j<5; j=j+1) {
			
			if (matrizC2[i][j]>maior) {
				maior=matrizC2[i][j];
				lma=i;
				cma=j;
			}
			
			}
		}
			printf("\n O maior elemento da matriz C: %d e sua posicao:[%d][%d]", maior, lma, cma);
		
	}
	
	void menorC (int matrizC2[4][5]) {
		
		int menor, lme, cme, i, j;
		
		menor=matrizC2[0][0];
		lme=0;
		cme=0;
		
		for (i=0; i<4; i=i+1) {
			for (j=0; j<5; j=j+1) {
			
			if (matrizC2[i][j]<menor) {
				menor=matrizC2[i][j];
				lme=i;
				cme=j;
			}
			
			}
		}
			printf("\n O menor elemento da matriz C: %d e sua posicao:[%d][%d]", menor, lme, cme);
		
	}
	
	
	
	int main() {
		
		int matrizA[4][5], matrizB[4][5], matrizC[4][5], matrizD[5][4], i, j;
		
		for (i=0; i<4; i=i+1) {
			for (j=0; j<5; j=j+1) {
				
				matrizA[i][j] = i + j;
			}
		}
		
		for (i=0; i<4; i=i+1) {
			for (j=0; j<5; j=j+1) {
				
				matrizB[i][j] = 3*i - j;
			}
		}
		
			printf("Matriz A:\n");
		for (i=0; i<4; i=i+1) {
			for (j=0; j<5; j=j+1) {
				
				printf(" %d ", matrizA[i][j]);
			}
			printf("\n");
		}
		
		printf("\n Matriz B:\n");
		for (i=0; i<4; i=i+1) {
			for (j=0; j<5; j=j+1) {
				
				printf(" %d ", matrizB[i][j]);
			}
			printf("\n");
		}
		
		
		for (i=0; i<4; i=i+1) {
			for (j=0; j<5; j=j+1) {
				
		matrizC[i][j] = 2 * matrizA[i][j] - 3 * matrizB[i][j];
		
		}
		}
		
		
			printf("\n Matriz C:\n");
		for (i=0; i<4; i=i+1) {
			for (j=0; j<5; j=j+1) {
				printf(" %d ", matrizC[i][j]);
		
		
		} printf("\n");
		}
		
		
		
			printf("\n Matriz D transposta:\n");
		for (i=0; i<5; i=i+1) {
			for (j=0; j<4; j=j+1) { 
			
			matrizD[i][j] = matrizC[j][i];
			printf(" %d ", matrizD[i][j]);
		}
		printf("\n");
		}
		
		maiorC(matrizC);
		menorC(matrizC);
		
		return 0;	
	}
