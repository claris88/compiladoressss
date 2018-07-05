 #include <stdio.h>
#include <conio.h>
#include <string.h>

int contar_vocales(char *);


int main(){
   
char cad[300];
int longi;
float porc;

printf("Ingrese el texto a contar vocales : ");
gets(cad);
longi = strlen(cad);
printf("La cantidad de Vocales: %d",contar_vocales(cad));
printf("\nCantidad de caracteres: %d",longi);
getch();


}

//-- Funcion:
       
int contar_vocales(char *cad){
   
int cont=0;
char *aux=cad;

 while(*aux){    
   if(*aux=='a'||*aux=='e'||*aux=='i'||*aux=='o'||*aux=='u')
     cont++;
       aux++;              
   }//función
 

return cont;

}//contar_vocales
