#include <stdio.h>

int main() {
	
	int matriz[3][5], maior, menor;
	float media=0;
	
		printf("Entre com os elementos da matriz:\n");
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<5; j=j+1) {
			
			printf("[%d][%d]", i, j);
			scanf("%d", &matriz[i][j]);
			
			media=media+matriz[i][j];
		}	
	}
	
	
	printf("\n Matriz A: \n");
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<5; j=j+1) {
			
			printf("%d ",matriz[i][j]);
		}	
		printf("\n");
	}
	
	
	media=media/15;
	printf("\nA media dos elementos da matriz = %f", media);
	
	
	maior=matriz[0][0];
	menor=matriz[0][0];

	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<5; j=j+1) {
			
			if (matriz[i][j]> maior) {
				maior=matriz[i][j];
			}
	} 
	}
		printf("\nO maior elemento da matriz = %d", maior);
		
		
		
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<5; j=j+1) {
			
			if (matriz[i][j]< menor) {
				menor=matriz[i][j];
			}
	} 
	}
		printf("\nO menor elemento da matriz = %d", menor);
	
return 0;
}
