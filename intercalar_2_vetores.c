	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	#include <math.h>
	#include <time.h>
	#include <string.h>
	/*FUNÇÃO DESSE PROGRAMA:intercalar valores entre vetores*/
	/*DATA: 06/05 */
	
	main()
{    	setlocale(LC_ALL,"");
	int vet1[10]={11,22,33,44,55,66,77,88,99,100};
	int vet2[10]={10,20,30,40,50,60,70,80,90,110};
	int vet3[20],i,j,p;/*vai contar as posições do vetor 3*/
	
	
	/*Vetor intercalado: v3[0]=v1[0], v3[1]=v2[0], v3[2]=v1[1],v3[3]=v2[1]*/
	/*Para v1: v3--> arm nas posições 0,2,4,6*/
	p=0;
	for(i=0;i<10;i++)
	{
		vet3[p]=vet1[i];p+=2;
	}
	/*Para v2: v3--> arm nas posições 1,3,5...*/
	p=1;
	for(i=0;i<10;i++)
	{
		vet3[p]=vet2[i];p+=2;
	}
	
	for(i=0;i<20;i++)
	{
		printf("%d , ",vet3[i]);
	}
}
