#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
void main(void)
{
int i,x;
int vet[3][4];
for(i=0;i<3;i++)
for(x=0;x<4;x++)
{
printf("\n digite o valor %d da linha %d: ",x+1,i+1);
scanf("%d",&vet[i][x]);
}
for(i=0;i<3;i++)
for(x=0;x<4;x++)
{
printf("\n o valor %d da linha %d e=%d",x+1,i+1,vet[i][x]);
}
}
