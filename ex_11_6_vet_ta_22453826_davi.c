#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
void main(void)
{
int i;
char vet[60];
printf("\n digite uma palavra ou frase com ate %d caracteres: ",60);
gets(vet);
i=strlen(vet);
printf("\n a quantidade de caracteres na frase e %d",i);
}
