# include <stdio.h> 
# include <stdlib.h> 

int main() {
	
	int matriz[4][4], maiordp, maior;
	float mediadp=0;
	
	printf("Entre com os elementos da matriz:\n");
	for(int i=0; i<4; i=i+1) {
		for (int j=0; j<4; j=j+1) {
			printf("Elemento [%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n Elementos da matriz principal:\n");
	maiordp=matriz[0][0];
	
	for (int i=0;i<4;i=i+1){
		
		printf(" %d ", matriz[i][i]);
		mediadp=mediadp+matriz[i][i];
		
		if (matriz[i][i] > maiordp) {
			maiordp=matriz[i][i];
		}
		
	}
	
	mediadp=mediadp/4;
	printf("\n A media dos elementos da diagonal principal: %f\n", mediadp);
	printf("\nO maior elemento da diagonal principal: %d\n", maiordp);
	
	maior=matriz[0][0];
	
	for (int i=0;i<4;i=i+1) {
		for (int j = 0; j < 4; j++) {

		if (matriz[i][j] > maiordp) {
			
			maior=matriz[i][j];
			
			printf("\n Elementos da matriz maiores que o maior elemento da diagonal principal: %d\n", maior);
		}
	}
	}
	return 0;
}
