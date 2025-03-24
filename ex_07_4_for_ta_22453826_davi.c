#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int valorinicial,valorfinal,i;
printf("\n informe o valor inicial: ");
scanf("%d",&valorinicial);
printf("\n informe o valor final: ");
scanf("%d",&valorfinal);
printf("\n a sequencia de %d a %d: ",valorinicial,valorfinal);
for(i=valorinicial;i<=valorfinal;i++){
printf("%d",i);
printf("\n");
}
}
