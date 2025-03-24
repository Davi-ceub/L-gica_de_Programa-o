#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int mat[3][3];
int i,x,k;
for(i=0;i<3;i++)
for(x=0;x<3;x++)
{
printf("\n digite o valor %d da linha %d: ",x+1,i+1);
scanf("%d",&mat[i][x]);
}
for(i=0;i<3;i++)
for(x=0;x<3;x++)
printf("\n [%d][%d]=[%d]",x+1,i+1,mat[i][x]);
{
printf("\n informe o valor da variavel k: ");
scanf("%d",&k);
}
for(i=0;i<3;i++)
for(x=0;x<3;x++)
printf("\n [%d] * %d=[%d]",mat[i][x],k,mat[i][x]*k);
}

