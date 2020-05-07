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
	
	for(i=0; i<5;i++)/*vai da posição 0 até a 4, 5 posições, portanto*/
	{
		printf("Digite um valor para a posição (%d) do vetor 1  ",i);
		scanf("%lf", &vetor1[i]); /*armazena o valor na posição i do vetor 1*/
	}
	/*vetor2*/
	for(i=0;i<5;i++)
	{
		printf("Digite um valor para a posição (%d) do vetor 2  ",i);
		scanf("%lf", &vetor2[i]); /*armazena o valor na posição i do vetor 2*/
	}
	/*Produto entre os vetores*/
	resultado = 0.0; /*vai ser a variável acumuladora.zerar para evitar erros*/
	
	for(i=0;i<5;i++) /*clocando dentro do laço for, garanto que cada posição será multiplicada*/
	{
		resultado = resultado + (vetor1[i]*vetor2[i]);
		printf("O resultado da (%d)multiplicação:\n%lf x %lf = %lf\n",i+1,vetor1[i], vetor2[i],vetor1[i]*vetor2[i]);
	}
	
	printf("\n\n O resultado final eh:  %lf", resultado);
}
