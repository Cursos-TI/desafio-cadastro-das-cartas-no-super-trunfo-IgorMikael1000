#include <stdio.h>

//VARIÁVEIS
char estado1 [20], estado2 [20], codigo1 [20], codigo2 [20], cidade1 [20], cidade2 [20];
int populacao1, populacao2, turismo1, turismo2;
float area1, area2, pib1, pib2, dPopulacional1, dPopulacional2, pibCapita1, pibCapita2;

int main () {

    printf("Seja Bem Vindo ao Cadastro de Cartas do Super Trunfo! \n\n");
        
    //CADASTRO CARTA 1
            
    printf("\nAgora vamos a primeira carta!\n\n");

    printf("Digite o nome do estado:\n");
    scanf("%s", estado1);
    printf("Digite o código da carta:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turísticos da cidade: \n");
    scanf("%d", &turismo1);

    //CALCULOS CARTA 1

    dPopulacional1 = (float) populacao1 / area1; //CALCULO DENSIDADE POPULACIONAL
    pibCapita1 = (float) pib1 / populacao1; //CALCULO PIB PER CAPITA

                
    //EXIBIR A CARTA 1
                                                                        
    printf("\nCarta 1: \n\n");

    printf("Estado: %s \n", estado1);
    printf("Código da carta: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área(Km²): %.2f \n", area1);
    printf("PIB: R$ %.2f \n", pib1);
    printf("Número de pontos turísticos: %d \n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", dPopulacional1);
    printf("PIB per CAPITA: R$ %.2f\n", pibCapita1);
                                                                                
    //CADASTRO CARTA
                                                                                                    
    printf("\nAgora vamos cadastrar a carta 2!\n\n");
   
    printf("Digite o nome do estado:\n");
    scanf("%s", estado2);
    printf("Digite o código da carta:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turísticos da cidade: \n");
    scanf("%d", &turismo2);

    //CALCULO CARTA 2

    dPopulacional2 = (float) populacao2 / area2; //CALCULO DENSIDADE POPULACIONAL
    pibCapita2 = (float) pib2 / populacao2; //CALCULO PIB PER CAPITA
                                                                                
    //EXIBIR CARTA 2
                                                                                                                                                                                
    printf("Carta 2: \n\n");

    printf("Estado: %s \n", estado2);
    printf("Código da carta: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área(Km²): %.1f \n", area2);
    printf("PIB: R$ %.2f \n", pib2);
    printf("Número de pontos turísticos: %d \n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", dPopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibCapita2);
    
    return 0;

}
