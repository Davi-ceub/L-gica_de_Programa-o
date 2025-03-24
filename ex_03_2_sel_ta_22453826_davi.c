#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
float x;
printf("\n informe o valor de x: ");
scanf("%f",&x);
if(x==0)
     {printf("o valor %.2f e nulo x=0",x,x=0);}
else
if(x>0)
     {printf("o valor %.2f e positivo e o dobro de seu valor e 2*%.2f=%.2f",x,x,2*x);}
else  
     {printf("o valor %.2f e negativo e o triplo de seu valor e 3 * %.2f=%.2f",x,x,3*x);}

}
