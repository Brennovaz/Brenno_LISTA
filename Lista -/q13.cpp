/*13)Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares
menores e/ou iguais a esse n�mero e maiores ou igual a um.*/

#include <stdio.h>

int main()
{
    int i, num;
    
    printf("Digite um n�mero positivo: ");
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
        if(i%2 != 0){
            printf("%d - ", i);
        }
    }
}
