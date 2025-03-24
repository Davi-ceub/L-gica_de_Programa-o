#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
float Celsius,Fahrenheit,i;
for (i=-10;i<=40;i++){
printf("\n Fahrenheit  e   Celsius ");
Fahrenheit=i;
Celsius=(5.0/9.0) * (Fahrenheit-32);
printf("\n %10.2f\t %7.2f",Fahrenheit,Celsius);
  }
}
