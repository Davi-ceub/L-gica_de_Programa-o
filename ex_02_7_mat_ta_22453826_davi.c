#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
void main(void)
{
int i,x;
int vet[3][4];
for(x=0;x<4;x++)
for(i=0;i<3;i++)
{
printf("\n digite o valor %d da coluna %d: ",i+1,x+1);
scanf("%d",&vet[i][x]);
}
for(x=0;x<4;x++)
for(i=0;i<3;i++)
{
printf("\n o valor %d da coluna %d e=%d",i+1,x+1,vet[i][x]);
}
}
