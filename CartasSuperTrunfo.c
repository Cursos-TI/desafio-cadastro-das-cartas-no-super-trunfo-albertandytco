#include <stdio.h> 

    int main (){

        // inserindo as variáveis utilizadas nas cartas 1 e 2
        char estado, estado2;
        char codigo[3], codigo2[3];
        char cidade[50], cidade2[50]; 
        int populacao, pontosturisticos, populacao2, pontosturisticos2; 
        float areakm, pib, areakm2, pib2, densidade1, densidade2, pibpercapta1, pibpercapta2;
        
            
        //solicitando informacoes ao usuario da carta 1
        printf("Insira as informações da carta 1: \nEstado: "); 
        scanf(" %c", &estado); 

        printf("Código da carta: "); 
        scanf("%s", codigo); 

        printf("Nome da cidade: "); 
        scanf("%s", cidade); 

        printf("População: "); 
        scanf(" %d", &populacao); 

        printf("Área em Km²: "); 
        scanf(" %f", &areakm); 

        printf("PIB: "); 
        scanf(" %f", &pib); 

        printf("Número de pontos turisticos: ");
        scanf(" %d", &pontosturisticos); 

        
        //solicitando informaçoes ao usuario da carta 2
        printf("Insira as informações da carta 2: \nEstado: "); 
        scanf(" %c", &estado2); 

        printf("Código da carta: "); 
        scanf("%s", codigo2); 

        printf("Nome da cidade: "); 
        scanf("%s", cidade2); 

        printf("População: "); 
        scanf(" %d", &populacao2); 

        printf("Área em Km²: "); 
        scanf(" %f", &areakm2); 

        printf("PIB: "); 
        scanf(" %f", &pib2); 

        printf("Número de pontos turisticos: ");
        scanf(" %d", &pontosturisticos2); 

        //inserindo calculos da densidade e do pibpercapta
        densidade1 = populacao / areakm;
        pibpercapta1 = (pib * 1000000000.0) / populacao;

        densidade2 = populacao2 / areakm2;
        pibpercapta2 = (pib2 * 1000000000.0) / populacao2;

        //imprimindo carta 1 e carta 2   
        printf("Carta 1: \n Estado: %c\n Codigo da carta: %s\n Nome da cidade: %s\n População: %d\n Área em Km²: %.2f km²\n PIB: %.2f Bilhoes de reais\n Número de pontos turisticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capta: R$ %.2f\n ", 
            estado, codigo, cidade, populacao, areakm, pib, pontosturisticos, densidade1, pibpercapta1); 
        printf("Carta 2: \n Estado: %c\n Codigo da carta: %s\n Nome da cidade: %s\n População: %d\n Área em Km²: %.2f km²\n PIB: %.2f Bilhoes de reais\n Número de pontos turisticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capta: R$ %.2f\n", 
            estado2, codigo2, cidade2, populacao2, areakm2, pib2, pontosturisticos2, densidade2, pibpercapta2); 

        

        return 0; 

    }