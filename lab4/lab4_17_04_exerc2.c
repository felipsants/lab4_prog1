/*
Autor: <Carlos Felipe>
Data: <17/04/2024>
Descrição: <Imprimir uma figura contendo linhas e asteriscos>
Entrada: <l(linhas)>
Saída: <Figura>
Defesa: <l <= 10 && l > 0>
*/
#include <stdio.h>

int main(){
    //Dicionário de Dados
    int linhas, aux_linhas = 0;

    printf("Insira a Qtd de Linhas: ");
    scanf(" %d",&linhas);

    //Defese
    while(linhas > 10){
        printf("Insira um valor válido: ");
        scanf(" %d",&linhas);
    }

    //Corpo
    while(aux_linhas < linhas){
        int aux_l = linhas;
        while (aux_l > aux_linhas){
            printf("*");
            aux_l--;
        }
        printf("\n");
        
        aux_linhas++;
    }

    return 0;
}
