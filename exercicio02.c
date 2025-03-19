#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // 2 - Sorteie 3 números de 1 a 10, e aplique todas as coisas que fizemos com o programa sobre triângulos da lista passada, verificando se forma um triângulo e classificando o mesmo.
    
    srand(time(NULL));
    
    int num01 = rand() % 10 + 1;
    int num02 = rand() % 10 + 1;
    int num03 = rand() % 10 + 1;
    
    printf("%d %d %d", num01, num02, num03);
    printf("\n");
    
    if (num01 == num02 || num02 == num03){
        printf("O triângulo que foi escrito é um equilátero");
    } else {
        if (num01 == num02 && num02 != num03 || num02 == num03 && num03 != num01){
            printf("O triângulo que foi escrito é um isósceles");
        } else {
            if (num01*num01 == num02*num02 + num03*num03){
                printf("O triângulo é um retângulo!");
            } else {
                if (num01 != num02 && num02 != num03 && num01 != num03){
                    printf("O triângulo é um escaleno");
                }
            }
        }
    }
    
    return 0;
}
