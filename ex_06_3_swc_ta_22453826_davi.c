#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
int cod;
printf("\n informe o codigo do produto: ");
scanf("%d",&cod);
   switch(cod){
   	  case 1:
   	  	printf("alimento nao perecivel");
   	  	break;
   	  	
   	  case 2:
   	  	printf("alimento perecivel");
   	  	break;
   	  	
   	  case 3:
   	  	printf("vestuario");
   	  	break;
   	  	
   	  case 4:
   	  	printf("limpeza");
   	  	break;
   }
}
