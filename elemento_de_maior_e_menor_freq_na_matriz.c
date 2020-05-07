#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>
/*FUNÇÃO DESSE PROGRAMA:Mostra elementos com maior e menor freq na matriz*/
/*DATA: 23/04 */ /*obs: maior elemento tá dando errado*/
#define MAX 100
main()
{
	setlocale(LC_ALL,"");
  int matriz[MAX][MAX],linhas,colunas,i,j,k,l;/*i,j,k,l são para os FOR*/
  int max, max_freq;/*elemento de maior freq, numero de vezes que ele aparece*/
  int min,min_freq;/*elemento de menor freq, numero de vezes que ele aparece*/
  int freq; /*usada para descobrir a frequência de um número*/
  
  printf("Número máximo de linhas e colunas da matriz: max = %d",MAX); scanf("%d %d", &linhas, &colunas);
  printf("Digite uma matriz\n");
  
  for(i=0;i<linhas;i++)
   for(j=0;j<colunas;j++)
	scanf("%d", &matriz[i][j]);
	
  for(i=0;i<linhas;i++){
  	for(j=0;j<colunas;j++){ /*vamos calcular a freq do valor matriz[i][j] na matriz*/
  		freq = 0; /*variável acumuladora*/
  		for(k=0;k<linhas;k++)
  			for(l=0;l<colunas;l++){
  				if(matriz[i][j]==matriz[k][l])
  				freq++; /*incrementa a freq, caso ache ocorrência do numero matriz[i][j]em algum lugar da matriz*/
			  }
		  
		  if(freq>max_freq)
 /*Se a freq encontrada for maior que a frequência vista anteriormente, atualiza qual a maior freq vista anteriormente
 e quem é o valor que tem essa frequência*/
  { /*mex_freq começa no zero*/
  	max_freq = freq;
  	max = matriz[i][j];
  }
  if(freq<min_freq || i==0 && j==0)
  /*se a freq encontrada for menor do que a menor freq vista anteriormente ou esse for o primeiro elemento da matriz
  (não se sabe qual a menor frequência vista anteriormente) atualiza qual a menor freq vista anteriormente e quem é o valor que tem essa freq*/
  {
  	min_freq = freq;
  	min = matriz[i][j];
  }
  		
	  }
  }
  
 printf("Elemento com maior frequência: %d (%d vezes)\n",max,max_freq);
 printf("Elemento com menor frequência: %d (%d vezes)", min, min_freq);
  
}
