#include <stdio.h>
	int main() {
		int matriz[2][4];
		
		printf("Entre com os elementos da matriz:\n");
		
		for (int i=0; i<2; i=i+1) {
			for (int j=0; j<4; j=j+1) {
			printf("Elemento [%d][%d]", i, j);
			scanf("%d", &matriz[i][j]);
}
}
		printf("\nElementos da matriz A:\n");
		for (int i=0; i<2; i=i+1) {
			for (int j=0; j<4; j=j+1) {
			printf(" %d ", matriz[i][j]);
}
	printf("\n");
}
		printf("\nElementos da matriz B transposta:\n");
			for (int i=0; i<4; i=i+1) {
				for (int j=0; j<2; j=j+1) {
		printf(" %d ", matriz[j][i]);
}
	printf("\n");
}
return 0;
}
