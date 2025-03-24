#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
float a,soma,count,media;
int i=0;
printf("\n informe o valor de a: ");
scanf("%f",&a);
for (i=a;i>=0;i--) { soma+=i;count++;}
media=soma/count;
printf("media e %.2f",media);
}
