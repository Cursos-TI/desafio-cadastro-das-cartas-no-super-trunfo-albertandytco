#include <stdio.h> 

int main (){
    // Inserindo as variáveis utilizadas nas cartas 1 e 2
    char estado, estado2;
    char codigo[3], codigo2[3];
    char cidade[50], cidade2[50]; 
    int pontosturisticos, pontosturisticos2; 
    float areakm, pib, areakm2, pib2, densidade1, densidade2, pibpercapta1, pibpercapta2;
    unsigned long int populacao, populacao2; 
            
    // Solicitando informacoes ao usuario da carta 1
    printf("Insira as informações da carta 1: \nEstado: "); 
    scanf(" %c", &estado); 

    printf("Código da carta: "); 
    scanf("%s", codigo); 

    printf("Nome da cidade: "); 
    scanf("%s", cidade); 

    printf("População: "); 
    scanf(" %lu", &populacao); 

    printf("Área em Km²: "); 
    scanf(" %f", &areakm); 

    printf("PIB em bilhões: "); 
    scanf(" %f", &pib); 

    printf("Número de pontos turisticos: ");
    scanf(" %d", &pontosturisticos); 

        
    // Solicitando informaçoes ao usuario da carta 2
    printf("Insira as informações da carta 2: \nEstado: "); 
    scanf(" %c", &estado2); 

    printf("Código da carta: "); 
    scanf("%s", codigo2); 

    printf("Nome da cidade: "); 
    scanf("%s", cidade2); 

    printf("População: "); 
    scanf(" %lu", &populacao2); 

    printf("Área em Km²: "); 
    scanf(" %f", &areakm2); 

    printf("PIB: "); 
    scanf(" %f", &pib2); 

    printf("Número de pontos turisticos: ");
    scanf(" %d", &pontosturisticos2); 

    // Inserindo calculos da densidade e do pibpercapta
    densidade1 = populacao / areakm;
    pibpercapta1 = (pib * 1000000000.0) / populacao;

    densidade2 = populacao2 / areakm2;
    pibpercapta2 = (pib2 * 1000000000.0) / populacao2;

    // Função para calcular o inverso da densidade utilizado no calculo de super poder
    float inverso_densidade1 = (densidade1 > 0) * (1 / densidade1); 
    float inverso_densidade2 = (densidade2 > 0) * (1 / densidade2);

    // Calculando super poder das cartas 1 e 2
    float superpoderc1 = (float)populacao + areakm + pib + pontosturisticos + inverso_densidade1 + pibpercapta1; 
    float superpoderc2 = (float)populacao2 + areakm2 + pib2 + pontosturisticos2 + inverso_densidade2 + pibpercapta2; 

    // Imprimindo carta 1 e carta 2   
    printf("Carta 1: \n Estado: %c\n Codigo da carta: %s\n Nome da cidade: %s\n População: %lu\n Área em Km²: %.2f km²\n PIB: %.2f Bilhoes de reais\n Número de pontos turisticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capta: R$ %.2f\n Superpoder: %.2f\n", 
            estado, codigo, cidade, populacao, areakm, pib, pontosturisticos, densidade1, pibpercapta1, superpoderc1); 
    printf("Carta 2: \n Estado: %c\n Codigo da carta: %s\n Nome da cidade: %s\n População: %lu\n Área em Km²: %.2f km²\n PIB: %.2f Bilhoes de reais\n Número de pontos turisticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capta: R$ %.2f\n Superpoder: %.2f\n", 
            estado2, codigo2, cidade2, populacao2, areakm2, pib2, pontosturisticos2, densidade2, pibpercapta2, superpoderc2); 

         
    // Comparação das cartas
    printf("Comparação das cartas: \n");
    printf("Vencedor em populacao: Carta %d\n", (populacao > populacao2) * 1 + (populacao <= populacao2) * 2);
    printf("Vencedor em area: Carta %d\n", (areakm > areakm2) * 1 + (areakm <= areakm2) * 2);
    printf("Vencedor em PIB: Carta %d\n", (pib > pib2) * 1 + (pib <= pib2) * 2);
    printf("Vencedor em pontos turisticos: Carta %d\n", (pontosturisticos > pontosturisticos2) * 1 + (pontosturisticos <= pontosturisticos2) * 2);
    printf("Vencedor em Densidade Populacional: Carta %d\n", (densidade1 < densidade2) * 1 + (densidade1 >= densidade2) * 2);
    printf("Vencedor em PIB per capta: Carta %d\n", (pibpercapta1 > pibpercapta2) * 1 + (pibpercapta1 <= pibpercapta2) * 2);
    printf("Vencedor em Super Poder: Carta %d\n", (superpoderc1 > superpoderc2) * 1 + (superpoderc1 <= superpoderc2) * 2);
    

    return 0; 
}
