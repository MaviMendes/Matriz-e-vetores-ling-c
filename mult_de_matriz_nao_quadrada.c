	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	#include <math.h>
	#include <time.h>
	#include <string.h>
	
	/*FUN��O DESSE PROGRAMA: prod entre matrizes multidimensionais*/
	/*DATA: 07/05 */
	
	main()
	{
	setlocale(LC_ALL,"");
    
    int mat1[2][3]={{1,2,3},{4,5,6}}, 
	mat2[3][2]={{1,2},{4,5},{7,8}},
	mat3[2][2],
	i,prod,L,C,E;
    int n=3;/*n e p controlam o n�mero de linha e colunas*/
    int p=2;
    /*Imprimir matriz 1*/
    printf("Matriz 1\n");
    for(L=0;L<p;L++)
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
	
	 for(C=0;C<p;C++)
	 {
	 
	  printf("%d\t",mat2[L][C]);
     }
     printf("\n");
    }
    /*Algoritmo para multiplicar matrizes*/
	/*la�o para a linha da mat1*/ 
	for(L=0; L<p;L++)/*p porque mat1 tem 2 linhas e defini p=2*/
	{
	
	/*la�o para coluna da mat2*/
	for(C=0;C<p;C++)/*p porque mat2 tem 2 colunas*/
	{
	prod=0; /*zerar a vari�vel acumuladora a cada coluna que a linha multiplica*/
	/*la�o para os elementos da linha e da coluna*/
	for(E=0;E<n;E++)/*n porque cada linha de mat1 tem 3 colunas e cada coluna de mat2 tem 3 linhas*/
	{
	
	prod=prod+ mat1[L][E]*mat2[E][C];/*n�o muda a linha e a coluna, mudam os elementos das linhas e das colunas*/
	/*prod acumula os valores:prod= 1�L1*1�C1 + 2�L1*2�C1 + 3�L1*3�C1*/
	/*Depois disso, passa pra pr�xima itera��o. 2�Linha*2�Coluna*/
	mat3[L][C]=prod;
    }
    }
    }
    printf("\n\n");
    printf("Matriz 3\n");/*A � 2x3 e B � 3x2, ent�o C � 2x2*/
	for(L=0;L<p;L++)
	{
	
	 for(C=0;C<p;C++)
	 {
	 
	  printf("%d\t",mat3[L][C]);
     }
     printf("\n");
    }
   }  

