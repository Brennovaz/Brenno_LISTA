/*
6) Fa�a um programa que l� o pre�o de um produto e inflaciona esse pre�o em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: n�o use o comando "if" ou o operador de condi��o "?". 
*/

#include <stdio.h>

int main(){
  int i, preco, infla;
  
  printf("Digite o pre�o do produto: ");
  scanf("%d", &preco);
  
  for(i=0; i<1 && preco < 100; i++){
      infla = preco + (preco * 0.1);
      printf("O pre�o inflacionou em 10 por cento e o pre�o do produto agora �: R$%d", infla);
  }
  
  for(i=0; i<1 && preco >= 100; i++){
      infla = preco + (preco * 0.2);
      printf("O pre�o inflacionou em 20 por cento e o pre�o do produto agora �: R$%d", infla);
  }
}
