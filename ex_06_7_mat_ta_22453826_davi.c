#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int i,x,somalinha[4]={0};
int vet[4][5];
float media=0;
for(i=0;i<4;i++){
for(x=0;x<5;x++){
printf("\n digite o valor %d da linha %d: ",x+1,i+1);
scanf("%d",&vet[i][x]);
somalinha[i]+=vet[i][x];
}
}
for(i=0;i<4;i++){
media=somalinha[i]/5.0;
printf("\n a media da linha %d e %.2f",i+1,media);
}
}



