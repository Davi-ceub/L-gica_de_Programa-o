#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
int x;
printf("\n escolha uma opcao de 1 a 3: ");
scanf("%d",&x);
  switch(x){
  	case 1:
  		printf("Fazer check-in");
  		break;
  		
  	case 2:
  		printf("Chamar servico de quarto");
  		break;
  	
  	case 3:
  		printf("Fazer pedido");
  		break;
  	
  	default:
  		printf("opcao invalida");
  		break;
  		
  }
}
