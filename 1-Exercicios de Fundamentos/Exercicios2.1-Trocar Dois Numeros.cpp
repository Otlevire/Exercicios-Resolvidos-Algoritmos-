/*
** Enunciado: 2.1- Desenvolva um programa para trocar o valor de duas variaveis,
a e b de modo que, no fim da execucaoo, b possua o valor de a e vice-versa.

** Autor................: Erivelto Clenio da Costa e Silva
** Entrada..............: Dois numeros
** Saida................: Os dois numeros trocados
** Data de Implementacaio: 11/06/2023
*/

#include <stdio.h>

int main()
{
	int numero1, numero2;
	int auxiliar;
	
	printf("Digite o primeiro numero:");
	scanf("%d", &numero1);
	printf("Digite o segundo numero:");
	scanf("%d", &numero2);
	
	auxiliar = numero1;
	numero1  = numero2;
	numero2  = auxiliar;
	
	printf("O primeiro numero esta com o valor %d.\nO segundo numero esta com o valor %d.\n", numero1, numero2);

	getchar();
	return 0;
}
