#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
float pi,r,area;
printf("\n digite o valor de r: ");
scanf("%f",&r);
printf("\n digite o valor de pi: ");
scanf("%f",&pi);
area=pi*r*r;
printf("\n o resultado da area %.2f * (%.2f)^2  =%.2f",pi,r,area);
}


