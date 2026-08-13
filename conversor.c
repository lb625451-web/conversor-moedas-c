#include<stdio.h>

int main(){
int decisao=1;
float valor;
float dolar;
float euro;
float iene;
float kwanzas;


while (decisao!=5)
{


printf("----------------------------------------------\n");
printf("        concersor de moedas            \n ");
printf("----------------------------------------------\n");
printf("\n");
printf("\n");
printf("Bem vindo ao conversor de moedas para o real $\n ");
printf("no momento temos quatro moedas\n disponibilizada para fazer a conversão *\n");
printf("Moedas disponivel:\nDólar americano(USD)\nEuro(EUR)\nIene(JPY)\nKwanzas");
printf("\n");
printf("\n");
printf("-------------------------------------------------\n");
printf("Qual o valor deseja converter?\n");
scanf("%f",&valor );
printf("-------------------------------------------------\n");
printf("\n");
printf("\n");

printf("-----------------------------------------------\n");
printf("Qual moeda deseja converter para o real?\n");
printf("Dólar americano (1)\n");
printf("Euro (2)\n");
printf("Iene (3)\n");
printf("Kwanza (4)\n");
printf("Sair (5)\n");
printf("-------------------------------------------------\n");
scanf("%d",&decisao);
printf("\n");
printf("\n");

  dolar= valor * 5.21;
// calculo euro;
 euro= valor *6.00;
//calculo iene;
iene = valor * 0.032;
//calculo keanzas;
 kwanzas = valor * 0.0057;

printf("\n");
printf("\n");
switch (decisao)
{
case 1:
    printf("você tem %.2f em real\n",dolar);
    break;
case 2:
    printf("você tem %.2f em real\n",euro);
    break;
case 3:
    printf("você tem %.2f em real\n",iene);
    break;
case 4:
    printf("você tem %.2f em real\n",kwanzas);
    break;
case 5:
    printf("você está saindo do progama\n obrigado");
break;
}
}



return 0;
















}