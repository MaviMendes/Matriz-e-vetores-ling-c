#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>
/*FUN��O DESSE PROGRAMA:Mostra elementos com maior e menor freq na matriz*/
/*DATA: 23/04 */ /*obs: maior elemento t� dando errado*/
#define MAX 100
main()
{
	setlocale(LC_ALL,"");
  int matriz[MAX][MAX],linhas,colunas,i,j,k,l;/*i,j,k,l s�o para os FOR*/
  int max, max_freq;/*elemento de maior freq, numero de vezes que ele aparece*/
  int min,min_freq;/*elemento de menor freq, numero de vezes que ele aparece*/
  int freq; /*usada para descobrir a frequ�ncia de um n�mero*/
  
  printf("N�mero m�ximo de linhas e colunas da matriz: max = %d",MAX); scanf("%d %d", &linhas, &colunas);
  printf("Digite uma matriz\n");
  
  for(i=0;i<linhas;i++)
   for(j=0;j<colunas;j++)
	scanf("%d", &matriz[i][j]);
	
  for(i=0;i<linhas;i++){
  	for(j=0;j<colunas;j++){ /*vamos calcular a freq do valor matriz[i][j] na matriz*/
  		freq = 0; /*vari�vel acumuladora*/
  		for(k=0;k<linhas;k++)
  			for(l=0;l<colunas;l++){
  				if(matriz[i][j]==matriz[k][l])
  				freq++; /*incrementa a freq, caso ache ocorr�ncia do numero matriz[i][j]em algum lugar da matriz*/
			  }
		  
		  if(freq>max_freq)
 /*Se a freq encontrada for maior que a frequ�ncia vista anteriormente, atualiza qual a maior freq vista anteriormente
 e quem � o valor que tem essa frequ�ncia*/
  { /*mex_freq come�a no zero*/
  	max_freq = freq;
  	max = matriz[i][j];
  }
  if(freq<min_freq || i==0 && j==0)
  /*se a freq encontrada for menor do que a menor freq vista anteriormente ou esse for o primeiro elemento da matriz
  (n�o se sabe qual a menor frequ�ncia vista anteriormente) atualiza qual a menor freq vista anteriormente e quem � o valor que tem essa freq*/
  {
  	min_freq = freq;
  	min = matriz[i][j];
  }
  		
	  }
  }
  
 printf("Elemento com maior frequ�ncia: %d (%d vezes)\n",max,max_freq);
 printf("Elemento com menor frequ�ncia: %d (%d vezes)", min, min_freq);
  
}
