#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int i,x;
int vet[5][5],mat[5][5],soma[5][5];
for(i=0;i<5;i++)
for(x=0;x<5;x++)
{
printf("\n digite o valor %d da coluna %d: ",i+1,x+1);
scanf("%d",&vet[i][x]);
}
for(i=0;i<5;i++)
for(x=0;x<5;x++)
{
printf("\n digite o valor %d da coluna %d: ",i+1,x+1);
scanf("%d",&mat[i][x]);
}
for(i=0;i<5;i++){
for(x=0;x<5;x++){
soma[i][x]=vet[i][x] + mat[i][x];
printf("\n a soma e %d",soma[i][x]);
}
}
}

