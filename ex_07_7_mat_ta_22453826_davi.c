#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int i,x,y,z,somalinha[4]={0};
int vet[4][5];
for(i=0;i<4;i++){
for(x=0;x<5;x++){
printf("\n digite o valor %d da linha %d: ",x+1,i+1);
scanf("%d",&vet[i][x]);
somalinha[i]+=vet[i][x]; 
}
}
for(i=0;i<4;i++){
printf("\n a soma da linha %d e %d",i+1,somalinha[i]);
}
printf("\n digite o maior valor da soma das linhas e em qual linha ele esta: ");
scanf("%d%d",&y,&z);
printf("\n o maior valor e %d e ele esta na linha %d",y,z);
}




