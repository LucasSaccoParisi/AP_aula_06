#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // 6 - Sorteie dois números de 1 a 10. Informe quantos destes números estão entre 3 e 7 (inclusive)
    
    srand(time(NULL));
    
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    
    if (num1 >= 3 && num1 <= 7){
        printf("O primeiro número está entre 3 e 7\n");
    } else {
        printf("O primeiro número não está entre 3 e 7\n");
    }
    
    if (num2 >= 3 && num2 <= 7){
        printf("O segundo número está entre 3 e 7\n");
    } else {
        printf("O segundo número não está entre 3 e 7\n");
    }
    
    return 0;
}
