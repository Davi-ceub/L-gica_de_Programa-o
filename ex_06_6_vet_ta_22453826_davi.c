#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(void)
{
int i,vet[100];
for(i=1;i<=100;i++){
if(i%2==0)
  vet[i]=1;
else
  vet[i]=0;
}
for(i=1;i<=100;i++)
printf("\n o numero %d e %d",i,vet[i]);
}
