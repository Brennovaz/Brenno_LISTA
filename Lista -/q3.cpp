/*3) Escreva um programa que leia um n�mero na base decimal e em seguida imprima esse 
mesmo n�mero nas bases octal e hexadecimal.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int decimal;
    char b[10];
    
    printf("Digite um n�mero decimal: ");
    scanf("%d", &decimal);
    
    printf("O n�mero convertido para octal �: %o\n", decimal);
    printf("O n�mero convertido para hexadecimal �: %X", decimal);
}
