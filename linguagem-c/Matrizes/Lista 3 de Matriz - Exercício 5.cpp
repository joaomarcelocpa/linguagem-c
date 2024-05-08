#include <stdio.h>
#include <stdlib.h>
	
	void media_matriz (int matrizA[15][15]) {
		
		int i, j;
		float media=0;
		
		for(i=0; i<15; i=i+1) {
			for (j=0; j<15; j=j+1) {
				
				media=media+matrizA[i][j];
				
			}
	}
			media=media/225;
			printf("\n \n A media dos valores da matriz = %f", media);
	} 
	
	int main() {
	
		int matriz[15][15], i, j, elemento_abaixo_da_media=0;
		int media;
		
		for(i=0; i<15; i=i+1) {
			for (j=0; j<15; j=j+1) {
				
			matriz[i][j]= 4 * i - 2 * j;
				
	}}
	
		printf("\n Matriz:\n");
		for(i=0; i<15; i=i+1) {
			for (j=0; j<15; j=j+1) {
				
				printf(" %d", matriz[i][j]);

				
			}
			printf("\n");
		}
	
		
		printf("\n O vetor B que contem a ultima coluna de A:\n");
	
		for(i=0; i<15; i=i+1) {
				printf(" %d", matriz[i][14]);
		}
		
		
		printf("\n\n O vetor C que contem a diagonal principal de A:\n ");
	
		for(i=0; i<15; i=i+1) {
				printf(" %d", matriz[i][i]);
		}
		
		
			printf("\n\n O vetor D que contém a primeira linha de A:\n ");	
		for(j=0; j<15; j=j+1) {
				printf(" %d", matriz[0][j]);
		}
		
		media_matriz(matriz);
		

		printf("\n \n Elementos abaixo da media e suas posicoes:\n");
		for(i=0; i<15; i=i+1) {
			for (j=0; j<15; j=j+1) {
				
				if (matriz[i][j] < media) {
			
				printf(" \n Elemento: %d e sua posicao: [%d][%d] ", matriz[i][j], i, j);
			
				}	
			}
		}
		return 0;	
	}
