#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 10 /*constante inteira previamente definida com valor 10*/
main()
{
	double mat1[max][max], mat2[max][max], mat3[max][max];
	int i,j,n;
	
	printf("Dimensao das matrizes (max.10): ");
	scanf("%d", &n);/*o tamanho efetivo da matriz é lido na variável n*/
	
	printf("Lendo dados da matriz1, linha por linha\n");
    for(i=0; i<n;i++)
    {
     for(j=0; j<n; j++)
	 {
	  scanf("%lf",&mat1[i][j]);	
	 }	
	}
	
	/*Matriz 2*/
	printf("Lendo os dados da matriz 2, linha por linha \n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%lf", &mat2[i][j]);
		}
	}
/*SOMA DAS MATRIZES*/	
/*Considere que mat3[i][j] = mat1[i][j]+ mat2[i][j] e coloque isso em um laço for!!*/

   for(i=0; i<n; i++)
   {
   	for(j=0; j<n; j++)
   	{
   		mat3[i][j] = mat1[i][j] + mat2[i][j];
    }
   }	

/*Impressão dos dados da matriz 3*/
   printf("Imprimindo os dados da matriz 3 , linha por linha \n");
   for(i=0; i<n; i++)
   {
   	for(j=0; j<n; j++)
   	{
   	 printf("%2lf\t", mat3[i][j]);	
    }
    printf("\n");/*após a impressão de uma linha e suas respectivas colunas, pulará uma linha*/
   }



}   

    
