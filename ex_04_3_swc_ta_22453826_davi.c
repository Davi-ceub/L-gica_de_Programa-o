#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
int x,y,operacao;
printf("\n informe a operacao: ");
scanf("%d",&operacao);
printf("\n informe os valores de x e y: ");
scanf("%d%d",&x,&y);
   switch(operacao){
   	 case 1:
   	 	printf("A soma e %d + %d=%d",x,y,x+y);
   	 	break;
   	 	
   	 case 2:
   	 	printf("A subtracao e %d - %d=%d",x,y,x-y);
   	 	break;
   	 	
   	 case 3:
   	 	printf("A multiplicacao e %d * %d=%d",x,y,x*y);
   	 	break;
   	 	
   	 case 4:
   	 	printf("A divisao e %d/%d=%d",x,y,x/y);
   	 	break;
   	 	
   }
}
