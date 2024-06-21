#include <stdio.h>
	
	void soma (int num1, int num2) {
		
		int som=0;
		
		som=num1+num2;
		printf("Resultado da adicao = %d", som);
	}
	
	void subtracao (int num1, int num2) {
		
		int sub=0;
		
		sub=num1-num2;	
		printf("Resultado da subtracao = %d", sub);
	}
	
	void multiplicacao (int num1, int num2) {
		
		int mul=0;
		
		mul=num1*num2;
		printf("Resultado da multiplicacao = %d", mul);	
	}
	
	void divisao (int num1, int num2) {
		
		int div=0;
		
		div=num1/num2;
		printf("Resultado da divisao = %d", div);	
	}


	int main() {
		
		int num1, num2, tipo;
		
		printf("Entre com o primeiro numero:");
		scanf("%d", &num1);
		
		printf("Entre com o segundo numero:");
		scanf("%d", &num2);
		
		printf("Qual tipo de calculo deseja realizar: (1) ADICAO, (2) SUBTRACAO, (3) MULTIPLICACAO, (4) DIVISAO");
		scanf("%d", &tipo);
		
		if (tipo==1) {
			
			soma(num1, num2);	
		}
		
		if (tipo==2) {
			
			subtracao(num1, num2);
		}
		
		if (tipo==3) {
			multiplicacao(num1, num2);
		
		}
		
		if (tipo==4) {
			divisao(num1, num2);
		}
			
    return 0;
}
