#include<stdio.h>
int main(){
    //informação das cartas
    char estado1, estado2;
    char carta1, carta2;
    char nomeCidade1, nomeCidade2;
    int populacao1, populacao2;
    float areaKm1, areakm2;
    float pib1, pib2;
    int numPontoTuristico1, numPontoTuristico2;
    
    //Dados 1
    printf("Digite o primeiro estado: ");
    scanf("%s", &estado1);
    //printf("O primeiro estado digitado: %s", &estado1);
    
    printf("Digite o código da carta: ");
    scanf("%s", &carta1);
    //printf("O código da primeira carta é: %s", &carta1);
    
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", &nomeCidade1);
    //printf("O nome da cidade é: %s", &nomeCidade1);
    
    printf("Digite número de habitantes: ");
    scanf("%d", &populacao1);
    //printf("O númeoro da populacao é: %d", &populacao1);
    
    printf("Digite a área em km: ");
    scanf("%f", &areaKm1);
    //printf("A área tem: %f", &areaKm1);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    //printf("O PIB é: %f", &pib1);
    
    printf("Digite quantos pontos turisticos: ");
    scanf("%d", &numPontoTuristico1);
    //printf("O número de pontos turisticos é: %d", &numPontoTuristico1);
    
    printf("O primeiro estado digitado: %s\n", &estado1);
    printf("O código da primeira carta é: %s\n", &carta1);
    printf("O nome da cidade é: %s\n", &nomeCidade1);
    printf("O númeoro da populacao é: %d\n", &populacao1);
    printf("A área tem: %f\n", &areaKm1);
    printf("O PIB é: %f\n", &pib1);
    
    //Daddos 2
    
    printf("Digite o segundo estado: ");
    scanf("%s", &estado2);
    //printf("O primeiro estado digitado: %s", &estado1);
    
    printf("Digite o código da carta 2: ");
    scanf("%s", &carta2);
    //printf("O código da primeira carta é: %s", &carta1);
    
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", &nomeCidade2);
    //printf("O nome da cidade é: %s", &nomeCidade1);
    
    printf("Digite número de habitantes 2: ");
    scanf("%d", &populacao2);
    //printf("O númeoro da populacao é: %d", &populacao1);
    
    printf("Digite a área 2 em km: ");
    scanf("%f", &areakm2);
    //printf("A área tem: %f", &areaKm1);
    
    printf("Digite o PIB 2: ");
    scanf("%f", &pib2);
    //printf("O PIB é: %f", &pib1);
    
    printf("Digite quantos pontos turisticos 2: ");
    scanf("%d", &numPontoTuristico2);
    //printf("O número de pontos turisticos é: %d", &numPontoTuristico1);
    
    printf("O segundo estado digitado: %s\n", &estado2);
    printf("O código da segunda carta é: %s\n", &carta2);
    printf("O nome da cidade 2 é: %s\n", &nomeCidade2);
    printf("O númeoro da populacao 2 é: %d\n", &populacao2);
    printf("A área tem: %f\n", &areakm2);
    printf("O PIB é: %f\n", &pib2);
    
    
    
    }