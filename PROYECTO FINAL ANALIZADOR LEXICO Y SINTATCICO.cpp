
/*Proyecto Final de Compiladores
Analizador Sintactico y Lexico
Integrantes:
  Alexander Morgan
  Clara Balanta
  Luis Rodriguez
*/

#include <cctype>
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

/*   Tabla de Simbolos
[!,",#,$,%,&,/,(,),=,?,¡,¨,*,Ñ,[;,:,_,-,.,~,`,^,+]*/

int  main ()

/*Compilador Sintactico y Lexico. En donde se le pide a traves de teclado las letras, numeros o simbolos y este lo ordena alfabeticamente
y en el caso de los numeros de mayor a menor.*/
{
/*Declaracion de las variables (str) y tiene una capacidad de 99 caracteres*/
int i = 0 ;
char str [99];
char n[99];
cout<<"\t\t\t\t\t Trabajo final de Compiladores \n";
cout<<"\t\t\t\t\t Analizador Sintactico y Lexico \n";
cout<<"\n\n Integrantes: \n";
cout<<"\t\t Alexander Morgan \n";
cout<<"\t\t Clara Balanta \n";
cout<<"\t\t Luis Rodriguez \n";
cout<<"\n\nIntroduzca los caracteres que desee analizar: \n";
cin.getline(str,90);

while(str[i])
{
/*Isalpha es una funcion que detect Cuando nuestros caracteres pertenecen al alfabeto.*/
if ( isalpha (str [i])) {
  cout<<str[i]<<"\tLetra"<<endl;
}
/*Isdigit es una funcion que detecta los numeros de nuestra cadena.
Isspace los espacios en blanco.
Ispunct los simbolos de nuestro programa.
Esto vendria siendo nuestro analizador Lexico de nuestro programa.*/
else  if ( isdigit (str [i])) cout<<str[i]<<"\tNumero"<<endl;
else  if ( isspace (str [i])) cout<<str[i]<<"\tEspacio en blanco"<<endl;
else  if ( ispunct (str [i])) cout<<str[i]<<"\tSimbolo"<<endl;
else  cout<<"sin fallos"<<endl;
i ++;
}

/*Strlen que es una variable que define el tamaño total de nuestra cadena de caracteres. (Char)*/
int lng =  strlen(str);
char temp;
/*Mediante arreglos y luego de haber clasificado nuestras variables estas se ordenan ya sea en orden alfabetico o numerico mediante los siguientes for.*/
for (int i =0; i < lng; i++)
for (int j = i+1; j < lng; j++)
if (str[i]>str[j])
{
temp = str[i];
str[i] = str[j];
str[j] = temp;

}
/*Ya en este punto luego de haber pasado el analizador lexico y los diferentes for de clasificacion ya nos muestra nuestros caracteres 
introducidos por consola de manera ordenada.
Esto vendria siendo nuestro analizador Sitactico*/
cout<<"\n\nLos caracteres ordenados quedarian de la siguiente manera: \n"<<endl;
for (int i =0; i < lng; i++)
str[i];
cout<<str;
return  0 ;
}

