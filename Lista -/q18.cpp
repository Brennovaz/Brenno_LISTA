/*18) Fa�a um programa C que leia dez n�meros que representam as notas de dez 
alunos de uma disciplina. As notas variam de zero at� dez (0 a 10). O programa 
deve validar a entrada de dados e obter: a soma das notas, a m�dia das notas, 
a maior nota, a menor nota. Assuma que as notas s�o informadas corretamente no 
intervalo de 1 a 10. */

#include <stdio.h>

int main() {
	int soma, maior, menor, numero,i;
	
	printf("Entre com o 1o numero inteiro: ");
 	scanf("%i", &numero); 
 	
 	maior=numero;
 	menor=numero;
 	soma += numero;
	
	if (numero<=10){
		for(i=1; i<10; i++){
 		printf("Entre com o %do numero inteiro: ",i+1);
 		scanf("%i", &numero);
 		soma += numero;

 		if(numero>maior)
 			maior=numero;
 		else
 			if(numero<menor)
 				menor=numero;
 		} 
 		
 	float media = (float) soma / 10;
	printf("A m�dia dos n�meros �: %.2f", media);
 	printf("\nO menor numero entrado �: %d", menor);
	printf("\nO maior numero entrado �: %d", maior);
	printf("\nA soma dos n�meros �: %i", soma);
		
	}
	else{
		printf("N�mero entre 0 a 10");
	}
	
}
