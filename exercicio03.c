#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // 3 - Escreva um programa que sorteia um número de 1 a 10 e dá duas 
    // chances para que o usuário acerte. O programa não deve alterar o número sorteado, 
    //e só deve pedir o segundo palpite, caso a pessoa erre sua primeira tentativa.

    srand(time(NULL));
    
    int num = rand() % 10 + 1;
    
    int resposta;
    
    printf("Coloque um número de 1 até 10... ");
    scanf("%d", &resposta);
    scanf("%d", &resposta);
    
    if (resposta == num){
        printf("Acertou!");
    } else {
        printf("Errou...");
    }
    
    return 0;
}
