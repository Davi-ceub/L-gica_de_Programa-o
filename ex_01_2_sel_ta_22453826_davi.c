#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
	int dia,mes,ano,idade;
printf("\n informe a data de nascimento no padrao dd/mm/aaaa: ");
scanf("%d/%d/%d",&dia,&mes,&ano);
idade=2024-ano;
if(ano>=16)
         {printf("tem %d anos e pode votar",idade,dia,mes,ano);}
else
         {printf("tem %d anos e nao pode votar",idade,dia,mes,ano);}
         
printf("\n nasceu em %d/%d/%d",dia,mes,ano);
		 
}
