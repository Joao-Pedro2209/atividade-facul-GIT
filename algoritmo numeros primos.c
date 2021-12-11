#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Aluno: João Pedro Braga Gomes
/* Algoritmo para calcular os números primos de 1 a 500
*/

main ()
{
	setlocale(LC_ALL, "Portuguese");                      //usado para que a acentuação seja feita da maneira correta
	
	int qntd, cont, i, c;                                 // declaração de variáveis
	
	printf("Digite a quantidade de números primos que você deseja:");        // função escreva
	scanf("%i", &qntd);                                                     // função leia
	
	for (i=1; i<= qntd; i++)
	{
		cont=0;
		
		for (c=1; c<= qntd; c++)
		{
			if (i % c==0)
			{
				cont += 1;
			}
		}
		if (cont==2)
		{
			printf("\n%i", i);
		}
	}
	printf("\n Programa finalizado");
}
