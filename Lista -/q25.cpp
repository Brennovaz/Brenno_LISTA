/*25) Fa�a um programa que l� um conjunto de 10 valores inteiros e verifica se
algum dos valores � igual a m�dia dos mesmos. */

#include <stdio.h>

int main()
{
   int num[10], soma=0, media;
   
   for(int i=0; i<10; i++){
       printf("Digite um valor: ");
       scanf("%d", &num[i]);
       soma += num[i];
   }
   media = soma/10;
   
    for(int i=0; i<10; i++){
        if(media == num[i]){
            printf("O n�mero na posi��o %d � igual a m�dia\n", i);
        }
    }
}
