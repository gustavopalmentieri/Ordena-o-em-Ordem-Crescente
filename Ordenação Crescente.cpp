#include <stdio.h>
#include <locale.h>

int main () {
	
	int num1, num2, num3;
	int aux;
	
	setlocale(LC_ALL, "portuguese");
	printf (" ----------- > Ordenação em Ordem Crescente < ------------\n");
	
	/* Solicita três números para o usuário*/
	
	printf ("\nDigite o primeiro número: ");
	scanf ("%d", &num1);
	
	printf ("\nDigite o segundo número: ");
	scanf ("%d", &num2);
	
	printf ("\nDigite o terceiro número: ");
	scanf ("%d", &num3);
	
	
	/* Ordenar em ordem crescente*/
	
	if (num1 > num3){
		
		aux = num1;
		num1 = num3;
		num3 = aux;
		
	} if (num1 > num2){
		
	    aux  = num1;
		num1 = num2;
		num2 = aux;
		
	} if (num2 > num3){
		
		aux = num2;
		num2 = num3;
		num3 = aux;
		
	}
	
	printf ("\nEm ordem crescente: %d, %d, %d", num1, num2, num3);
	
}
