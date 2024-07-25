/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>
#define MAX_VALORES 10000

int main()
{
	int valores[MAX_VALORES];
	int tamanho = 0;
	int entrada;
	int i;
	int soma;
	int maior = INT_MIN;
	int menor = INT_MAX;
	int media;
	
	printf("-------------------------------------------------------------\n");
	printf("\n Quando o numero 0 for digitado o programa se encerra \n\n");
	printf("-------------------------------------------------------------\n\n");

	do {
		printf(" Digite um numero: ");
		scanf("%d", & entrada);
		printf("\n");

		if(entrada != 0) {
			if(tamanho < MAX_VALORES) {
				valores[tamanho] = entrada;
				soma += entrada;
				tamanho++;

                if (entrada > maior) {
                    maior = entrada;
                }
                if (entrada < menor) {
                    menor = entrada;
                }

			} else {
				printf(" Limite de Armazenamento Atingido \n");
				break;
			}
		}

	} while(entrada != 0);

	printf("-------------------------------------------------------------\n\n");
    
    if (tamanho > 0) {
        
        	printf("-> Os valores inseridos foram:\n\n");
        	printf(" ");
	for (i = 0; i < tamanho; i++) {
		printf(" %d ", valores[i]);
		
	}
	printf("\n\n");
	printf("-> voce digitou: %d numeros \n\n", tamanho);
	printf("-> cujo a soma eh : %d  \n\n", soma);
	
	if (tamanho > 0) {
        printf("-> O maior valor digitado eh: %d\n\n", maior);
        printf("-> O menor valor digitado eh: %d\n\n", menor);
    } 
        
        float media = (float)soma / tamanho;
        printf("-> A média dos valores digitados eh: %.2f\n", media);
    }else {
        printf("-> Nenhum valor foi digitado.\n\n");
    }
    printf("-------------------------------------------------------------\n\n");

}