/*
Autor: <Carlos Felipe>
Data: <17/04/2024>
Descrição: <Calcular x^y>
Entrada: <x e y>
Saída: <x^y>
Defesa: <x!=0 e y>=0>
*/
#include <stdio.h>

int main(){
    // Dicionário de Dados
    int x, x_temp, y, i;
    printf("Insira X e Y: ");
    scanf("%d %d",&x, &y);

    //Defesa
    while( x == 0 || y < 0){
        printf("Número Inválido \n");
        scanf("%d %d",&x, &y);
    }
    
    //Corpo
    i = 1;
    x_temp = x;

    if(y == 1){
        x_temp = x;
    }
    else if(y == 0){
        x_temp = 1;
    }
    if(y > 1){
        do{
        x_temp *= x;
        i++;
    }while(i != y);
    }
    
    printf("O resultade de x^y é: %d", x_temp);
    return 0;
}