	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	#include <math.h>
	#include <time.h>
	#include <string.h>
	
	/*FUN��O DESSE PROGRAMA: prod entre matrizes multidimensionais quadradas*/
	/*DATA: 07/05 */
	
	main()
	{
	setlocale(LC_ALL,"");
    
    int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}}, 
	mat2[3][3]={{1,2,3},{4,5,6},{7,8,9}},
	mat3[3][3],
	i,prod,L,C,E;
    int n=3;
    /*Imprimir matriz 1*/
    printf("Matriz 1\n");
    for(L=0;L<n;L++)
	{
	
	 for(C=0;C<n;C++)
	 {
	 
	  printf("%d\t",mat1[L][C]);
     }
     printf("\n");
     
     
    }
    printf("\n\n");
    /*Imprimir matriz 2*/
    printf("Matriz 2\n");
    for(L=0;L<n;L++)
	{
	
	 for(C=0;C<n;C++)
	 {
	 
	  printf("%d\t",mat2[L][C]);
     }
     printf("\n");
    }
    /*Algoritmo para multiplicar matrizes*/
	/*la�o para a linha da mat1*/ 
	for(L=0; L<n;L++)
	{
	
	/*la�o para coluna da mat2*/
	for(C=0;C<n;C++)
	{
	prod=0; /*zerar a vari�vel acumuladora a cada coluna que a linha multiplica*/
	/*la�o para os elementos da linha e da coluna*/
	for(E=0;E<n;E++)
	{
	
	prod=prod+ mat1[L][E]*mat2[E][C];/*n�o muda a linha e a coluna, mudam os elementos das linhas e das colunas*/
	/*prod acumula os valores:prod= 1�L1*1�C1 + 2�L1*2�C1 + 3�L1*3�C1*/
	/*Depois disso, passa pra pr�xima itera��o. 2�Linha*2�Coluna*/
	mat3[L][C]=prod;
    }
    }
    }
    printf("\n\n");
    printf("Matriz 3\n");
	for(L=0;L<n;L++)
	{
	
	 for(C=0;C<n;C++)
	 {
	 
	  printf("%d\t",mat3[L][C]);
     }
     printf("\n");
    }
   }  
