#include <stdio.h>
#include <stdlib.h>

	void maiorA(int matrizA2[8][10]) {
		
		int maior, lma, cma, i, j;
		maior=matrizA2[0][0];
		lma=0;
		cma=0;
		
		for (i=0; i<8; i=i+1) {
			for (j=0; j<10; j=j+1) {
				if(matrizA2[i][j] > maior ) {
					maior = matrizA2[i][j];
					lma=i;
					cma=j;
				}
			}
		}
			printf("\n O maior elemento da matriz A: %d e sua posicao [%d][%d]", maior, lma, cma);
			
	}
	
	void menorB(int matrizB2[8][10]) {
		
		int menor, lme, cme, i, j;
		menor=matrizB2[0][0];
		lme=0;
		cme=0;
		
		for (i=0; i<8; i=i+1) {
			for (j=0; j<10; j=j+1) {
				if(matrizB2[i][j] < menor ) {
					menor = matrizB2[i][j];
					lme=i;
					cme=j;
				}
			}
		}
			printf("\n O menor elemento da matriz B: %d e sua posicao [%d][%d]", menor, lme, cme);
			
	}
	
	int main() {
		
		int matrizA[8][10], matrizB[8][10], maior, menor, i, j;
		
		for (i=0; i<8; i=i+1) {
			for (j=0; j<10; j=j+1) {
				
				matrizA[i][j] = 2*i+j;
		
	}
	}
		printf("\n Matriz A:\n");
		for (i=0; i<8; i=i+1) {
			for (j=0; j<10; j=j+1) {
		
		printf(" %d ", matrizA[i][j]);
		} printf("\n");
		}
		
		
		printf("\n Matriz B transposta:\n");
		for (i=0; i<8; i=i+1) {
			for (j=0; j<10; j=j+1) {
			matrizB[i][j]=matrizA[j][i];
		printf(" %d ", matrizB[i][j]);
		} printf("\n");
		}
		
		
		maiorA(matrizA);
		
		menorB(matrizB);
		
		
		
		return 0;
		
		}
