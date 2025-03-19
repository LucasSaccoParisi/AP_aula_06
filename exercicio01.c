#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // 1 - Sorteie um número de 1 a 100, exiba na tela e informe se é um número par ou ímpar.
    
    srand(time(NULL));
    
    int num = rand() % 100 + 1;
    
    printf("%d", num);
    
    if (num % 2 == 0){
        printf("\n");
        printf("O número é par!");
    } else {
        printf("\n");
        printf("O número é ímpar!");
    }
    
    return 0;
}
