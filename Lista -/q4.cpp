/* 4) Fa�a um programa que l� dois valores e imprime: (0,1)
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro at� o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo at� o primeiro
em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais".*/

#include <stdio.h>

int main(){
    int num1, num2, i;
    
    printf("Digite um n�mero: ");
    scanf("%d", &num1);
    printf("Digite mais um n�mero: ");
    scanf("%d", &num2);
    
    if(num1 < num2){
        printf("O primeiro valor � menor e a lista de valores do primeiro at� o segundo �: ");
        for(i = num1; i < num2; i++){
            printf("%d - ", i);
        }
    } else if(num2 < num1){
        printf("O primeiro valor � maior e a lista de valores do segundo at� o primeiro �: ");
        for(i = num1; i >= num2; i--){
            printf("%d - ", i);
        }
    }else{
        printf("Os valores digitados s�o iguais!!");
    }
}
