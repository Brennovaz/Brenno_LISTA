/*
8) Fa�a o programa que apresenta a seguinte sa�da, perguntando ao usu�rio o n�mero
m�ximo (no exemplo, 9). Este n�mero deve ser sempre �mpar. 
1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5
*/

#include <stdio.h>

int main(){
    int num, i, l; 
    
    printf("Digite o n�mero maximo que voc� quer que o programa mostre: ");
    scanf("%d", &num);
    
    if (num % 2==0){
       printf("N�mero inv�lido, digite um n�mero �MPAR!!!!\n");
    } else{
        for( i = 0; i<= (num / 2) + 1; i++){
            for (l=i+1; l<=num-i; l++ ){
                printf("%d ", l);
            }
            printf("\n");
            for (l=0; l<(i+1)*2; l++){
              printf(" ");
            }
         }
    }
}
