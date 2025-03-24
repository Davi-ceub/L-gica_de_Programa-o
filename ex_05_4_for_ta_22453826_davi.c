#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define conversao_metros_pe 0.3048
int main()
{
int i=0,Pe=0.3048,values_per_page=20;
printf("Conversao metros-pe\n");
printf("metros\t  pe\n");
for (i=0;i<=100;i++){
printf("%d\t %.2f\n",i, i/conversao_metros_pe);	
if((i + 1) % values_per_page == 0){
printf("aperte enter para prosseguir");
getche();
system("cls");
printf("Conversao metros-pe\n");
printf("metros\t  pe\n");
}
}
}
