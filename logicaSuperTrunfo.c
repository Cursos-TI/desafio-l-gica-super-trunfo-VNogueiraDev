#include <stdio.h>

int main() {
    // Informações das cartas
    char codigo[100] = "A01", estado[100] = "Rio de Janeiro", cidade[100] = "Petrópolis";
    char codigo2[100] = "A02", estado2[100] = "Rio de Janeiro", cidade2[100] = "Nova Iguaçu";
    int pontos_turisticos = 43, pontos_turisticos2 = 43;
    float area = 791.144, area2 = 520.837, pib = 12670000, pib2 = 16450000;
    long int populacao = 294983, populacao2 = 843046;

    float densidade, densidade2, capita, capita2;
    float densidadediv, densidadediv2, superpoder, superpoder2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;

    // Cálculo de densidade demográfica e PIB per capita
    densidade = (float) populacao / area;
    densidade2 = (float) populacao2 / area2;
    capita = (float) pib / populacao;
    capita2 = (float) pib2 / populacao2;

    // Cálculo do valor da densidade dividido
    densidadediv = 1.0 / densidade;
    densidadediv2 = 1.0 / densidade2;

    // Cálculo do superpoder
    superpoder = pontos_turisticos + populacao + area + pib + capita + densidadediv;
    superpoder2 = pontos_turisticos2 + populacao2 + area2 + pib2 + capita2 + densidadediv2;

    int atributo1, atributo2;
    int resultado1 = 2, resultado2 = 2;

    // Menu 1
    printf("---------------------------------------------\n");
    printf("*****Boas vindas ao Super Trunfo países!*****\n");
    printf("---------------------------------------------\n");
    printf("Vamos começar, selecione o primeiro para comparar:\n");
    printf("1- Pontos Turísticos\n");
    printf("2- Area\n");
    printf("3- População\n");
    printf("4- PIB\n");
    printf("5- PIB per capita\n");
    printf("6- Densidade demográfica\n");
    printf("7- Super poder\n");
    scanf("%d", &atributo1);

    // Escolhas do menu 1
    switch (atributo1) {
        case 1:
            printf("Você escolheu pontos turísticos!\n");
            resultado1 = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
            printf("Carta 1 (%s) %d vs %d (%s) Carta 2\n", cidade, pontos_turisticos, pontos_turisticos2, cidade2);
            if (pontos_turisticos == pontos_turisticos2) {
                printf("Empatou a primeira rodada!\n");
                resultado1 = 2;
            } else if (resultado1 == 1) {
                printf("%s venceu a primeira rodada!\n", cidade);
            } else {
                printf("%s venceu a primeira rodada!\n", cidade2);
            }
            break;

        case 2:
            printf("Você escolheu área!\n");
            resultado1 = area > area2 ? 1 : 0;
            printf("Carta 1 (%s) %.2f vs %.2f (%s) Carta 2\n", cidade, area, area2, cidade2);
            if (area == area2) {
                printf("Empatou a primeira rodada!\n");
                resultado1 = 2;
            } else if (resultado1 == 1) {
                printf("%s venceu a primeira rodada!\n", cidade);
            } else {
                printf("%s venceu a primeira rodada!\n", cidade2);
            }
            break;

        case 3:
            printf("Você escolheu população!\n");
            resultado1 = populacao > populacao2 ? 1 : 0;
            printf("Carta 1 (%s) %ld vs %ld (%s) Carta 2\n", cidade, populacao, populacao2, cidade2);
            if (populacao == populacao2) {
                printf("Empatou a primeira rodada!\n");
                resultado1 = 2;
            } else if (resultado1 == 1) {
                printf("%s venceu a primeira rodada!\n", cidade);
            } else {
                printf("%s venceu a primeira rodada!\n", cidade2);
            }
            break;

        case 4:
            printf("Você escolheu PIB!\n");
            resultado1 = pib > pib2 ? 1 : 0;
            printf("Carta 1 (%s) %.2f vs %.2f (%s) Carta 2\n", cidade, pib, pib2, cidade2);
            if (pib == pib2) {
                printf("Empatou a primeira rodada!\n");
                resultado1 = 2;
            } else if (resultado1 == 1) {
                printf("%s venceu a primeira rodada!\n", cidade);
            } else {
                printf("%s venceu a primeira rodada!\n", cidade2);
            }
            break;

        case 5:
            printf("Você escolheu PIB per capita!\n");
            resultado1 = capita > capita2 ? 1 : 0;
            printf("Carta 1 (%s) %.2f vs %.2f (%s) Carta 2\n", cidade, capita, capita2, cidade2);
            if (capita == capita2) {
                printf("Empatou a primeira rodada!\n");
                resultado1 = 2;
            } else if (resultado1 == 1) {
                printf("%s venceu a primeira rodada!\n", cidade);
            } else {
                printf("%s venceu a primeira rodada!\n", cidade2);
            }
            break;

        case 6:
            printf("Você escolheu densidade demográfica!\n");
            resultado1 = densidade < densidade2 ? 1 : 0;
            printf("Carta 1 (%s) %.2f vs %.2f (%s) Carta 2\n", cidade, densidade, densidade2, cidade2);
            if (densidade == densidade2) {
                printf("Empatou a primeira rodada!\n");
                resultado1 = 2;
            } else if (resultado1 == 1) {
                printf("%s venceu a primeira rodada!\n", cidade);
            } else {
                printf("%s venceu a primeira rodada!\n", cidade2);
            }
            break;

        case 7:
            printf("Você escolheu Super Poder!\n");
            resultado1 = superpoder > superpoder2 ? 1 : 0;
            printf("Carta 1 (%s) %.2f vs %.2f (%s) Carta 2\n", cidade, superpoder, superpoder2, cidade2);
            if (superpoder == superpoder2) {
                printf("Empatou a primeira rodada!\n");
                resultado1 = 2;
            } else if (resultado1 == 1) {
                printf("%s venceu a primeira rodada!\n", cidade);
            } else {
                printf("%s venceu a primeira rodada!\n", cidade2);
            }
            break;

        default:
            printf("## Escolha inválida ##\n");
            return 0;
    }

    // Menu 2
    printf("---------------------------------------------\n");
    printf("Certo! Agora selecione o segundo atributo:\n");
    printf("**Lembrando que não é possível selecionar o atributo anterior**\n");
    printf("1- Pontos Turísticos\n");
    printf("2- Area\n");
    printf("3- População\n");
    printf("4- PIB\n");
    printf("5- PIB per capita\n");
    printf("6- Densidade demográfica\n");
    printf("7- Super poder\n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("## Você escolheu o mesmo atributo que o anterior ##\n");
        return 0;
    }

    // Escolhas do menu 2
    switch (atributo2) {
        case 1:
            printf("Você escolheu pontos turísticos!\n");
            resultado2 = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
            printf("Carta 1 (%s) %d vs %d (%s) Carta 2\n", cidade, pontos_turisticos, pontos_turisticos2, cidade2);
            if (pontos_turisticos == pontos_turisticos2) {
                printf("Empatou a segunda rodada!\n");
                resultado2 = 2;
            } else if (resultado2 == 1) {
                printf("%s venceu a segunda rodada!\n", cidade);
            } else {
                printf("%s venceu a segunda rodada!\n", cidade2);
            }
            break;

        case 2:
            printf("Você escolheu área!\n");
            resultado2 = area > area2 ? 1 : 0;
            printf("Carta 1 (%s) %.2f vs %.2f (%s) Carta 2\n", cidade, area, area2, cidade2);
            if (area == area2) {
                printf("Empatou a segunda rodada!\n");
                resultado2 = 2;
            } else if (resultado2 == 1) {
                printf("%s venceu a segunda rodada!\n", cidade);
            } else {
                printf("%s venceu a segunda rodada!\n", cidade2);
            }
            break;

        case 3:
            printf("Você escolheu população!\n");
            resultado2 = populacao > populacao2 ? 1 : 0;
            printf("Carta 1 (%s) %ld vs %ld (%s) Carta 2\n", cidade, populacao, populacao2, cidade2);
            if (populacao == populacao2) {
                printf("Empatou a segunda rodada!\n");
                resultado2 = 2;
            } else if (resultado2 == 1) {
                printf("%s venceu a segunda rodada!\n", cidade);
            } else {
                printf("%s venceu a segunda rodada!\n", cidade2);
            }
            break;

        case 4:
            printf("Você escolheu PIB!\n");
            resultado2 = pib > pib2 ? 1 : 0;
            printf("Carta 1 (%s) %.2f vs %.2f (%s) Carta 2\n", cidade, pib, pib2, cidade2);
            if (pib == pib2) {
                printf("Empatou a segunda rodada!\n");
                resultado2 = 2;
            } else if (resultado2 == 1) {
                printf("%s venceu a segunda rodada!\n", cidade);
            } else {
                printf("%s venceu a segunda rodada!\n", cidade2);
            }
            break;

        case 5:
            printf("Você escolheu PIB per capita!\n");
            resultado2 = capita > capita2 ? 1 : 0;
            printf("Carta 1 (%s) %.2f vs %.2f (%s) Carta 2\n", cidade, capita, capita2, cidade2);
            if (capita == capita2) {
                printf("Empatou a segunda rodada!\n");
                resultado2 = 2;
            } else if (resultado2 == 1) {
                printf("%s venceu a segunda rodada!\n", cidade);
            } else {
                printf("%s venceu a segunda rodada!\n", cidade2);
            }
            break;

        case 6:
            printf("Você escolheu densidade demográfica!\n");
            resultado2 = densidade < densidade2 ? 1 : 0;
            printf("Carta 1 (%s) %.2f vs %.2f (%s) Carta 2\n", cidade, densidade, densidade2, cidade2);
            if (densidade == densidade2) {
                printf("Empatou a segunda rodada!\n");
                resultado2 = 2;
            } else if (resultado2 == 1) {
                printf("%s venceu a segunda rodada!\n", cidade);
            } else {
                printf("%s venceu a segunda rodada!\n", cidade2);
            }
            break;

        case 7:
            printf("Você escolheu Super Poder!\n");
            resultado2 = superpoder > superpoder2 ? 1 : 0;
            printf("Carta 1 (%s) %.2f vs %.2f (%s) Carta 2\n", cidade, superpoder, superpoder2, cidade2);
            if (superpoder == superpoder2) {
                printf("Empatou a segunda rodada!\n");
                resultado2 = 2;
            } else if (resultado2 == 1) {
                printf("%s venceu a segunda rodada!\n", cidade);
            } else {
                printf("%s venceu a segunda rodada!\n", cidade2);
            }
            break;

        default:
            printf("## Escolha inválida ##\n");
            return 0;
    }

    // Resultado final
    printf("*****Resultado final*****\n");
    if (resultado1 == 1 && resultado2 == 1) {
        printf("Carta 1 (%s) foi a vencedora!\n", cidade);
    } else if (resultado1 == 0 && resultado2 == 0) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else if ((resultado1 == 2 && resultado2 == 1) || (resultado1 == 1 && resultado2 == 2)) {
        printf("Carta 1 (%s) ganhou!\n", cidade);
    } else if ((resultado1 == 2 && resultado2 == 0) || (resultado1 == 0 && resultado2 == 2)) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!!!\n");
    }

    return 0;
}
