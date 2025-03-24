#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
int c,v;
printf("\n informe o valor de c: ");
scanf("%d",&c);
printf("\n informe o valor de v: ");
scanf("%d",&v);
if(c==v)
   {printf("os valores sao iguais  c=%d e v=%d",c,v);}
if(c>v)
   {printf("teve lucro c=%d e v=%d",c,v);}
else
if(c<v)
   {printf("teve prejuizo c=%d e v=%d",c,v);}

}
