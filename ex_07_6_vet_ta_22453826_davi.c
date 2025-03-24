#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(void)
{
int i,vetA[10],vetB[10],Uniao[20];
for(i=0;i<10;i++){
printf("\n o valor do numero %d e: ",i+1);
scanf("%d",&vetA[i]);
}
for(i=0;i<10;i++){
printf("\n o valor do numero %d e: ",i+1);
scanf("%d",&vetB[i]);
}
for(i=0;i<10;i++){
Uniao[i]=vetA&&vetB;
}
for(i=0;i<10;i++){
printf("\n os valores do vetor Uniao sao: ");
printf("\n %d e %d",vetA[i],vetB[i]);
}
}
