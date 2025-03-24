#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
void main(void)
{
int i=0,x=0;
char vet[20];
printf("\n digite uma palavra: ");
scanf("%s",&vet);
printf("\n informe quantas letras tem: ");
scanf("%d",&x);
printf("a palavra na ordem inversa e: ");
for(i=x-1;i>=0;i--){
printf("\n %c",vet[i]);
}
}

