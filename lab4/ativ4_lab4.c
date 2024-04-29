#include <stdio.h>

int main(){
    char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    
    //Defesa:
    if (!((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z'))) {
        printf("Caractere invalido");
        return 0;
    }

    int i = 3;
    
    while (i > 0){
        if(letra >= 'a' && letra <= 'n'){
            char soma = letra + 12;
            printf("A cifra de %c eh %c\n", letra, soma);
        }
        else if(letra >= 'o'){
            char subtracao = letra - 14;
            printf("A cifra de %c eh %c\n", letra, subtracao);
        }
        else if(letra >= 'A' && letra <= 'N'){
            char soma = letra + 12;
            printf("A cifra de %c eh %c\n", letra, soma);
        }
        else if(letra >= 'O'){
            char subtracao = letra - 14;
            printf("A cifra de %c eh %c\n", letra, subtracao);
        }
        i--;
        printf("Insira uma nova letra: ");
        scanf(" %c",&letra);
    }

    return 0;
}
// abcdefghijklmnopqrstuvwxyz       p a b indo = 12; p a b voltando = 14