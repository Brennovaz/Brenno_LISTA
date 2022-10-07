/*17) O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros
�mpares consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc. Dado 
um n�mero n,calcule seu quadrado usando a soma de �mpares ao inv�s de produto. */

#include <stdio.h>

int main(){

    int i, n, cal, resultado=0;
    printf("Digite um n�mero: ");
    scanf("%d", &n);

    printf("%d^2 = ", n);

    for(i=0, cal=n*n; cal>resultado; i++){
        if(i%2 != 0){
            printf(" %d ",i);
            resultado += i;
        }else if(resultado != cal){
            printf("+");
        }
    }
    printf(" = %d", resultado);
}
