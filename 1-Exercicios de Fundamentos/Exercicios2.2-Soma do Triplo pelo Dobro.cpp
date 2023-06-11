/*
** Enunciado: 2.2- Desenvolva um programa para ler um numero inteiro e mostrar na tela a
soma do triplo do seu sucessor pelo dobro do seu antecessor.

** Autor................: Erivelto Clenio da Costa e Silva.
** Entrada..............: Um numero inteiro.
** Saida................: A soma do triplo do sucessor pelo dobro do antecessor
** Data de Implementacaoo: 11/06/2023.
*/

#include <stdio.h>

int main()
{
	int numero, resultado;
	int antecessor, sucessor;
	
	printf("Digite o numero:");
	scanf("%d", &numero);
	
	sucessor = numero+1;
	antecessor = numero-1;
	resultado = 3*sucessor + 2*antecessor;
	
	//ou
	//resultado = 3*(numero+1) + 2*(numero-1);
	
	printf("O resultado eh: %d.\n", resultado);
	getchar();
	return 0;
}
