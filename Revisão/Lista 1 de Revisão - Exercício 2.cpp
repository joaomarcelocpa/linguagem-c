#include <stdio.h>

		int somaPares(int serie2[10]) {
			
			int soma_pares=0;
			
			for (int i=0; i<10; i=i+1) {
				
				if (serie2[i]%2==0) {
					soma_pares=soma_pares+serie2[i];
					printf("Soma parcial: %d\n", soma_pares);
				}
				
			}
			return soma_pares;
		}


			int somaImpares(int serie2[10]) {
			
			int soma_impares=0;
			
			for (int i=0; i<10; i=i+1) {
				
				if (serie2[i]%2!=0) {
					soma_impares=soma_impares+serie2[i];
					printf("Soma parcial: %d\n", soma_impares);
				}
				
			}
			return soma_impares;
		}


	int main() {
	
		int serie[10]={2,  5,  7,  8,  4,  12,  3,  9,  6,  15};
		int sp, si;
		
		sp=somaPares(serie);
		printf("A soma dos elementos pares = %d\n", sp);
		
		si=somaImpares(serie);
		printf("A soma dos elementos impares = %d\n", si);
		
    return 0;
}
