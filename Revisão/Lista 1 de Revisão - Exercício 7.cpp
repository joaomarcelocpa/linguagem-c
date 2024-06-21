#include <stdio.h>

	void Media (float media2) {
		
		media2=media2/10;
		printf("A media das temperaturas em Celsius = %f", media2);
		
	}
	
	int main() {
		
		int temperaturaC[10], temperaturaF[10];
		int maior, menor;
		float media=0;
		
		for (int i=0; i<10; i=i+1) {
			
			printf("Entre com a temperatura em Celsius:");
			scanf("%d", &temperaturaC[i]);
			
			media=media+temperaturaC[i];	
		}
		
		
		for (int i=0; i<10; i=i+1) {
			
			temperaturaF[i] = (temperaturaC[i] * 1.8) + 32;
			
			printf("Temperatura em Celsius: %d -- convertida para Fahrenheit: %d \n", temperaturaC[i], temperaturaF[i]);
		}
		
		
		Media(media);
		
			printf("\nTemperatura abaixo da media\n");
		for (int i=0; i<10; i=i+1) {
			
		if (temperaturaC[i]<media/10) {
			
			printf("%d\n", temperaturaC[i]);
			
		}
		}
		
		
		maior=temperaturaC[0];
		menor=temperaturaC[0];
		
		for (int i=0; i<10; i=i+1) {
			
			if (temperaturaC[i]>maior) {
				maior=temperaturaC[i];	
			}
			if (temperaturaC[i]<menor) {
				menor=temperaturaC[i];
			}
		
		}
		
			printf("\nA maior temperatura registrada: %d", maior);
			printf("\nA menor temperatura registrada: %d", menor);
			
		
    return 0;
}
