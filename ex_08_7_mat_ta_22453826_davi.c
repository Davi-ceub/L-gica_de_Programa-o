#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
void main(void)
{
char nome[25][50];
int i,x,maiuscula=0;
for(i=0;i<25;i++)
{
printf("\n digite o %d nome: ",i+1);
scanf(" %s",&nome[i]);
}
for(i=0;i<25;i++){
for(x=0;nome[i][x]!='\0';x++){
if(nome[i][x]>='a' && nome[i][x]<='z'){
nome[i][x]=nome[i][x] - ('a' - 'A');
maiuscula++;
}
}
if(strcmp(nome[i],"MARIA") == 0){
printf("\n nome maria encontrado na linha %d",i+1);
}
}
printf("\n a quantidade de caracteres maiusculos foram %d",maiuscula);
}


