/*
10) Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero 
� par ou �mpar. O programa deve informar se o n�mero � par, caso afirmativo informar 
tamb�m se � ou n�o maior que 15 ou se o n�mero � �mpar, caso afirmativo informar se 
� ou n�o menor que 50.
*/

#include <stdio.h>

int main(){
    int num;
    
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("O n�mero � par!\n");
        if(num > 15){
            printf("O n�mero � maior do que 15");
        } else{
            printf("O n�mero � menor do que 15");
        }
    }else{
        printf("O n�mero � �mpar!\n");
        if(num < 50){
            printf("O n�mero � menor do que 50");
        }else{
            printf("O n�mero � maior do que 50");
        }
    }
}
