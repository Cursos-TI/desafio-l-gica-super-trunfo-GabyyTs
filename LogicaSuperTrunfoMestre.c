#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //VARIÁVEIS
    char estado1, estado2;
    char codigo1 [20];
    char codigo2 [20];
    char nome1 [20];
    char nome2 [20];
    unsigned long int populacao1, populacao2;
    int pontost1, pontost2, atributo1, atributo2, resultado1, resultado2;
    float area1, area2, pib1, pib2;
    float dp1, dp2, ppc1, ppc2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("*** BEM VINDO AO SUPER TRUNFO! ***\n");

    //CARTA 1
    printf("\nCadastro da carta 1\n");
    printf("Digite a letra inicial de um estado (de 'A' a 'H'): \n");
    scanf(" %c", &estado1);

    printf("Digite a letra inicial do estado escolhido mais um número de 01 a 04 (ex: G04, E02): \n");
    scanf("%s", codigo1);

    printf("Digite o nome de uma cidade localizada no estado escolhido: \n");
    scanf("%s", nome1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite a quatidade de pontos turísticos existentes na cidade: \n");
    scanf(" %d", &pontost1);

    //CARTA 2
    printf("\nCadastro da carta 2\n");

    printf("Digite a letra inicial de um estado (de 'A' a 'H'): \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado mais um número de 01 a 04 (ex: G04, E02): \n");
    scanf("%s", codigo2);

    printf("Digite o nome de uma cidade localizada no estado escolhido: \n");
    scanf("%s", nome2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quatidade de pontos turísticos que existentes na cidade: \n");
    scanf("%d", &pontost2);

    //CÁLCULOS
    //Cálculos da Carta 1: densidade populacional e PIB per capita
    dp1 = (float) populacao1 / area1;
    ppc1 = (float) pib1 / populacao1;

    //Cálculos da Carta 2: densidade populacional e PIB per capita
    dp2 = (float) populacao2 / area2;
    ppc2 = (float) pib2 / populacao2;

    //Exibição da carta 1
    //CARTA 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área (em km²): %f km²\n", area1);
    printf("PIB: %f milhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontost1);
    printf("Densidade populacional: %f hab/km²\n", dp1);
    printf("PIB per capita: %f reais\n", ppc1);

    //Exibição da carta 2
    //CARTA 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área (em km²): %f km²\n", area2);
    printf("PIB: %f milhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontost2);
    printf("Densidade populacional: %f hab/km²\n", dp2);
    printf("PIB per capita: %f reais\n", ppc2);

    //MENU INTERATIVO DA ESCOLHA DO ATRIBUTO 1
    printf("\nEscolha o primeiro atributo.\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Pontos Turistícos.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB per Capita.\n");

    printf("\nSua escolha é: ");
    scanf("%d", &atributo1);

    // Comparação do atributo 1
    switch (atributo1)
    {
    case 1:
        printf("\nVocê escolheu o atributo POPULAÇÃO!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;

        //MENU INTERATIVO DA ESCOLHA DO ATRIBUTO 2
        printf("\nEscolha o segundo atributo.\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos Turistícos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. PIB per Capita.\n");

        printf("\nSua escolha é: ");
        scanf("%d", &atributo2);

        //Comparação do atributo 2
        if (atributo1 == atributo2) {
            printf("\nVocê escolheu o mesmo atributo.\n");
        } else {
            switch (atributo2)
            {
            case 1: //Não será executado nada do case 1
                printf("\nVocê escolheu o atributo POPULAÇÃO!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 2:
                printf("\nVocê escolheu o atributo ÁREA!\n");
                resultado2 = area1 > area2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - Área: %f\n", nome1, estado1, populacao1, area1);
                    printf("Carta 2 - %s (%c) - População: %lu - Área: %f\n", nome2, estado2, populacao2, area2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - Área: %f\n", nome1, estado1, populacao1, area1);
                    printf("Carta 2 - %s (%c) - População: %lu - Área: %f\n", nome2, estado2, populacao2, area2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - Área: %f\n", nome1, estado1, populacao1, area1);
                    printf("Carta 2 - %s (%c) - População: %lu - Área: %f\n", nome2, estado2, populacao2, area2);
                }
                break;
            case 3:
                printf("\nVocê escolheu o atributo PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - PIB: %f\n", nome1, estado1, populacao1, pib1);
                    printf("Carta 2 - %s (%c) - População: %lu - PIB: %f\n", nome2, estado2, populacao2, pib2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - PIB: %f\n", nome1, estado1, populacao1, pib1);
                    printf("Carta 2 - %s (%c) - População: %lu - PIB: %f\n", nome2, estado2, populacao2, pib2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - PIB: %f\n", nome1, estado1, populacao1, pib1);
                    printf("Carta 2 - %s (%c) - População: %lu - PIB: %f\n", nome2, estado2, populacao2, pib2);
                }
                break;
            case 4:
                printf("\nVocê escolheu o atributo PONTOS TURISTÍCOS!\n");
                resultado2 = pontost1 > pontost2? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - Pontos Turísticos: %d\n", nome1, estado1, populacao1, pontost1);
                    printf("Carta 2 - %s (%c) - População: %lu - Pontos Turísticos: %d\n", nome2, estado2, populacao2, pontost2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - Pontos Turísticos: %d\n", nome1, estado1, populacao1, pontost1);
                    printf("Carta 2 - %s (%c) - População: %lu - Pontos Turísticos: %d\n", nome2, estado2, populacao2, pontost2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - Pontos Turísticos: %d\n", nome1, estado1, populacao1, pontost1);
                    printf("Carta 2 - %s (%c) - População: %lu - Pontos Turísticos: %d\n", nome2, estado2, populacao2, pontost2);
                }
                break;
            case 5:
                printf("\nVocê escolheu o atributo DENSIDADE POPULACIONAL!\n");
                resultado2 = dp1 < dp2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - Densidade Populacional: %f\n", nome1, estado1, populacao1, dp1);
                    printf("Carta 2 - %s (%c) - População: %lu - Densidade Populacional: %f\n", nome2, estado2, populacao2, dp2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - Densidade Populacional: %f\n", nome1, estado1, populacao1, dp1);
                    printf("Carta 2 - %s (%c) - População: %lu - Densidade Populacional: %f\n", nome2, estado2, populacao2, dp2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - Densidade Populacional: %f\n", nome1, estado1, populacao1, dp1);
                    printf("Carta 2 - %s (%c) - População: %lu - Densidade Populacional: %f\n", nome2, estado2, populacao2, dp2);
                }
                break;
            case 6:
                printf("\nVocê escolheu o atributo PIB PER CAPITA!\n");
                resultado2 = ppc1 > ppc2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - PIB per Capita: %f\n", nome1, estado1, populacao1, ppc1);
                    printf("Carta 2 - %s (%c) - População: %lu - PIB per Capita: %f\n", nome2, estado2, populacao2, ppc2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - PIB per Capita: %f\n", nome1, estado1, populacao1, ppc1);
                    printf("Carta 2 - %s (%c) - População: %lu - PIB per Capita: %f\n", nome2, estado2, populacao2, ppc2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - População: %lu - PIB per Capita: %f\n", nome1, estado1, populacao1, ppc1);
                    printf("Carta 2 - %s (%c) - População: %lu - PIB per Capita: %f\n", nome2, estado2, populacao2, ppc2);
                }
                break;
            default:
                printf("Opção inválida\n");
                break;
            }
        break;

    case 2:
        printf("\nVocê escolheu o atributo ÁREA!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        //MENU INTERATIVO DA ESCOLHA DO ATRIBUTO 2
        printf("\nEscolha o segundo atributo.\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos Turistícos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. PIB per Capita.\n");

        printf("\nSua escolha é: ");
        scanf("%d", &atributo2);

        //Comparação do atributo 2
        if (atributo1 == atributo2) {
            printf("\nVocê escolheu o mesmo atributo.\n");
        } else {
            switch (atributo2)
            {
            case 1:
                printf("\nVocê escolheu o atributo POPULAÇÃO!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - População: %lu\n", nome1, estado1, area1, populacao1);
                    printf("Carta 2 - %s (%c) - Área: %f - População: %lu\n", nome2, estado2, area2, populacao2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - População: %lu\n", nome1, estado1, area1, populacao1);
                    printf("Carta 2 - %s (%c) - Área: %f - População: %lu\n", nome2, estado2, area2, populacao2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - População: %lu\n", nome1, estado1, area1, populacao1);
                    printf("Carta 2 - %s (%c) - Área: %f - População: %lu\n", nome2, estado2, area2, populacao2);
                }
                break;
            case 2: //Não vai ser executado
                printf("\nVocê escolheu o atributo ÁREA!\n");
                resultado2 = area1 > area2 ? 1 : 0;
                break;
            case 3:
                printf("\nVocê escolheu o atributo PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - PIB: %f\n", nome1, estado1, area1, pib1);
                    printf("Carta 2 - %s (%c) - Área: %f - PIB: %f\n", nome2, estado2, area2, pib2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - PIB: %f\n", nome1, estado1, area1, pib1);
                    printf("Carta 2 - %s (%c) - Área: %f - PIB: %f\n", nome2, estado2, area2, pib2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - PIB: %f\n", nome1, estado1, area1, pib1);
                    printf("Carta 2 - %s (%c) - Área: %f - PIB: %f\n", nome2, estado2, area2, pib2);
                }
                break;
            case 4:
                printf("\nVocê escolheu o atributo PONTOS TURISTÍCOS!\n");
                resultado2 = pontost1 > pontost2? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - Pontos Turísticos: %d\n", nome1, estado1, area1, pontost1);
                    printf("Carta 2 - %s (%c) - Área: %f - Pontos Turísticos: %d\n", nome2, estado2, area2, pontost2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - Pontos Turísticos: %d\n", nome1, estado1, area1, pontost1);
                    printf("Carta 2 - %s (%c) - Área: %f - Pontos Turísticos: %d\n", nome2, estado2, area2, pontost2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - Pontos Turísticos: %d\n", nome1, estado1, area1, pontost1);
                    printf("Carta 2 - %s (%c) - Área: %f - Pontos Turísticos: %d\n", nome2, estado2, area2, pontost2);
                }
                break;
            case 5:
                printf("\nVocê escolheu o atributo DENSIDADE POPULACIONAL!\n");
                resultado2 = dp1 < dp2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - Densidade Populacional: %f\n", nome1, estado1, area1, dp1);
                    printf("Carta 2 - %s (%c) - Área: %f - Densidade Populacional: %f\n", nome2, estado2, area2, dp2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - Densidade Populacional: %f\n", nome1, estado1, area1, dp1);
                    printf("Carta 2 - %s (%c) - Área: %f - Densidade Populacional: %f\n", nome2, estado2, area2, dp2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - Densidade Populacional: %f\n", nome1, estado1, area1, dp1);
                    printf("Carta 2 - %s (%c) - Área: %f - Densidade Populacional: %f\n", nome2, estado2, area2, dp2);
                }
                break;
            case 6:
                printf("\nVocê escolheu o atributo PIB PER CAPITA!\n");
                resultado2 = ppc1 > ppc2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - PIB per Capita: %f\n", nome1, estado1, area1, ppc1);
                    printf("Carta 2 - %s (%c) - Área: %f - PIB per Capita: %f\n", nome2, estado2, area2, ppc2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - PIB per Capita: %f\n", nome1, estado1, area1, ppc1);
                    printf("Carta 2 - %s (%c) - Área: %f - PIB per Capita: %f\n", nome2, estado2, area2, ppc2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Área: %f - PIB per Capita: %f\n", nome1, estado1, area1, ppc1);
                    printf("Carta 2 - %s (%c) - Área: %f - PIB per Capita: %f\n", nome2, estado2, area2, ppc2);
                }
                break;
            default:
                printf("Opção inválida\n");
                break;
            }
        break;
    case 3:
        printf("\nVocê escolheu o atributo PIB!\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
         //MENU INTERATIVO DA ESCOLHA DO ATRIBUTO 2
         printf("\nEscolha o segundo atributo.\n");
         printf("1. População.\n");
         printf("2. Área.\n");
         printf("3. PIB.\n");
         printf("4. Pontos Turistícos.\n");
         printf("5. Densidade Populacional.\n");
         printf("6. PIB per Capita.\n");
 
         printf("\nSua escolha é: ");
         scanf("%d", &atributo2);
 
         //Comparação do atributo 2
         if (atributo1 == atributo2) {
             printf("\nVocê escolheu o mesmo atributo.\n");
         } else {
             switch (atributo2)
             {
             case 1:
                 printf("\nVocê escolheu o atributo POPULAÇÃO!\n");
                 resultado2 = populacao1 > populacao2 ? 1 : 0;
                 if (resultado1 && resultado2){
                     printf("*** CARTA 1 VENCEU! ***\n");
                     printf("Carta 1 - %s (%c) - PIB: %f - População: %lu\n", nome1, estado1, pib1, populacao1);
                     printf("Carta 2 - %s (%c) - PIB: %f - População: %lu\n", nome2, estado2, pib2, populacao2);
                 } else if (resultado1 != resultado2) {
                     printf("*** EMPATOU! ***\n");
                     printf("Carta 1 - %s (%c) - PIB: %f - População: %lu\n", nome1, estado1, pib1, populacao1);
                     printf("Carta 2 - %s (%c) - PIB: %f - População: %lu\n", nome2, estado2, pib2, populacao2);
                 } else {
                     printf("*** CARTA 2 VENCEU! ***\n");
                     printf("Carta 1 - %s (%c) - PIB: %f - População: %lu\n", nome1, estado1, pib1, populacao1);
                     printf("Carta 2 - %s (%c) - PIB: %f - População: %lu\n", nome2, estado2, pib2, populacao2);
                 }
                 break;
             case 2: 
                 printf("\nVocê escolheu o atributo ÁREA!\n");
                 resultado2 = area1 > area2 ? 1 : 0;
                 if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB: %f - Área: %f\n", nome1, estado1, pib1, area1);
                    printf("Carta 2 - %s (%c) - PIB: %f - Área: %f\n", nome2, estado2, pib2, area2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB: %f - Área: %f\n", nome1, estado1, pib1, area1);
                    printf("Carta 2 - %s (%c) - PIB: %f - Área: %f\n", nome2, estado2, pib2, area2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB: %f - Área: %f\n", nome1, estado1, pib1, area1);
                    printf("Carta 2 - %s (%c) - PIB: %f - Área: %f\n", nome2, estado2, pib2, area2);
                }
                 break;
             case 3: //Não vai ser executado
                 printf("\nVocê escolheu o atributo PIB!\n");
                 resultado2 = pib1 > pib2 ? 1 : 0;
                 break;
             case 4:
                 printf("\nVocê escolheu o atributo PONTOS TURISTÍCOS!\n");
                 resultado2 = pontost1 > pontost2? 1 : 0;
                 if (resultado1 && resultado2){
                     printf("*** CARTA 1 VENCEU! ***\n");
                     printf("Carta 1 - %s (%c) - PIB: %f - Pontos Turísticos: %d\n", nome1, estado1, pib1, pontost1);
                     printf("Carta 2 - %s (%c) - PIB: %f - Pontos Turísticos: %d\n", nome2, estado2, pib2, pontost2);
                 } else if (resultado1 != resultado2) {
                     printf("*** EMPATOU! ***\n");
                     printf("Carta 1 - %s (%c) - PIB: %f - Pontos Turísticos: %d\n", nome1, estado1, pib1, pontost1);
                     printf("Carta 2 - %s (%c) - PIB: %f - Pontos Turísticos: %d\n", nome2, estado2, pib2, pontost2);
                 } else {
                     printf("*** CARTA 2 VENCEU! ***\n");
                     printf("Carta 1 - %s (%c) - PIB: %f - Pontos Turísticos: %d\n", nome1, estado1, pib1, pontost1);
                     printf("Carta 2 - %s (%c) - PIB: %f - Pontos Turísticos: %d\n", nome2, estado2, pib2, pontost2);
                 }
                 break;
             case 5:
                 printf("\nVocê escolheu o atributo DENSIDADE POPULACIONAL!\n");
                 resultado2 = dp1 < dp2 ? 1 : 0;
                 if (resultado1 && resultado2){
                     printf("*** CARTA 1 VENCEU! ***\n");
                     printf("Carta 1 - %s (%c) - PIB: %f - Densidade Populacional: %f\n", nome1, estado1, pib1, dp1);
                     printf("Carta 2 - %s (%c) - PIB: %f - Densidade Populacional: %f\n", nome2, estado2, pib2, dp2);
                 } else if (resultado1 != resultado2) {
                     printf("*** EMPATOU! ***\n");
                     printf("Carta 1 - %s (%c) - PIB: %f - Densidade Populacional: %f\n", nome1, estado1, pib1, dp1);
                     printf("Carta 2 - %s (%c) - PIB: %f - Densidade Populacional: %f\n", nome2, estado2, pib2, dp2);
                 } else {
                     printf("*** CARTA 2 VENCEU! ***\n");
                     printf("Carta 1 - %s (%c) - PIB:: %f - Densidade Populacional: %f\n", nome1, estado1, pib1, dp1);
                     printf("Carta 2 - %s (%c) - PIB:: %f - Densidade Populacional: %f\n", nome2, estado2, pib2, dp2);
                 }
                 break;
             case 6:
                 printf("\nVocê escolheu o atributo PIB PER CAPITA!\n");
                 resultado2 = ppc1 > ppc2 ? 1 : 0;
                 if (resultado1 && resultado2){
                     printf("*** CARTA 1 VENCEU! ***\n");
                     printf("Carta 1 - %s (%c) - PIB: %f - PIB per Capita: %f\n", nome1, estado1, pib1, ppc1);
                     printf("Carta 2 - %s (%c) - PIB: %f - PIB per Capita: %f\n", nome2, estado2, pib2, ppc2);
                 } else if (resultado1 != resultado2) {
                     printf("*** EMPATOU! ***\n");
                     printf("Carta 1 - %s (%c) - PIB: %f - PIB per Capita: %f\n", nome1, estado1, pib1, ppc1);
                     printf("Carta 2 - %s (%c) - PIB: %f - PIB per Capita: %f\n", nome2, estado2, pib2, ppc2);
                 } else {
                     printf("*** CARTA 2 VENCEU! ***\n");
                     printf("Carta 1 - %s (%c) - PIB: %f - PIB per Capita: %f\n", nome1, estado1, pib1, ppc1);
                     printf("Carta 2 - %s (%c) - PIB: %f - PIB per Capita: %f\n", nome2, estado2, pib2, ppc2);
                 }
                 break;
             default:
                 printf("Opção inválida\n");
                 break;
             }
        break;
    case 4:
        printf("\nVocê escolheu o atributo PONTOS TURISTÍCOS!\n");
        resultado1 = pontost1 > pontost2? 1 : 0;

        //MENU INTERATIVO DA ESCOLHA DO ATRIBUTO 2
        printf("\nEscolha o segundo atributo.\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos Turistícos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. PIB per Capita.\n");

        printf("\nSua escolha é: ");
        scanf("%d", &atributo2);

        //Comparação do atributo 2
        if (atributo1 == atributo2) {
            printf("\nVocê escolheu o mesmo atributo.\n");
        } else {
            switch (atributo2)
            {
            case 1:
                printf("\nVocê escolheu o atributo POPULAÇÃO!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - População: %lu\n", nome1, estado1, pontost1, populacao1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - População: %lu\n", nome2, estado2, pontost2, populacao2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - População: %lu\n", nome1, estado1, pontost1, populacao1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - População: %lu\n", nome2, estado2, pontost2, populacao2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - População: %lu\n", nome1, estado1, pontost1, populacao1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - População: %lu\n", nome2, estado2, pontost2, populacao2);
                }
                break;
            case 2: 
                printf("\nVocê escolheu o atributo ÁREA!\n");
                resultado2 = area1 > area2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - Área: %f\n", nome1, estado1, pontost1, area1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - Área: %f\n", nome2, estado2, pontost2, area2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - População: %lu\n", nome1, estado1, pontost1, populacao1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - População: %lu\n", nome2, estado2, pontost2, populacao2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - População: %lu\n", nome1, estado1, pontost1, populacao1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - População: %lu\n", nome2, estado2, pontost2, populacao2);
                }
                break;
            case 3: 
                printf("\nVocê escolheu o atributo PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - PIB: %f\n", nome1, estado1, pontost1, pib1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - PIB: %f\n", nome2, estado2, pontost2, pib2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - PIB: %f\n", nome1, estado1, pontost1, pib1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - PIB: %f\n", nome2, estado2, pontost2, pib2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - PIB: %f\n", nome1, estado1, pontost1, pib1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - PIB: %f\n", nome2, estado2, pontost2, pib2);
                }
                break;
            case 4: //Não vai ser executado
                printf("\nVocê escolheu o atributo PONTOS TURISTÍCOS!\n");
                resultado2 = pontost1 > pontost2? 1 : 0;
                break;
            case 5:
                printf("\nVocê escolheu o atributo DENSIDADE POPULACIONAL!\n");
                resultado2 = dp1 < dp2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - Densidade Populacional: %f\n", nome1, estado1, pontost1, dp1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - Densidade Populacional: %f\n", nome2, estado2, pontost2, dp2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - Densidade Populacional: %f\n", nome1, estado1, pontost1, dp1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - Densidade Populacional: %f\n", nome2, estado2, pontost2, dp2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - Densidade Populacional: %f\n", nome1, estado1, pontost1, dp1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - Densidade Populacional: %f\n", nome2, estado2, pontost2, dp2);
                }
                break;
            case 6:
                printf("\nVocê escolheu o atributo PIB PER CAPITA!\n");
                resultado2 = ppc1 > ppc2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - PIB per Capita: %f\n", nome1, estado1, pontost1, ppc1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - PIB per Capita: %f\n", nome2, estado2, pontost2, ppc2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - PIB per Capita: %f\n", nome1, estado1, pontost1, ppc1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - PIB per Capita: %f\n", nome2, estado2, pontost2, ppc2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Pontos Turísticos: %d - PIB per Capita: %f\n", nome1, estado1, pontost1, ppc1);
                    printf("Carta 2 - %s (%c) - Pontos Turísticos: %d - PIB per Capita: %f\n", nome2, estado2, pontost2, ppc2);
                }
            }
        break;
    case 5:
        printf("\nVocê escolheu o atributo DENSIDADE POPULACIONAL!\n");
        resultado1 = dp1 > dp2 ? 1 : 0;
        
        //MENU INTERATIVO DA ESCOLHA DO ATRIBUTO 2
        printf("\nEscolha o segundo atributo.\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos Turistícos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. PIB per Capita.\n");

        printf("\nSua escolha é: ");
        scanf("%d", &atributo2);

        //Comparação do atributo 2
        if (atributo1 == atributo2) {
            printf("\nVocê escolheu o mesmo atributo.\n");
        } else {
            switch (atributo2)
            {
            case 1:
                printf("\nVocê escolheu o atributo POPULAÇÃO!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - População: %lu\n", nome1, estado1, dp1, populacao1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - População: %lu\n", nome2, estado2, dp2, populacao2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - População: %lu\n", nome1, estado1, dp1, populacao1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - População: %lu\n", nome2, estado2, dp2, populacao2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - População: %lu\n", nome1, estado1, dp1, populacao1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - População: %lu\n", nome2, estado2, dp2, populacao2);
                }
                break;
            case 2: 
                printf("\nVocê escolheu o atributo ÁREA!\n");
                resultado2 = area1 > area2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - Área: %f\n", nome1, estado1, dp1, area1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - Área: %f\n", nome2, estado2, dp2, area2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - Área: %f\n", nome1, estado1, dp1, area1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - Área: %f\n", nome2, estado2, dp2, area2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - Área: %f\n", nome1, estado1, dp1, area1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - Área: %f\n", nome2, estado2, dp2, area2);
                }
                break;
            case 3: 
                printf("\nVocê escolheu o atributo PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - PIB: %f\n", nome1, estado1, dp1, pib1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - PIB: %f\n", nome2, estado2, dp2, pib2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - PIB: %f\n", nome1, estado1, dp1, pib1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - PIB: %f\n", nome2, estado2, dp2, pib2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - PIB: %f\n", nome1, estado1, dp1, pib1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - PIB: %f\n", nome2, estado2, dp2, pib2);
                }
                break;
            case 4: 
                printf("\nVocê escolheu o atributo PONTOS TURISTÍCOS!\n");
                resultado2 = pontost1 > pontost2? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - Pontos Turísticos: %d\n", nome1, estado1, dp1, pontost1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - Pontos Turísticos: %d\n", nome2, estado2, dp2, pontost2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - Pontos Turísticos: %d\n", nome1, estado1, dp1, pontost1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - Pontos Turísticos: %d\n", nome2, estado2, dp2, pontost2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - Pontos Turísticos: %d\n", nome1, estado1, dp1, pontost1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - Pontos Turísticos: %d\n", nome2, estado2, dp2, pontost2);
                }
                break;
            case 5: //Não vai ser executado
                printf("\nVocê escolheu o atributo DENSIDADE POPULACIONAL!\n");
                resultado2 = dp1 < dp2 ? 1 : 0;
                break;
            case 6:
                printf("\nVocê escolheu o atributo PIB PER CAPITA!\n");
                resultado2 = ppc1 > ppc2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - PIB per Capita: %f\n", nome1, estado1, dp1, ppc1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - PIB per Capita: %f\n", nome2, estado2, dp2, ppc2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - PIB per Capita: %f\n", nome1, estado1, dp1, ppc1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - PIB per Capita: %f\n", nome2, estado2, dp2, ppc2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - Densidade Populacional: %f - PIB per Capita: %f\n", nome1, estado1, dp1, ppc1);
                    printf("Carta 2 - %s (%c) - Densidade Populacional: %f - PIB per Capita: %f\n", nome2, estado2, dp2, ppc2);
                }
            }
        break;
    case 6:
        printf("\nVocê escolheu o atributo PIB PER CAPITA!\n");
        resultado1 = ppc1 > ppc2 ? 1 : 0;
        //MENU INTERATIVO DA ESCOLHA DO ATRIBUTO 2
        printf("\nEscolha o segundo atributo.\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos Turistícos.\n");
        printf("5. Densidade Populacional.\n");
        printf("6. PIB per Capita.\n");

        printf("\nSua escolha é: ");
        scanf("%d", &atributo2);

        //Comparação do atributo 2
        if (atributo1 == atributo2) {
            printf("\nVocê escolheu o mesmo atributo.\n");
        } else {
            switch (atributo2)
            {
            case 1:
                printf("\nVocê escolheu o atributo POPULAÇÃO!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - População: %lu\n", nome1, estado1, ppc1, populacao1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - População: %lu\n", nome2, estado2, ppc2, populacao2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - População: %lu\n", nome1, estado1, ppc1, populacao1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - População: %lu\n", nome2, estado2, ppc2, populacao2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - População: %lu\n", nome1, estado1, ppc1, populacao1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - População: %lu\n", nome2, estado2, ppc2, populacao2);
                }
                break;
            case 2: 
                printf("\nVocê escolheu o atributo ÁREA!\n");
                resultado2 = area1 > area2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - Área: %f\n", nome1, estado1, dp1, area1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - Área: %f\n", nome2, estado2, dp2, area2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - Área: %f\n", nome1, estado1, dp1, area1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - Área: %f\n", nome2, estado2, dp2, area2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - Área: %f\n", nome1, estado1, dp1, area1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - Área: %f\n", nome2, estado2, dp2, area2);
                }
                break;
            case 3: 
                printf("\nVocê escolheu o atributo PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - PIB: %f\n", nome1, estado1, ppc1, pib1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - PIB: %f\n", nome2, estado2, ppc2, pib2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - PIB: %f\n", nome1, estado1, ppc1, pib1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - PIB: %f\n", nome2, estado2, ppc2, pib2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - PIB: %f\n", nome1, estado1, ppc1, pib1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - PIB: %f\n", nome2, estado2, ppc2, pib2);
                }
                break;
            case 4: 
                printf("\nVocê escolheu o atributo PONTOS TURISTÍCOS!\n");
                resultado2 = pontost1 > pontost2? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - Pontos Turísticos: %d\n", nome1, estado1, ppc1, pontost1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - Pontos Turísticos: %d\n", nome2, estado2, ppc2, pontost2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - Pontos Turísticos: %d\n", nome1, estado1, ppc1, pontost1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - Pontos Turísticos: %d\n", nome2, estado2, ppc2, pontost2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - Pontos Turísticos: %d\n", nome1, estado1, ppc1, pontost1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - Pontos Turísticos: %d\n", nome2, estado2, ppc2, pontost2);
                }
                break;
            case 5: 
                printf("\nVocê escolheu o atributo DENSIDADE POPULACIONAL!\n");
                resultado2 = dp1 < dp2 ? 1 : 0;
                if (resultado1 && resultado2){
                    printf("*** CARTA 1 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - Densidade Populacional: %f\n", nome1, estado1, ppc1, dp1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - Densidade Populacional: %f\n", nome2, estado2, ppc2, dp2);
                } else if (resultado1 != resultado2) {
                    printf("*** EMPATOU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - Densidade Populacional: %f\n", nome1, estado1, ppc1, dp1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - Densidade Populacional: %f\n", nome2, estado2, ppc2, dp2);
                } else {
                    printf("*** CARTA 2 VENCEU! ***\n");
                    printf("Carta 1 - %s (%c) - PIB per Capita: %f - Densidade Populacional: %f\n", nome1, estado1, ppc1, dp1);
                    printf("Carta 2 - %s (%c) - PIB per Capita: %f - Densidade Populacional: %f\n", nome2, estado2, ppc2, dp2);
                }
                break;
            case 6: //Não vai ser executado
                printf("\nVocê escolheu o atributo PIB PER CAPITA!\n");
                resultado2 = ppc1 > ppc2 ? 1 : 0;
            }
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
        }
    }
}
    }
}
    }
    return 0;
}