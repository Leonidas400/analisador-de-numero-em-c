/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>
#define MAX_VALORES 10000

void ordemCrescente(int tamanho, int valores[MAX_VALORES]) {
    int i, j, temp;
    for(i = 0; i < tamanho - 1; i++){
        for(j = 0; j < tamanho - i - 1; j++){
            if(valores[j] > valores[j + 1]){
                temp = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = temp;
            }
        }
    }
    printf("\n\n-> Os valores em ordem crescente são:\n\n");
    for(i = 0; i < tamanho; i++){
        printf(" %d", valores[i]);
    }
    printf("\n");
}

void ordemDecrescente(int tamanho, int valores[MAX_VALORES]){
    int i, j, temp;
    for(i = 0; i < tamanho - 1; i++){
        for(j = 0; j < tamanho - i - 1; j++){
            if(valores[j] < valores[j + 1]){
                temp = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = temp;
            }
        }
    }
    printf("\n-> Os valores em ordem decrescente são:\n\n");
    for(i = 0; i < tamanho; i++){
        printf(" %d", valores[i]);
    }
    printf("\n");
}

int main() {
    int valores[MAX_VALORES];
    int tamanho = 0;
    int entrada;
    int i;
    int soma = 0;
    int maior = INT_MIN;
    int menor = INT_MAX;
    int opcao;

    printf("-------------------------------------------------------------\n");
    printf("\nQuando o número 0 for digitado o programa se encerra\n\n");
    printf("-------------------------------------------------------------\n\n");

    do {
        printf("Digite um número: ");
        scanf("%d", &entrada);
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
                printf("Limite de Armazenamento Atingido\n");
                break;
            }
        }

    } while(entrada != 0);

    printf("-------------------------------------------------------------\n\n");

    if (tamanho > 0) {
        printf("-> Os valores inseridos foram:\n\n");
        for (i = 0; i < tamanho; i++) {
            printf(" %d ", valores[i]);
        }
        printf("\n\n");
        printf("-> Você digitou: %d números \n\n", tamanho);
        printf("-> Cuja soma é: %d  \n\n", soma);
        printf("-> O maior valor digitado é: %d\n\n", maior);
        printf("-> O menor valor digitado é: %d\n\n", menor);
        
        float media = (float)soma / tamanho;
        printf("-> A média dos valores digitados é: %.2f\n", media);
        printf("\n-------------------------------------------------------------\n");
        printf("\n-> 1- Organiza em ordem crescente / 2- Organiza em ordem decrescente: ");
        scanf("%d", &opcao);
        if(opcao == 1){
            ordemCrescente(tamanho, valores);
        } else if(opcao == 2){
            ordemDecrescente(tamanho, valores);
        } else {
            printf("\n-> Opção inválida");
        }

    } else {
        printf("-> Nenhum valor foi digitado.\n\n");
    }
    printf("\n-------------------------------------------------------------\n\n");

    return 0;
}
