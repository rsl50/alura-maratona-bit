#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// considerando 5 dígitos + 0x0A + 0x00
#define LINE_SIZE	7

int main () {
	
        int notas[] = {100, 50, 10, 5, 1};
        int t = 1;		
        
        for (t = 1; ; t++) {
        	int valor = 0;
			scanf("%d", &valor);
			
			if (valor == 0) break;
			if (valor < 10000) {
				int i, quantidadeDeNotas = 0;
			
				printf("Teste %d\n", t);
				
		        for (i = 0; i < sizeof(notas)/sizeof(notas[0]); i++) {
		        	quantidadeDeNotas = valor / notas[i];
		        	valor = valor % notas[i];		        	
		        	printf("%d ", quantidadeDeNotas);
		        }
		        
		        printf("\n\n");
			} else {
				printf("Teste %d\n\n", t++);
			}
        }
        
        
		
    	
    

    return (0);
}



