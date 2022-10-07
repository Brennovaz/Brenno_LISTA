/*
9) Escreva um programa que leia 3 notas de um aluno e a m�dia (ME) das notas dos
exerc�cios realizados por ele. Calcular a m�dia de aproveitamento, usando a 
f�rmula: MA =(N1 + N2*2 + N3*3 + ME)/7. A partir da m�dia, informar o conceito de
acordo com a tabela:
maior ou igual a 9 (A)
maior ou igual a 7.5 e menor que 9 (B)
maior ou igual a 6 e menor que 7.5 (C)
maior ou igual a 4 e menor que 6 (D)
menor que 4 (E)
*/

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media_exercicios, media_geral;
    
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite sua m�dia das notas de exerc�cios: ");
    scanf("%f", &media_exercicios);
    
    media_geral = (nota1 + nota2*2 + nota3*3 + media_exercicios) / 7.0;
    
    if(media_geral >= 9 && media_geral <= 10){
        printf("Sua m�dia � %.2f e o seu conceito � A", media_geral);
    }
    else if(media_geral >= 7.5 && media_geral < 9){
        printf("Sua m�dia � %.2f e o seu conceito � B", media_geral);
    }
    else if(media_geral >= 6 && media_geral < 7.5){
        printf("Sua m�dia � %.2f e o seu conceito � C", media_geral);
    }
    else if(media_geral >= 4 && media_geral < 6){
        printf("Sua m�dia � %.2f e o seu conceito � D", media_geral);
    }
    else if(media_geral > 10){
        printf("ERRO!! Sua m�dia est� maior do que o limite, tente novamente!");
        return 0;
    }
    else{
        printf("Sua m�dia � %.2f e o seu conceito � E", media_geral);
    }
}
