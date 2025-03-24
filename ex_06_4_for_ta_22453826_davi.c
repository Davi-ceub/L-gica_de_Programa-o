#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
unsigned long int x,soma;
printf("\n digite um numero do tipo unsigned long int: ");
scanf("%lu",&x);
printf("o valor de x e %lu",x);
while(x>0){
soma+=x%10;
x/=10;}
printf(" e a somatoria e %lu",soma);
}
