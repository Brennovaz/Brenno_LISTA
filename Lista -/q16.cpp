/*16) Dados um n�mero natural n, exiba seu fatorial n!. */

#include <stdio.h>

int main()
{
   int n, fat;
   
   printf("Digite um n�mero natural: ");
   scanf("%d", &n);
   
   for(fat=1; n>1; n = n - 1){
       fat = fat * n;
   }
   printf("\nO n�mero fatorial desse n�mero �: %d", fat);
}
