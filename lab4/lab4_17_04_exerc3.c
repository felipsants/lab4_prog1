/*
Autor: <Carlos Felipe>
Data: <17/04/2024>
Descrição: <Imprimir uma figura contendo linhas e asteriscos>
Entrada: <l(linhas)>
Saída: <Figura>
Defesa: <l > 0>
*/
#include <stdio.h>

int main(){
    //Dicionário de Dados
    int linha, aux_linha = 0, aux_l2, sub;
    
    printf("Insira a Qtd de Linhas: ");
    scanf(" %d", &linha);
    
    //Defesa
    while(linha > 0 ){
        printf("Insira um valor Válido: ");
        scanf(" %d", &linha);
    }
    //Corpo
    linha *= -1;
    int aux_l = linha;
    aux_l2 = linha;
    
    while (aux_l2 > aux_linha){
        sub = (linha - aux_l) +1;
        while( sub > aux_linha){
            printf("*");
            sub--;
        }
        printf("\n");
        aux_l--;
        aux_l2--;
    }
    
    return 0;
}
