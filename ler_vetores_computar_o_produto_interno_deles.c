#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL,"");
	
	double vetor1[5], vetor2[5],resultado;
	int i;
	/*Colocando valores nos vetores*/
	/*vetor1*/
	
	for(i=0; i<5;i++)/*vai da posi��o 0 at� a 4, 5 posi��es, portanto*/
	{
		printf("Digite um valor para a posi��o (%d) do vetor 1  ",i);
		scanf("%lf", &vetor1[i]); /*armazena o valor na posi��o i do vetor 1*/
	}
	/*vetor2*/
	for(i=0;i<5;i++)
	{
		printf("Digite um valor para a posi��o (%d) do vetor 2  ",i);
		scanf("%lf", &vetor2[i]); /*armazena o valor na posi��o i do vetor 2*/
	}
	/*Produto entre os vetores*/
	resultado = 0.0; /*vai ser a vari�vel acumuladora.zerar para evitar erros*/
	
	for(i=0;i<5;i++) /*clocando dentro do la�o for, garanto que cada posi��o ser� multiplicada*/
	{
		resultado = resultado + (vetor1[i]*vetor2[i]);
		printf("O resultado da (%d)multiplica��o:\n%lf x %lf = %lf\n",i+1,vetor1[i], vetor2[i],vetor1[i]*vetor2[i]);
	}
	
	printf("\n\n O resultado final eh:  %lf", resultado);
}
