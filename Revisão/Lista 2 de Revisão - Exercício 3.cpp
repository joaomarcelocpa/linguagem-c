#include <stdio.h>
		
		void MaiorDosImpares (int numero1[], int contador1) {
			
			int maior; 
			
			maior=numero1[0];
			
			for (int contador=0; contador<10; contador=contador+1) {
				
				if ( numero1[contador] % 2 !=0 && numero1[contador]>maior) {
					maior=numero1[contador];
				}
				
			} printf("\n\nO maior numero entre os impares: %d", maior);	
			
		}
		
		
			void MenorDosPares (int numero1[], int contador1) {
			
			int menor; 
			
			menor=numero1[0];
			
			for (int contador=0; contador<contador1; contador=contador+1) {
				
				if ( numero1[contador] % 2 !=0 && numero1[contador]<menor) {
					menor=numero1[contador];
				}
				
			} printf("\nO menor numero entre os pares: %d", menor);	
			
		}
	
	
	
	int main() {

		int numero[10], contador;
		
		for (contador=0; contador<10; contador=contador+1) {
			
			printf("Entre com o numero:");
			scanf("%d", &numero[contador]);
			
		}
		
			printf("\nElementos pares:\n");
		for (contador=0; contador<10; contador=contador+1) {
			
			if (numero[contador] % 2==0) {
				
				printf("\n %d e sua posicao %d", numero[contador], contador+1);
				
			}	
		}
			
			printf("\n\n Elementos multiplos de 3:\n");
		for (contador=0; contador<10; contador=contador+1) {
			
			if (numero[contador] % 3==0) {
				
				printf("\n %d e sua posicao %d", numero[contador], contador+1);
				
			}
			
		}
		
		
		MaiorDosImpares (numero, 10);
		
		MenorDosPares (numero, 10);
		
			
    return 0;
}
