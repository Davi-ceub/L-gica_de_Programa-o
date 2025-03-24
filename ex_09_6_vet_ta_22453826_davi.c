#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main(void)
{
int i,vet1[20],vet2[20],resp[20];
char operacoes[20];
printf("\n digite os valores do primeiro vetor: ");
for(i=0;i<20;i++){
scanf("%d",&vet1[i]);
}
printf("\n digite os valores do segundo vetor: ");
for(i=0;i<20;i++){
scanf("%d",&vet2[i]);
}
printf("\n indique a operacao: ");
for(i=0;i<20;i++){
scanf("%c ",&operacoes[i]);
}
for(i=0;i<20;i++){
switch(operacoes[i]){
     case '+':
     	resp[i]= vet1[i] + vet2[i];
     	break;
     case '-':
     	resp[i]= vet1[i] - vet2[i];
     	break;
     case '*':
     	resp[i]= vet1[i] * vet2[i];
     	break;
     case '/':
     	resp[i]= vet1[i] / vet2[i];
     	break;
}
}
printf("\n resp: ");
for(i=0;i<20;i++){
printf("\n %d %c %d= %d",vet1[i],operacoes[i],vet2[i],resp[i]);
}

}

