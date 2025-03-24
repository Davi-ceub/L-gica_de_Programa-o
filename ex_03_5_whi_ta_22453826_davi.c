#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
float Fahrenheit,Celsius,x,y;
int i;
printf("\n informe o valor de x: ");
scanf("%f",&x);
printf("\n informe o valor de y: ");
scanf("%f",&y);
printf("conversao Fahrenheit-Celsius\n");
printf("Celsius\t Fahrenheit\n");
i=x;
while(i<=y){
Fahrenheit=i;
Celsius=(5.0/9.0) * (Fahrenheit-32);
printf("%.2f\t %.2f\n",Celsius,Fahrenheit);
i++;
}
}
