#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
float nota1,nota2,media;
printf("\n digite o valor da nota1: ");
scanf("%f",&nota1);
printf("\n digite o valor da nota2: ");
scanf("%f",&nota2);
media=(nota1+nota2)/2;
printf("\n o resultado de (%.1f+%.1f)/2=%.2f",nota1,nota2,media);	
}

