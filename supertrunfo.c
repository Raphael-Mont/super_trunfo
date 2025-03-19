#include <stdio.h>

int main(){

    char estado[50];                //declaração das variaveis 
    char codigoCarta[4];
    char nomeCidade[50];
    int populaçao;
    float area;
    float pib;
    int numeroPontoTuristico;

    char estado2[50];
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populaçao2;
    float area2;
    float pib2;
    int numeroPontoTuristico2;


    printf("Informações da carta 01:\n");      //pedindo informções da carta 01
    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", nomeCidade);             

    printf("Digite a população: \n");
    scanf("%d", &populaçao);
    
    printf("Digite a area: \n");
    scanf("%f", &area);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de ponto turistico: \n");
    scanf("%d", &numeroPontoTuristico);

    
    printf("Informações da carta 02:\n");  // pedindo informações da carta 02
    printf("Digite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populaçao2);
    
    printf("Digite a area: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de ponto turistico: \n");
    scanf("%d", &numeroPontoTuristico2);



    printf("============================================\n");     // imprimir a carta 01
    printf("Carta 01\n");
    printf("Estado: %s\n", estado);  
    printf("Código da carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populaçâo: %d\n", populaçao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de ponto turisticos: %d\n", numeroPontoTuristico);

    printf("============================================\n"); // imprimir a carta 02
    printf("Carta 02\n");
    printf("Estado: %s\n", estado2);  
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populaçâo: %d\n", populaçao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de ponto turisticos: %d\n", numeroPontoTuristico2);


    return 0;

}