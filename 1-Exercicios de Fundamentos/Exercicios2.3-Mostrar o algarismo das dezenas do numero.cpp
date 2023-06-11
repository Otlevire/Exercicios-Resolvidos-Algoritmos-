/*
** Enunciado: 2.3- Desenvolva um programa para ler um numero qualquer e 
mostrar na tela o algarismo das dezenas.

** Autor................: Erivelto Clenio da Costa e Silva (Otlevire).
** Entrada..............: Um numero inteiro.
** Saida................: A soma do triplo do sucessor pelo dobro do antecessor
** Data de Implementacao: 11/06/2023.
*/

#include <stdio.h>

int main()
{
	int numero, resultado;
	
	printf("Digite o numero:");
	scanf("%d", &numero);
	
	resultado = numero%10;
	
	printf("O resultado eh: %d.\n", resultado);
	getchar();
	return 0;
}
