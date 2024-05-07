#include <stdio.h>

int main() {
	
	int matriz [3][4];
	float media=0;
	
		printf("Entre com os elementos da matriz:\n");
	for (int i=0; i<3; i=i+1) {
		
		for (int j=0; j<4; j=j+1) {
			
			printf("[%d][%d]", i, j);
			scanf("%d", &matriz[i][j]);
			
			media=media+matriz[i][j];
		}
		
	}
	
		printf("\n Matriz A:\n");
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<4; j=j+1) {
			
			printf(" %d ", matriz[i][j]);
			
		}
		printf("\n");
	}
	
	
	media=media/12;
	printf("\n A media dos elementos da matriz = %f\n ", media);
	
		printf("\n\n  Elementos abaixo da media:");
	for (int i=0; i<3; i=i+1) {
			
		for (int j=0; j<4; j=j+1) { 
		
			if (matriz[i][j] < media) {
		
			printf("\n %d localizado na posicao [%d][%d]", matriz[i][j], i, j);
			}
	}
	}
	
	printf("\n\n  Elementos acima da media:");
	for (int i=0; i<3; i=i+1) {
			
		for (int j=0; j<4; j=j+1) { 
		
			if (matriz[i][j] > media) {
		
			printf("\n %d localizado na posicao [%d][%d]", matriz[i][j], i, j);
			}
	}
	}

    return 0;
}
