#include <stdio.h>
	
	int fatorial (int num) {
		
		if (num == 0 || num == 1)
        return 1;
        
    	else
        return num * fatorial(num - 1);
	}
	 

	int main() {
		
		int soma_fatorial=0, i;
		
		for (i = 1; i <= 6; i++) {
		
		printf("Numero: %d ", i);
		soma_fatorial=soma_fatorial+fatorial(i);
		printf("Soma parcial = %d\n", soma_fatorial);
		}
		
		printf("A soma dos fatoriais de 1 a 6 = %d", soma_fatorial);
		
    return 0;
}
