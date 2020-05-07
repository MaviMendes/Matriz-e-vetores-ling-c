#include <stdio.h> 
#include <string.h> 
main()
 { 
char str1[100], str2[100], str3[100]; 
printf ("Entre com uma string: "); 
gets (str1);
 strcpy (str2, str1); /* Copia str1 em str2 */ 
strcpy (str3, "Voce digitou a string "); 
/* Copia "Voce digitou a string" em str3 */
 printf ("\n\n%s%s", str3, str2); 
 }

