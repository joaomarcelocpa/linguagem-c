#include <stdio.h>

int main() {
	
	int matrizA[3][5], matrizB[3][5], matrizC[3][5], maiorA, maiorB, menorC;
	int linhaMaiorA = 0, colunaMaiorA = 0, linhaMaiorB = 0, colunaMaiorB = 0, linhaMenorC = 0, colunaMenorC = 0;
	
	// GERANDO MATRIZES A e B
	
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<5; j=j+1) {
			
			matrizA[i][j]= 3 * i - j;
			
		}
	}
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<5; j=j+1) {
			
			matrizB[i][j]= (2 * i) + (3 * j);
			
		}
	}
	
	// IMPRIMINDO MATRIZ A
		printf("Matriz A:\n");
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<5; j=j+1) {
			
		printf(" %d ", matrizA[i][j]);	
			
		}
		printf("\n");
	}
	
	// IMPRIMINDO MATRIZ B
		printf("\nMatriz B:\n");
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<5; j=j+1) {
			
		printf(" %d ", matrizB[i][j]);
			
		}
		printf("\n");
	}
	
	// GERANDO MATRIZ C
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<5; j=j+1) {
			
			matrizC[i][j] = 2 * matrizA[i][j] + matrizB[i][j];
			
		}
	}
	
	
	// MAIORES E MENOR 
		maiorA=matrizA[0][0];
		maiorB=matrizB[0][0];
		menorC=matrizC[0][0];
		
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<5; j=j+1) {
			
			if (matrizA[i][j] >maiorA) {
				maiorA=matrizA[i][j];
				linhaMaiorA = i;
                colunaMaiorA = j;
			}
			if (matrizB[i][j]>maiorB){
				maiorB=matrizB[i][j];
				linhaMaiorB = i;
                colunaMaiorB = j;
			}
			if (matrizC[i][j]<menorC) {
				menorC=matrizC[i][j];
				linhaMenorC = i;
                colunaMenorC = j;
			}
			
		}
	}
		printf("\n O maior elemento da matriz A: %d e sua posicao: [%d][%d]", maiorA, linhaMaiorA, colunaMaiorA);
		printf("\n O maior elemento da matriz B: %d e sua posicao: [%d][%d]", maiorB, linhaMaiorB, colunaMaiorB);
		printf("\n O menor elemento da matriz C: %d e sua posicao: [%d][%d]", menorC, linhaMenorC, colunaMenorC);
	
	
	
	
	// MATRIZ TRANSPOSTA DE C
		printf("\n\n Matriz C transposta:\n");
	for (int j=0; j<5; j=j+1) {
		for (int i=0; i<3; i=i+1) {
			
			printf(" %d ", matrizC[i][j]);
		}
		printf("\n");
	}
		
return 0;
}
