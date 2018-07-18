#include <ctype.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;


int main ()

{
	int i=0;
	char str[99];
	cout << "escribe una frase: \n";
	cin >> str;
	
	while (str[i])
{
	if(isalpha(str[i])) cout << " letra del alfabeto\n"<< str[i];
	else if (isdigit(str[i])) cout << " numero\n"<< str[i];
	else if (isspace(str[i])) cout << " espacio en blanco\n"<< str[i];
	else if (ispunct(str[i])) cout << " caracter\n"<< str[i];
	else cout <<" sin fallos\n";
	i ++;
}
return 0;
}
