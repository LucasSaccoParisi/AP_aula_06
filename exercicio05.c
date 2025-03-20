#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // 5 - Sorteie dois números de 1 a 5 e peça que o usuário acerte os dois números de uma vez, não necessariamente na mesma ordem.
    
    srand(time(NULL));
    
    int num1 = rand() % 5 + 1;
    int num2 = rand() % 5 + 1;
    
    int resposta;
    
    printf("Chute dois números... ");
    scanf("%d", &resposta);
    
    if (resposta == num1){
        printf("Acertou o Primeiro!");
    } else {
        printf("Errou o primeiro...");
    }
    
    scanf("%d", &resposta);
    
    if (resposta == num2){
        printf("Acertou o segundo!");
    } else {
        printf("Errou o segundo...");
    }
    
    return 0;
}
