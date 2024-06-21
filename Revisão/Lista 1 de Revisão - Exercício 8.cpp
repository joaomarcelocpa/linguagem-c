#include <stdio.h>
	
	// FUNÇÃO MEDIA PARES E IMPARES	
	void mediaImpares (float media_impares, int impares) {
		
		media_impares=media_impares/impares;
		
		printf("\n\n Media dos elementos impares: %f", media_impares);
		
		
	}
	
	void mediaPares (float media_pares, int pares) {
		
		media_pares=media_pares/pares;
		
		printf("\n\n Media dos elementos pares: %f", media_pares);
			
	}
	
	
	int main() {
		
		
		int i, numero[8], par, impar;
		float media_par=0, media_impar=0;
		
			// ENTRADA DE DADOS
			for (i=0; i<8; i=i+1) {
				
				printf("Entre com o %d numero:", i+1);
				scanf("%d", &numero[i]);	
			} 
			
			// MOSTRA OS ELEMENTOS DO VETOR
				printf("\n Elementos do vetor:");
			for (i=0; i<8; i=i+1) {
				
				printf(" %d ", numero[i]);	
			} 
			
			// MSOTRA POSICOES DOS IMPARES NO VETOR
				printf("\n Posicoes no vetor dos numeros impares:");
			for (i=0; i<8; i=i+1) {
				
				if (numero[i]%2!=0){
					
					printf(" %d ", i+1);
					
					impar=impar+1;
					media_impar=media_impar+numero[i];	
				}
			} 
			
			// MOSTRA OS ELEMENTOS PARES DO VETOR
				printf("\n Elementos pares do vetor:");
			for (i=0; i<8; i=i+1) {
				
				if (numero[i]%2==0){
					
					printf(" %d ", numero[i]);
					
					par=par+1;
					media_par=media_par+numero[i];	
				}
			} 
			
			
			mediaImpares(media_impar, impar);
			mediaPares(media_par, par);
				
		
	
    return 0;
}
