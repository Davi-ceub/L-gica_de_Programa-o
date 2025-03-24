#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
float nota1,nota2,peso1,peso2,media;
printf("\n digite o valor da nota1: ");
scanf("%f",&nota1);
printf("\n digite o valor do peso1: ");
scanf("%f",&peso1);
printf("\n digite o valor da nota2: ");
scanf("%f",&nota2);
printf("\n digite o valor do peso2: ");
scanf("%f",&peso2);
media=(nota1 * peso1 + nota2 * peso2)/(peso1 + peso2);
if(media>=5)              
    {printf("aluno aprovado com media=(%.2f*%.1f+%.2f*%.1f)/(%.1f+%.1f)=%.2f",nota1,peso1,nota2,peso2,peso1,peso2,media);}
else
    {printf("aluno reprovado com media=(%.2f*%.1f+%.2f*%.1f)/(%.1f+%.1f)=%.2f",nota1,peso1,nota2,peso2,peso1,peso2,media);}

}
