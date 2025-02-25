#include <stdio.h> 

    int main (){

        // inserindo as variáveis utilizadas nas cartas 
        char estado;
        char codigo[3];
        char cidade[20]; 
        int populacao, pontosturisticos; 
        float areakm, pib; 

        //solicitando informacoes ao usuario da carta 1
        printf("Insira as informações da carta 1: \nEstado: "); 
        scanf(" %c", &estado); 

        printf("Código da carta: "); 
        scanf(" %s", &codigo); 

        printf("Nome da cidade: "); 
        scanf(" %s", &cidade); 

        printf("População: "); 
        scanf(" %d", &populacao); 

        printf("Área em Km²: "); 
        scanf(" %f", &areakm); 

        printf("PIB: "); 
        scanf(" %f", &pib); 

        printf("Número de pontos turisticos: ");
        scanf(" %d", &pontosturisticos); 

        
        //solicitando informaçoes ao usuario da carta 2
        char estado2;
        char codigo2[3];
        char cidade2[20]; 
        int populacao2, pontosturisticos2; 
        float areakm2, pib2; 

        printf("Insira as informações da carta 2: \nEstado: "); 
        scanf(" %c", &estado2); 

        printf("Código da carta: "); 
        scanf(" %s", &codigo2); 

        printf("Nome da cidade: "); 
        scanf(" %s", &cidade2); 

        printf("População: "); 
        scanf(" %d", &populacao2); 

        printf("Área em Km²: "); 
        scanf(" %f", &areakm2); 

        printf("PIB: "); 
        scanf(" %f", &pib2); 

        printf("Número de pontos turisticos: ");
        scanf(" %d", &pontosturisticos2); 

        //imprimindo carta 1 e carta 2
        printf("Carta 1: \n Estado: %c\n Codigo da carta: %s\n Nome da cidade: %s\n População: %d\n Área em Km²: %f\n PIB: %f\n Número de pontos turisticos: %d\n", 
            estado, codigo, cidade, populacao, areakm, pib, pontosturisticos); 

        printf("Carta 2: \n Estado: %c\n Codigo da carta: %s\n Nome da cidade: %s\n População: %d\n Área em Km²: %f\n PIB: %f\n Número de pontos turisticos: %d\n", 
            estado2, codigo2, cidade2, populacao2, areakm2, pib2, pontosturisticos2); 

        

        return 0; 

    }