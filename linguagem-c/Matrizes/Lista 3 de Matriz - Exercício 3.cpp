#include <stdio.h>
#include <stdlib.h>

	void soma (int matrizA2[2][3], int matrizB2[2][3]) {
		
		int somaij=0;
		
		somaij = matrizA2[0][0] + matrizA2[0][1] + matrizA2[0][2] + matrizB2[0][2] + matrizB2[1][2];

		printf("\nA soma dos elementos da primeira linha de A com a ultima coluna de B = %d", somaij);
	}
	
	
	int main() {
		
		int matrizA[2][3], matrizB[2][3], matrizC[2][3],lma=0, cma=0, elemento_acima_damedia;
		int media_b=0;
		
		printf("Entre com os elementos da matriz A:\n");
		for (int i=0; i<2; i=i+1) {
			for (int j=0; j<3; j=j+1) {
				printf("Elemento [%d][%d]", i, j);
				scanf("%d", &matrizA[i][j]);
				
			}
		}
		
		printf("\n Entre com os elementos da matriz B:\n");
		for (int i=0; i<2; i=i+1) {
			for (int j=0; j<3; j=j+1) {
				printf("Elemento [%d][%d]", i, j);
				scanf("%d", &matrizB[i][j]);
				
			}
		}
		
		printf("\n Matriz A:\n");
		for (int i=0; i<2; i=i+1) {
			for (int j=0; j<3; j=j+1) {
		printf(" %d ", matrizA[i][j]);
	} 		printf("\n");
	}
	
		printf("\n Matriz B: \n");
		for (int i=0; i<2; i=i+1) {
			for (int j=0; j<3; j=j+1) {
			printf(" %d ", matrizB[i][j]);
			media_b=media_b+matrizB[i][j];
		
	} 	printf("\n");
	}
	
	
	soma(matrizA, matrizB);
	
	media_b=media_b/6;
	printf("\n\n A media dos elementos da matriz B = %d\n", media_b);
	
	for (int i=0; i<2; i=i+1) {
			for (int j=0; j<3; j=j+1) {
			lma=i;
			cma=j;
			if (matrizB[i][j] > media_b) {
				printf("\n Elemento acima da media: %d e sua posicao [%d][%d]\n ", matrizB[i][j], lma, cma);
			}	
	}
	}
	
	for (int i=0; i<2; i=i+1) {
		for (int j=0; j<3; j=j+1) {
	
	matrizC[i][j] = matrizA[i][j] + 2 * matrizB[i][j];
	
	}
	}
	
		printf("\n\n Matriz C: \n");
	for (int i=0; i<2; i=i+1) {
		for (int j=0; j<3; j=j+1) {
	
	printf(" %d ", matrizC[i][j]);
	} printf("\n");
	}
	
	
	printf("\n Elementos da segunda linha de C: \n");
	

	for (int j=0; j<3; j=j+1) {
		
	printf(" %d ", matrizC[1][j]);
	
	}
		return 0;	
	}
