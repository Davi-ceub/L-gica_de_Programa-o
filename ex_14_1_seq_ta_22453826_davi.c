#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
float a,b,c;
printf("\n digite o valor de a: ");
scanf("%f",&a);
printf("\n digite o valor de b: ");
scanf("%f",&b);
printf("\n digite o valor de c: ");
scanf("%f",&c);
float media;
media=(a+b+c)/3;
printf("\n o resultado de (%.2f + %.2f + %.2f)/3=%.2f",a,b,c,media);	
}
