#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int i=0,x=0;
int tempo[7][7]={{0,2,11,6,15,11,1},{2,0,7,12,4,2,15},{11,7,0,11,8,3,13},{6,12,11,0,10,2,1},{15,4,8,10,0,5,13},{11,2,3,2,5,0,14},{1,15,13,1,13,14,0}};
printf("\n 1.osgliath");
printf("\n 2.minas tirith");
printf("\n 3.Edoras");
printf("\n 4.isengard");
printf("\n 5.esgaroth");
printf("\n 6.the shire");
printf("\n 7.valfenda");
printf("\n escolha a cidade de origem e a cidade de destino: ");
scanf("%d%d",&i,&x);
printf("\n a distancia entre a cidade %d e cidade %d = %d",i,x,tempo[i-1][x-1]);
}






