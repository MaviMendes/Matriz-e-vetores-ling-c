#include <stdio.h>
void main ()
{
int count,i;
char str1[100]= "abcde", str2[100];
 /* Aqui o programa le str1 que sera copiada para str2 */
for (count = 0; str1[count]; count++)
str2[count] = str1[count];
str2[count] = '\0';

for(i=0;i<count; i++)
{
	printf("%s",str2);
}
}
