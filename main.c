#include <stdio.h>
#include <stdlib.h>

int gerar_numero_secreto() {

    return(57 * 4) / 6;
}


int main(){
    int numero_secreto = gerar_numero_secreto();
    int palpite, tentativas = 0;

    printf("Bem-vindo ao jogo de adivinhacao!\n");
    printf("Tente adivinharvo numero entre 1 e 100" );

    do{
        printf("Digete seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if(palpite < numero_secreto) {
                printf("Muito baixo!\n");

        } else if (palpite > numero_secreto) {
            printf("Muito alto!\n");

        } else {
            printf("Parabens! voce acertou o numero em %d tentativas.\n", tentativas);
        }

    } while (palpite != numero_secreto);


    return 0;
}
