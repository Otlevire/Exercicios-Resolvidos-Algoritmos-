/*
** Enunciado: 2.5-Tres apostadores ganharam o totobola e o valor e de um 
milhao de Kwanzas. Esse valor sera dividido por eles nas seguintes 
percentagens: O primeiro ganhador recebera 46%; O segundo recebera 32%; 
enquanto o terceiro recebera o restante.

** Autor................: Erivelto Clenio da Costa e Silva.
** Entrada..............: Valor da totobola.
** Saida................: A divisao do valor em tres partes.
** Data de Implementacao: 11/06/2023.
*/

#include <stdio.h>

int main()
{
	const float PRIMEIRA_PARCELA = 0.46;
	const float SEGUNDA_PARCELA = 0.32;
	float valor;
	
	printf("Digite o valor da totobola:");
	scanf("%f", &valor);
	
	printf("O PRIMEIRO ganhador recebera: %.2f.\n", valor*PRIMEIRA_PARCELA);
	printf("O SEGUNDO ganhador recebera: %.2f.\n", valor*SEGUNDA_PARCELA);
	printf("O TERCEIRO ganhador recebera: %.2f.\n", valor*(1-PRIMEIRA_PARCELA-SEGUNDA_PARCELA));
	getchar();
	return 0;
}
