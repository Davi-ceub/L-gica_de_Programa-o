#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
int cod;
printf("\n digite o cod: ");
scanf("%d",&cod);
  switch(cod){
  	case 100:
  		printf("Produto: detergente e valor:R$ 1.59");
  		break;
  		
  	case 101:
  		printf("Produto: esponja e valor: R$ 4.59");
  		break;
  		
  	case 102:
  		printf("Produto: la de aco e valor: R$ 1.79");
  		break;
  		
  	default:
  		printf("codigo invalido");
  		break;
  		
  		}
  
}
