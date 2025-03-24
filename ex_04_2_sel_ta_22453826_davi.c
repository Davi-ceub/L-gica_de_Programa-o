#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
char genero;
float altura,peso;
printf("\n informe sua altura em metros: ");
scanf("%f",&altura);

printf("\n informe o seu genero no formato('m' para masculino e 'f' para feminino): ");
scanf(" %c",&genero);
if(genero=='m') {
peso=(72.7*altura) -58;
   {printf("o peso ideal para o genero m e=(72.7*%.2f) -58=%.2f kg",altura,peso);}
}else
if(genero=='f'){
peso=(62.1*altura) -44.7;
   {printf("o peso ideal para o genero f e=(62.1*%.2f) -44.7=%.2f kg",altura,peso);}
}else
   {printf("Erro: genero invalido. Favor inserir 'm' ou 'f'");}
	
	   	
}
