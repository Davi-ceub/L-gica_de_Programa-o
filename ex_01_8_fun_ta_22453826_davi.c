#include<stdio.h>
#include<conio.h>
void main(void)
{
int x,y,z;
int potencia(int a,int b);
printf("\n digite o valor de x: ");
scanf("%d",&x);
printf("\n digite o valor de y: ");
scanf("%d",&y);
z=potencia(x,y);
printf("\n o numero %d elevado a %d e igual a %d",x,y,z);
}
int potencia(int a,int b)
{
int result;
result=pow(a,b);
return(result);
}
