#include <stdio.h>

int main() {
	
	int matrizA[3][3], matrizB[3][3], maior, menor;
	float mediaA=0, mediaB=0;
	
	// ENTRADA DE DADOS DA MATRIZ A e CALCULO DA MATRIZ B
	
		printf("Entre com os elementos da matriz A:\n");
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<3; j=j+1) {
			
			printf("[%d][%d]", i, j);
			scanf("%d", &matrizA[i][j]);
			
		matrizB[i][j] = 2 * matrizA[i][j];
        mediaA += matrizA[i][j]; 
        mediaB += matrizB[i][j]; 
		}	
	}
	
	// ACHANDO AS DIAGONAIS PRINCIPAIS 

	printf("\n Diagonal principal de A: \n");
	for (int i=0; i<3; i=i+1) {
		
			printf("\n%d ", matrizA[i][i]);

	}
	
	printf("\n Diagonal principal de B: \n");
	for (int i=0; i<3; i=i+1) {
		
		printf("\n%d ", matrizB[i][i]);
	}
	
	// ENCONTRANDO O MAIOR E O MENOR
	maior=matrizA[0][0];
	menor=matrizB[0][0];
	
	
		for (int i=0; i<3; i=i+1) {
			for (int j=0; j<3; j=j+1) {
				
		if (matrizA[i][j]>maior) {
			maior=matrizA[i][j];
		}
		
		if (matrizB[i][j]<menor) {
			menor=matrizB[i][j];
		}	
		}
		}
			int i, j; 
			printf("\n\n O maior elemento da matriz A: %d " , maior);
			printf("\n\n O menor elemento da matriz B: %d ", menor);
	
	
	// CALCULANDO AS MÉDIAS
	
	mediaA=mediaA/9;
	printf("\n\n A media dos elementos da matriz A: %2.f", mediaA);
	
	mediaB=mediaB/9;
	printf("\n\n A media dos elementos da matriz B: %2.f", mediaB);
	
	
return 0;
}
