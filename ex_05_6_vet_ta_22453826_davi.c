#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(void)
{
int i=0,vet1[10],vet2[10],soma[10];
for(i=0;i<10;i++){
printf("\n digite o valor %d: ",i+1);
scanf("%d",&vet1[i]);
}
for(i=0;i<10;i++){
printf("\n digite o valor %d: ",i+1);
scanf("%d",&vet2[i]);
}
for(i=0;i<10;i++){
soma[i] = vet1[i] + vet2[i];
}
for(i=0;i<10;i++){
printf("\n a soma posicional do numero %d e %d",i+1,soma[i]);
}
}
