#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
float media,soma,x;
int n,i;
printf("\n informe a quantidade de valores: ");
scanf("%d",&n);
i=0;
while(i<n){
printf("\n informe o %d numero: ",i+1);
scanf("%f",&x);
soma+=x;
i++;
}
media=soma / n;
printf(" a media dos %d numeros e %.2f",n,soma/n);
}
