#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // 4 - Escreva um programa que sorteia um número de 1 a 10, 
    // dá duas chances para que o usuário acerte, mas dá uma pista após a primeira tentativa, 
    // dizendo se o número sorteado é maior ou menor que o primeiro palpite.
    
    srand(time(NULL));
    
    int num = rand() % 10 + 1;
    
    int resposta;
    
    int dica1 = num - 2;
    int dica2 = num + 2;
    printf("Coloque um número de 1 até 10... ");
    scanf("%d", &resposta);
    printf("O número está entre %d e %d", dica1, dica2);
    scanf("%d", &resposta);
    
    if (resposta == num){
        printf("Acertou!");
    } else {
        printf("Errou...");
    }
    
    return 0;
}
