#include <stdio.h>
		
		void MediaMulheres (int media_mulheres_Nao, int mulheres_Nao) {
			
			media_mulheres_Nao = media_mulheres_Nao / mulheres_Nao;
			
			printf("\nA media de idade das mulheres que falaram nao = %d", media_mulheres_Nao);
			
		}
		
		void MediaHomens (int media_homens_Sim, int homens_Sim) {
			
			media_homens_Sim = media_homens_Sim / homens_Sim;
			
			printf("\nA media de idade dos homens que falaram sim = %d", media_homens_Sim);
			
		}
		
	
	int main() {
		
		int continuar, voto, genero, idade, voto_sim_fem=0, voto_nao_hom=0, num_homens=0, num_mulheres=0, numero_sim=0, numero_nao=0, mulheres_nao=0, homens_sim=0;
		float media_mulheres_nao=0, media_homens_sim=0;
		
		do {
			
			printf("Insira seu voto: (1) SIM ou (2) NAO" );
			scanf("%d", &voto);
			
			printf("Insira seu genero: (1) MASCULINO ou (2) FEMININO" );
			scanf("%d", &genero);
			
			printf("Insira sua idade:");
			scanf("%d", &idade);
			
			
				
			
		if (voto==1 && genero==2) {
			voto_sim_fem=voto_sim_fem+1;
		}
		
		if (voto==2 && genero==1 && idade<18) {
			voto_nao_hom=voto_nao_hom+1;
		}
		
		if (voto==2 && genero==2) {
			mulheres_nao=mulheres_nao+1;
			media_mulheres_nao = media_mulheres_nao + idade;
		}
		
		if (voto==1 && genero==1) {
			homens_sim=homens_sim+1;
			media_homens_sim = media_homens_sim + idade;
		}
		
		if (genero==1) {
			num_homens=num_homens+1;
		}
		
		if (genero==2) {
			num_mulheres=num_mulheres+1;
		}
		
		if (voto==1) {
			numero_sim=numero_sim+1;
		}
		
		if (voto==2) {
			numero_nao=numero_nao+1;
		}
		
		
				
		printf("Deseja continuar?");
		scanf("%d", &continuar);
			
		} while (continuar==1);
		
		
		
		
		printf("\nO numero de votos sim das mulheres: %d", voto_sim_fem);
		printf("\nO numero de votos nao dos homens com menos de 18 anos: %d", voto_nao_hom);
		
		MediaMulheres(media_mulheres_nao, mulheres_nao);
		
		MediaHomens(media_homens_sim, homens_sim);
		
		printf("\nO numero de homens: %d", num_homens);
		printf("\nO numero de mulheres: %d", num_mulheres);
		
		printf("\nO numero de votos sim: %d", numero_sim);
		printf("\nO numero de votos nao: %d", numero_nao);
		
			
    return 0;
}
