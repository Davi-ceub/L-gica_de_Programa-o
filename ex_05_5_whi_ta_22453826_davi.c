#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int i=0,n=0;
printf("\n informe os numeros desejados: ");
while(1){
scanf("%d",&n);
if(n == -1){
break;
}
i++;
}
printf("a quantidade de numeros e %d",i);
}

