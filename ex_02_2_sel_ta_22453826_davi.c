#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
 int x,y,maior,menor;
 printf("\n digite os valores de x e y: ");
 scanf("%d%d",&x,&y);
 if(x==y)
    {printf("os valores %d e %d sao iguais",x,y);}
else
 if(x>y)
    {printf("os valores em ordem decrescente do maior ao menor sao %d e %d",x,y);}
else
    {printf("os valores em ordem decrescente do maior ao menor sao %d e %d",y,x);}

}
