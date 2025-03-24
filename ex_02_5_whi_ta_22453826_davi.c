#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
float Fahrenheit,Celsius;
int i;
printf("conversao Fahrenheit-Celsius\n");
printf("Celsius\t Fahrenheit\n");
i=32;
while(i<=52){
Fahrenheit=i;
Celsius=(5.0/9.0) * (Fahrenheit-32);
printf("%.2f\t %.2f\n",Celsius,Fahrenheit);
i++;
}
}
