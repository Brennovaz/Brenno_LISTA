/*1) Fa�a um programa que solicite 2 n�meros e informe: a soma dos n�meros, o produto do 
primeiro n�mero pelo quadrado do segundo, o quadrado do primeiro n�mero, a raiz quadrada 
da soma dos quadrados, o seno da diferen�a do primeiro n�mero pelo segundo e O m�dulo 
do primeiro n�mero.*/

#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2, soma, produto, quadrado, raiz, modulo, soma_dos_quadrados;
    float seno;
    
    printf("Digite um n�mero: ");
    scanf("%d", &num1);
    printf("Digite outro n�mero: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    produto = num1 * (num2*num2);
    quadrado = num1*num1;
    soma_dos_quadrados = quadrado + (num2*num2);
    raiz = sqrt(soma_dos_quadrados);
    seno = sin(num1-num2);
    modulo = num1 < 0 ? num1 * -1: num1;
    
    printf("A soma desses n�meros � igual a: %d\n", soma);
    printf("O produto do primeiro n�mero pelo quadrado do segundo � igual a: %d\n", produto);
    printf("O quadrado do primeiro n�mero � igual a: %d\n", quadrado);
    printf("A raiz da soma dos quadrados desses n�meros � igual a: %d\n", raiz);
    printf("O seno da diferen�a do primeiro n�mero pelo segundo � igual a: %f\n", seno);
    printf("O m�dulo do primeiro n�mero � igual a: %d\n", modulo);
}
