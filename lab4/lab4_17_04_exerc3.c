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
    int l;
    int i = 0;
    int l_aux;
    int j = 0;

    //Entrada de Dados
    printf("Digite a quantidade de linhas: ");
    scanf("%d",&l);
    
    l = l * (-1);
    l_aux = 1;

    //Defesa
    if (l < 0){
        printf("Quantidade inválida de linhas.");

        return 1;
    }
    //Corpo
    while(l > i){
        while (l_aux > j)
        {
            printf("*");
            j++;
        }
        printf("\n");
        l--;
        j = 0;
        l_aux++;
    }   
    return 0;
}