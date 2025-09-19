#include <stdio.h>

int main() {

    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

printf("\n=====Desafio Supertrunfo=====\n");
    
    printf("Nome do estado: \n");
     printf("são paulo \n");
    printf("Codigo da carta: \n");
     printf("40028922 \n");
    printf("nome da cidade: \n");
     printf("Santo andré \n");
    printf("Ensira o tamanho da sua população: \n");
     scanf("%i", &populacao1);
    printf("ensira a area (em km²): \n");
     scanf("%f", &area1);
    printf("ensira o seu pib: \n");
     scanf("%f", &pib1);
    printf("ensira a quantidade de pontos turisticos: \n");
     scanf("%i", &pontosturisticos1);

float densidade1 = populacao1 / area1;
   
printf("\n=====DADOS DA SEGUNDA CARTA=====\n");

  printf("Nome do estado: \n");
    printf("são paulo \n");
  printf("Codigo da carta: \n");
    printf("40028923 \n");
  printf("nome da cidade: \n");
    printf("Sorocaba\n");
  printf("Ensira o tamanho da sua população: \n");
    scanf("%i", &populacao2);
  printf("Ensira a area (em km²): \n");
    scanf("%f", &area2);
  printf("ensira seu pib: \n");
    scanf("%f", &pib2);
  printf("ensira a quantidade de pontos turisticos: \n");
    scanf("%i", &pontosturisticos2);

float densidade2 = populacao2 / area2;

printf("\n=====RESULTADOS=====\n");    

 printf("\n=====POPULAÇÃO=====\n");

    if (populacao1 > populacao2){
    printf("Carta 1 venceu!\n");
    } else {
    printf("Carta 2 venceu!\n");
    }

 printf("\n=====ÁREA=====\n");

    if (area1 > area2){
    printf("carta 1 venceu!\n");
    }else{
    printf("Carta 2 venceu!\n");
    }

 printf("\n=====PIB=====\n");

    if (pib1 > pib2){
    printf("carta 1 venceu!\n");
    }else{
    printf("Carta 2 venceu!\n");
    }

 printf("\n=====PONTOS TURISTICOS=====\n");

    if (pontosturisticos1 > pontosturisticos2){
    printf("carta 1 venceu!\n");
    }else{
    printf("Carta 2 venceu!\n"); 
    }

printf("\n=====DENSIDADE=====\n"); 
    if(densidade1 < densidade2){
    printf("carta 2 venceu\n");
    }else{
    printf("Carta 1 venceu\n");
    }

}