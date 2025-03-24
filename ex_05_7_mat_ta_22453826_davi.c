#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int i,x,soma=0,somacoluna[5]={0};
int vet[4][5];
for(x=0;x<5;x++){
for(i=0;i<4;i++){
printf("\n digite o valor %d da coluna %d: ",i+1,x+1);
scanf("%d",&vet[i][x]);
somacoluna[x]+=vet[i][x];
soma+=vet[i][x]; 
}
}
for(x=0;x<5;x++)
printf("\n a soma da linha %d e %d",x+1,somacoluna[x]);
printf("\n a soma total e %d",soma);
}
