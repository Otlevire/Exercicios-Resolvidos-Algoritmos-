/*
** Enunciado: 2.6-Desenvolva um programa para ler um numero inteiro menor 
do que 1000, e mostrar na tela a soma dos seus digitos. 
Por exemplo 397 e igual a 3 + 9 + 7 = 19.

** Autor................: Erivelto Clenio da Costa e Silva.
** Entrada..............: Um numero menor que 1000.
** Saida................: A soma dos algarismos desse numero.
** Data de Implementacao: 11/06/2023.
*/

#include <stdio.h>

int main()
{
	int valor;
	int centena, dezena, unidade, soma;
	
	printf("Digite o valor do numero:");
	scanf("%d", &valor);
	
	centena = (valor/100);
	dezena  = (valor%100)/10;
	unidade = valor%10;
	
	soma = centena + dezena + unidade;
	
	printf("A soma dos algarismos eh de : %d.\n", soma);
	
	getchar();
	return 0;
}
