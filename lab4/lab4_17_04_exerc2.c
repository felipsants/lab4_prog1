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
    int l;
    int i = 0;
    int i_aux = 0;
    int j = 0;

    
    //Entrada de Dados
    printf("Digite a quantidade de linhas: ");
    scanf("%d",&l);
    i_aux = l;

    //Defesa
    if (l > 10 || l < 0){
        printf("Quantidade inválida de linhas.");

        return 1;
    }
    
    //Corpo
    if(l == 1){
        printf("* \n");
    }

    while (i <= l){
       printf("\n");
       while (j < i_aux)
       {
        printf("*");
        j++;
       }
       i_aux--;
       i++;
       j = 0;
    }
    

    return 0;
}