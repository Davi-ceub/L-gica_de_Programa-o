#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(void)
{
int i,vetA[10],vetB[10],vetC[10];
for(i=0;i<10;i++){
printf("\n o valor do numero %d e: ",i+1);
scanf("%d",&vetA[i]);
}
for(i=0;i<10;i++){
printf("\n o valor do numero %d e: ",i+1);
scanf("%d",&vetB[i]);
}
for(i=0;i<10;i++){
printf("\n os valores dos vetores A e B sao: ");
printf("\n %d e %d",vetA[i],vetB[i]);
}
printf("\n digite os valores em comum de A e B: ");
for(i=0;i<5;i++){
scanf("%d",&vetC[i]);
}
printf("\n os valores em comum sao:");
for(i=0;i<5;i++){
printf("\n %d",vetC[i]);
}
}
