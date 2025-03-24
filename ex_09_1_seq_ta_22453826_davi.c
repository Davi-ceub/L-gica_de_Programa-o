#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
float pi,R,volume;
printf("\n digite o valor de R: ");
scanf("%f",&R);
printf("\n digite o valor de pi: ");
scanf("%f",&pi);
volume=(4*pi*R*R*R)/3;
printf("\n O volume da esfera de raio R  (4 * %.2f * (%.2f)^3)/3=%.2f",pi,R,volume);	
}
