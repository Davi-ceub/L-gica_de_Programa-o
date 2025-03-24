#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
char genero;
float altura,pesoideal;
printf("\n informe seu genero no padrao (m) para masculino e (f) para feminino: ");
scanf("%c",&genero);
printf("\n informe sua altura: ");
scanf("%f",&altura);
  switch(genero) {
    case ('m'):
pesoideal= 52 + (0.75 *(altura-152.4));
    	printf("o pesoideal e 52 + (0.75 * (%.2f-152.4))=%.2f kg",altura,pesoideal);
    	break;
    	
    case ('f'):
pesoideal= 52 + (0.67 *(altura-152.4));
    	printf("o pesoideal e 52 + (0.67 * (%.2f-152.4))=%.2f kg",altura,pesoideal);
    	break;
    }
}
