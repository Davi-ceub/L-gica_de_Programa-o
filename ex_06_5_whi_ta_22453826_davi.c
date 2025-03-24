#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
int x=0,soma=0;
do{
printf("\n digite quantos numeros desejar: ");
scanf("%d",&x);
if(x>=0){
soma+=x;
}
}while(x>=0);
printf("\n a soma dos numeros e %d",soma);
}




