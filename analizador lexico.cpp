#include <ctype.h>
#include <stdio.h>


int main ()

{
	int i=0;
	char str[99];
	printf("escribe una frase: \n");
	scanf("%[^\n]",str);
	
	while (str[i])
{
	if(isalpha(str[i])) printf("%c letra del alfabeto\n", str[i]);
	else if (isdigit(str[i])) printf("%c numero\n", str[i]);
	else if (isspace(str[i])) printf("%c espacio en blanco\n", str[i]);
	else if (ispunct(str[i])) printf("%c caracter\n", str[i]);
	else printf("%c sin fallos\n");
	i ++;
}
return 0;
}
