#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main(void)
{
int a,b,c;
float x,raizq,delta;
printf("\n forneca os valores de a,b,c: ");
scanf("%d%d%d",&a,&b,&c);
x=(-b+- (delta))/2*a;
delta=(b*b-4*a*c);
if(delta==0)
    {printf("a equacao possui duas raizes iguais",a,b,c,delta);}
if(delta>0)
    {printf("a equacao possui duas raizes diferentes",a,b,c,delta);}
else
if(delta<0)
    {printf("nao possui raizes reais");}
}    
	
	


