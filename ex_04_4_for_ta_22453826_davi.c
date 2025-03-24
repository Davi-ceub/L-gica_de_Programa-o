#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define values_per_page 25
#define Num_values 50
int main(){
for (int page = 0; page < (Num_values + values_per_page - 1) / values_per_page; page++){
float Celsius,Fahrenheit,i;
char enter;
{
printf("Conversao Fahrenheit-Celsius\n");
printf("Celsius\tFahrenheit\n");
}
for (i = page * values_per_page; i < (page + 1) * values_per_page && i < Num_values; i++) { 
Fahrenheit=i;
Celsius=(5.0/9.0) * (Fahrenheit-32);
printf("%7.2f\t %10.2f\n",Celsius,Fahrenheit);
}
printf("\n digite enter");
getche();
system("cls");
}
}
