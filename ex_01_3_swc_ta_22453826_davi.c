#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
int main() {
int dia;
printf("\n informe o dia no intervalo de 1 a 7: ");
scanf("%d",&dia);
switch(dia){
	case 1:
		printf("Final de semana\n");
		break;
		
	case 2:
		printf("Dia util\n");
		break;
		
	case 3:
		printf(" Dia util\n");
		break;
		
	case 4:
		printf("Dia util\n");
		break;
		
	case 5:
		printf("Dia util\n");
		break;
		
	case 6:
		printf("Dia util\n");
		break;
	
	case 7:
		printf("Final de semana\n");
		break;
	
		case 8:
		printf("Dia invalido\n");
		break;
   }
 }
