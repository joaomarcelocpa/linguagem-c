#include <stdio.h>
		
		// Função para calcular a media de consumo das residencias
		
		void Media (float media_residencial, int n_residencial) {
			
			media_residencial=media_residencial/n_residencial;
			
			printf("\nA media de consumo das residencias = %f", media_residencial);
			
		}

	
	int main() {
		
		// Declaração das variáveis 
		
		int consumo[30], tipo[30], contador, n_residencia=0, n_comercio=0, n_industria=0, maior_residencia, maior_comercio, maior_industria, menor;
		float media_residencia=0;
		
		// Entrada de dados
		for (contador=0; contador<30; contador=contador+1) {
			
			printf("Entre com o consumo:");
			scanf("%d", &consumo[contador]);
			
			printf("Entre com o tipo de consumo: (1) RESIDENCIA, (2) COMERCIO ou (3) INDUSTRIAL");
			scanf("%d", &tipo[contador]);
			
		}  
		
		// Calcula e soma os consumidores de cada tipo
		for (contador=0; contador<30; contador=contador+1) {
			
			if (tipo[contador]==1) {
				n_residencia=n_residencia+1;
				media_residencia=media_residencia+consumo[contador];	
			}
			
			if (tipo[contador]==2) {
				n_comercio=n_comercio+1;	
			}
			
			if (tipo[contador]==3) {
				n_industria=n_industria+1;	
			}
				
		}
			printf("\nO numero de consumidores residenciais = %d", n_residencia);
			printf("\nO numero de consumidores comerciais = %d", n_comercio);
			printf("\nO numero de consumidores industriais = %d", n_industria);
			
			
		// Calcula o maior consumo de cada tipo
		maior_residencia=consumo[0];
		maior_comercio=consumo[0];
		maior_industria=consumo[0];
			
		for (contador=0; contador<30; contador=contador+1) {
			
			if (tipo[contador]==1 && consumo[contador] > maior_residencia) {
				maior_residencia=consumo[contador];
			}
			
			if (tipo[contador]==2 && consumo[contador] > maior_comercio) {
				maior_comercio=consumo[contador];
			}
			
			if (tipo[contador]==3 && consumo[contador] > maior_industria) {
				maior_industria=consumo[contador];
			}			
		}
			printf("\nO maior consumo residencial = %d", maior_residencia);
			printf("\nO maior consumo comercial = %d", maior_comercio);
			printf("\nO maior consumo industrial = %d", maior_industria);
			
		// Calcula o menor consumo geral 
			menor=consumo[0];
		for (contador=0; contador<30; contador=contador+1) {
			
			if (consumo[contador]<menor) {
				menor=consumo[contador];
			}
		}
			printf("\nO menor consumo avaliado = %d", menor);	
			
		// Chama a função e mostra a media residencial
		Media(media_residencia, n_residencia);
			
		// Mostra os consumos residenciais e seus numeros
			printf("\nConsumos comerciais:");
		for (contador=0; contador<30; contador=contador+1) {
		
			if (tipo[contador]==2) {
				printf("\nConsumo: %d e posicao: %d", consumo[contador], contador);
				
			}	
		}	
			
			
    return 0;
}
