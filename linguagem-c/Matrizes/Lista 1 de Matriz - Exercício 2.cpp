#include <stdio.h>
	
	int main() {
	
	int matriz[3][3];
	float media=0;
	
	
	printf("Entre com os elementos da matriz:");
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<3; j=j+1) {
			printf("\n[%d][%d]", i,j);
			scanf("%d", &matriz[i][j]);	
			
			media=media+matriz[i][j];
		}
		}
		
	printf("\nMatriz:\n");
	for (int i=0; i<3; i=i+1) {
		for (int j=0; j<3; j=j+1)
		 {
			printf(" %d ", matriz[i][j]);
		}
			printf("\n");
		}	
		
			
	media=media/9;
	printf("\n A media dos elementos da matriz = %f\n ", media);
	
	
	printf("\n Elementos da diagonal principal:");
	for (int i=0; i<3; i=i+1) {
		printf(" \n %d ", matriz[i][i]);
		}
	
	
    return 0;
}
