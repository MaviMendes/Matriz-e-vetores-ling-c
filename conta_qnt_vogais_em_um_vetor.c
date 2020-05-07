	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	#include <math.h>
	#include <time.h>
	#include <string.h>
	/*FUNÇÃO DESSE PROGRAMA:Comparar vetores e contar quantas vogais ou caracteres específicos tem */
	/*DATA: 27/04 */
	
	main()
	{ 
	
	setlocale(LC_ALL,"");
	
	char msg[100];
	char vogais[]="AEIOUaeiou";
	int i,j;
	int num=5;
	int cont[100];
	printf("Digite uma msg:\t"); gets(msg);
	
	for(i=0;i<num;i++)
	cont[i]=0;/*Precisar ZERAR a contadora, caso contrário ela acumula valor!*/
	
	 for(i=0; msg[i];i++)
	  
	  {for(j=0;j<num;j++)
	   if(msg[i]==vogais[j])
            cont[j]++;
      }
      for(i=0;i<5;i++)
    printf("Quantidade de caracteres %c é %d\n",vogais[i],cont[i]);
}
	
