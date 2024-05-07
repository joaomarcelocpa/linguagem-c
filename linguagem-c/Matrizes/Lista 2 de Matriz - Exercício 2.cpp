#include <stdio.h>

	int main() {
		int matriz[10][10];
		float media=0;
			for(int i=0; i<10; i=i+1) {
			for (int j=0; j<10; j=j+1) {
					matriz[i][j] = i + 2*j;
					media=media+matriz[i][j];
}
}
			printf("Matriz A:\n");
		for (int i=0; i<10; i=i+1) {
			for (int j=0; j<10; j=j+1) {
			printf(" %d ", matriz[i][j]);
}
		printf("\n");
}
		printf("\n Elementos da diagonal principal:");
		for (int i=0; i<10; i=i+1) {
		printf("\n %d", matriz[i][i]);


}
		printf("\n \n Matriz transposta:\n ");
		for (int i=0; i<10; i=i+1) {
		for (int j=0; j<10; j=j+1) {
		printf("%d ", matriz[j][i]);


}
		printf("\n");
}
		media=media/100;
		printf("\n Media dos elementos da matriz: %2f", media);
	return 0;
}
