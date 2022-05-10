#include <stdio.h>

/*
* Variáveis globais
*/

int opcao;
float valor1, valor2, resultado;

/*
* Função Principal
*/

void main( int argc, char** argv) {
    
    printf("Menu de opções: \n");
    
    opcao = 0; // opcao de inicio

    while (opcao != 5){
    
        resultado = 0;
        printf("Escolha as opções: \n");
        printf("1 - soma. ");
        printf("2 - subtração. ");
        printf("3 - multiplicação. ");
        printf("4 - divisão. ");
        printf("5 - sair. ");

        printf("Digite a opção escolhida: \n");
        scanf("%d", &opcao);

        if (opcao == 5) {
            
        }
    }
    
}