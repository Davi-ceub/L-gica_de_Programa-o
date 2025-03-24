#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
float Comprimento,r,pi;
printf("\n digite o valor de r: ");
scanf("%f",&r);
printf("\n digite o valor de pi: ");
scanf("%f",&pi);
Comprimento=2*pi*r;
printf("\n o resultado 2 * %.2f * %.2f=%.2f",r,pi,Comprimento);	
}

