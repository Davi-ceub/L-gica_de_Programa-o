#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
int x,y;
printf("\n digite dois valores: ");
scanf("%d%d",&x,&y);
printf("\n x=%d e y= %d",x,y);
x=x+y; // x recebe o valor de y
y=x-y; // y recebe o valor de x
x=x-y;
printf("\n o valor de x=%d e y=%d",x,y);
}

