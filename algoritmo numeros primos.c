#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Aluno: Jo�o Pedro Braga Gomes
/* Algoritmo para calcular os n�meros primos de 1 a 500
*/

main ()
{
	setlocale(LC_ALL, "Portuguese");                      //usado para que a acentua��o seja feita da maneira correta
	
	int qntd, cont, i, c;                                 // declara��o de vari�veis
	
	printf("Digite a quantidade de n�meros primos que voc� deseja:");        // fun��o escreva
	scanf("%i", &qntd);                                                     // fun��o leia
	
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
