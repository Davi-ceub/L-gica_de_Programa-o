#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(void)
{
int i;
float media=0,soma=0;
float vet[10];
for(i=1;i<=10;i++){
printf("\n digite a nota do aluno %d: ",i);
scanf("%f",&vet[i]);
soma+=vet[i];
media=soma/10;
}
for(i=1;i<=10;i++)
printf("\n a nota do aluno %d e %.2f",i,vet[i]);
printf("\n a quantidade de notas e %d",i-1);
printf("\n a media da turma e %.2f",media);
}
