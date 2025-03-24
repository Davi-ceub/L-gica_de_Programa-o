#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
int i,soma=0;
printf("\n os valores entre 30 e 5 que podem ser divididos por 3 sao: ");
for (i=30;i>=5;i--){
if(i%3==0){
printf("%d\n",i);
soma+=i;
 }
}
printf("\n a soma dos valores e %d",soma);
}
