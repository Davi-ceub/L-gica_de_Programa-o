#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
float pi,r,h,area;
printf("\n digite o valor de pi: ");
scanf("%f",&pi);
printf("\n digite o valor de r: ");
scanf("%f",&r);
printf("\n digite o valor de h: ");
scanf("%f",&h);
area=2*pi*r*h;
printf("\n o resultado da area lateral do cilindro 2 * %.2f * %.2f * %.2f=%.2f",pi,r,h,area);	
}
