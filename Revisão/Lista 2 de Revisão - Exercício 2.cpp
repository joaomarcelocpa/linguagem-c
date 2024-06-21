#include <stdio.h>
	
	int main() {
		
		int matrizA[15][15], matrizB[10][30], i, j, maior, menor;
		float media_a=0;
		
			for ( i=0; i<15; i=i+1) {
				for ( j=0; j<15; j=j+1) {
					
					matrizA[i][j] = (2 * i) - (3 * j);
					media_a=media_a+matrizA[i][j];
				}	
			}
			
			for ( i=0; i<10; i=i+1) {
				for ( j=0; j<30; j=j+1) {
					
					matrizB[i][j] =  i + 2 * j;
					
				}	
			}
				
				printf("\nMatriz A:\n");
			for ( i=0; i<15; i=i+1) {
				for ( j=0; j<15; j=j+1) {
					
					printf(" %d ", matrizA[i][j]);
					
				} printf("\n");
			}
			
				printf("\nMatriz B:\n");
			for ( i=0; i<10; i=i+1) {
				for ( j=0; j<30; j=j+1) {
					
					printf(" %d ", matrizB[i][j]);
					
				}	printf("\n");
			}
			
				printf("\nDiagonal principal da matriz A:\n");
			for (i=0; i<15; i=i+1) {
				
				printf(" %d ", matrizA[i][i]);			
			}
			
			maior=matrizA[0][0];
			
			for (i=0; i<15; i=i+1) { 
			
				if (matrizA[i][i] > maior) {	
				maior=matrizA[i][i];		
			}
			}
				printf("\n\nO maior elemento da diagonal principal: %d e sua posicao: [%d][%d]", maior, i, i);
				
				
				printf("\n\nMatriz B transposta:\n");
			for (j=0; j<30; j=j+1) {
				for ( i=0; i<10; i=i+1) {
				
				printf(" %d ", matrizB[i][j]);	
						
				} printf("\n");
			}
			
			menor=matrizB[0][0];
			
			for (j=0; j<30; j=j+1) {
				for ( i=0; i<10; i=i+1) {
				
				if (matrizB[i][j] < menor ) {
					menor=matrizB[i][j];
					}	
				}
			}
				printf("A posicao do menor elemento na matriz B transposta: [%d][%d]", i, j);
			
				media_a=media_a/225;
				
				printf("\n\nElementos abaixo da media:\n");
			for ( i=0; i<15; i=i+1) {
				for ( j=0; j<15; j=j+1) {
					
				if (media_a > matrizA[i][j]) {
					
					printf("\nElemento: %d e sua posicao: [%d][%d]", matrizA[i][j], i, j);
					
				}		
			}
			}
			
				printf("\n\nElementos da ultima coluna de B:\n");
			for ( i=0; i<10; i=i+1) {
		
				printf(" %d ", matrizB[i][29]);		
				
			}
			
				printf("\nElementos da primeira linha de A:\n");
			for ( j=0; j<15; j=j+1) {
					
				printf(" %d ", matrizA[0][j]);		
			
			}
			
    return 0;
}
