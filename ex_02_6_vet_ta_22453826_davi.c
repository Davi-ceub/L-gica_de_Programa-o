#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(void)
{
int i;
int vet[4];
for(i=0;i<4;i++){
printf("\n o valor do numero %d e: ",i);
scanf("%d",&vet[i]);
}
for(i=3;i>=0;i--){
printf("\n o valor de %d e %d",i,vet[i]);
}
}
