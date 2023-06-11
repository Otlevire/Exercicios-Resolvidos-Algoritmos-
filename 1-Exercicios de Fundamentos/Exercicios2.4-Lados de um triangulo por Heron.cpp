/*
** Enunciado: 2.4- Desenvolva um programa para ler os tres lados de um triangulo. 
Calcular e mostrar na tela o valor da area. Para o efeito, utilize a formula 
de Heron: Area = sqrt(s(s-a)(s-b)(s-c)), onde s = (a+b+c)/2;

** Autor................: Erivelto Clenio da Costa e Silva.
** Entrada..............: Os tres valores dos lados.
** Saida................: O valor da area calculada.
** Data de Implementacao: 11/06/2023.
*/

#include <Math.h>
#include <stdio.h>

int main()
{
	float ladoA, ladoB, ladoC;
	float area, s;
	
	printf("Digite o valor do lado A:");
	scanf("%f", &ladoA);
	
	printf("Digite o valor do lado B:");
	scanf("%f", &ladoB);
	
	printf("Digite o valor do lado C:");
	scanf("%f", &ladoC);
	
	s = (ladoA + ladoB + ladoC)/2.0;
	area = sqrt(s*(s-ladoA)*(s-ladoB)*(s-ladoC));
	
	printf("A area do triangulo e de: %.2f.\n", area);
	
	getchar();
	return 0;
}
