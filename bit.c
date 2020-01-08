#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// considerando 5 dígitos + 0x0A + 0x00
#define LINE_SIZE	7

int main () {
	FILE *fp;	
	fp = freopen("input2.txt", "r", stdin); 
	
    char buf[LINE_SIZE];    
    memset(buf, 0, LINE_SIZE);
	
	if (fp == NULL) {
    	printf("Erro ao abrir arquivo");
    	return(-1);
    }
    else {
        int notas[] = {100, 50, 10, 5, 1};
        int t = 1;
		
		while(fgets(buf, sizeof(buf), fp) != NULL) {
			
	        int valor = strtol(buf, NULL, 10);
	        
			if (valor == 0) break;
	        	
			int i, quantidadeDeNotas = 0;
			
			printf("Teste %d\n", t++);
			
	        for (i = 0; i < sizeof(notas)/sizeof(notas[0]); i++) {
	        	quantidadeDeNotas = valor / notas[i];
	        	valor = valor % notas[i];		        	
	        	printf("%d ", quantidadeDeNotas);
	        }
	        
	        printf("\n\n");
    	}
    }

    fclose(fp);

    return (0);
}


