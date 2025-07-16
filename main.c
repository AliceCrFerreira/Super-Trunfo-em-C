#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estrutura das cartas ;
typedef struct {
    char nomePais[50];               /// Nome do país
    int populacao;                   /// Populacao total
    float area;                      /// Area em km²
    float pib;                       /// PIB em reais (ou dólares, como preferir)
    int pontosturisticos;            /// Número de pontos turísticos
    float densidadedemografica;      /// população / área
    float rendapercapta;             /// pib / população
} Carta;

/// Exibindo todas as informações da carta
void imprimeCarta(Carta carta){
    printf("===== CARTA SUPER TRUNFO =====\n");
    printf("Pais: %s\n", carta.nomePais);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km^2\n", carta.area);
    printf("PIB: R$ %.2f\n", carta.pib);
    printf("Pontos Turisticos: %d\n", carta.pontosturisticos);
    printf("Densidade Demografica: %.2f hab/km^2\n", carta.densidadedemografica);
    printf("Renda per capita: R$ %.2f\n", carta.rendapercapta);
}

/// Criação da carta do Brasil
Carta criaCarta1(){
    Carta carta1;

    /// Preenchendo o nome do país
    strcpy(carta1.nomePais, "Brasil");

    /// Preenchendo os campos numéricos (dados estimados e arredondados)
    carta1.populacao = 203000000; // 203 milhões
    carta1.area = 8516000.0; // 8.516.000 km²
    carta1.pib = 1075200000000.0; // 1,075 trilhão de dólares
    carta1.pontosturisticos = 7; // Exemplo: Cristo, Cataratas, Pantanal, Amazônia, etc.

    /// Calculando os campos derivados
    carta1.densidadedemografica = carta1.populacao / carta1.area;
    carta1.rendapercapta = carta1.pib / carta1.populacao;

    return carta1;
}

/// Criação da carta da Austrália
Carta criaCarta2(){
    Carta carta2;

    /// Preenchendo o nome do país
    strcpy(carta2.nomePais, "Australia");

    carta2.populacao = 26000000; // 26 milhões
    carta2.area = 7692000.0; // 7.692.000 km²
    carta2.pib = 1550000000000.0; // 1,55 trilhão de dólares
    carta2.pontosturisticos = 6; // Exemplo: Ópera de Sydney, Grande Barreira, Uluru, etc.

    // Campos derivados
    carta2.densidadedemografica = carta2.populacao / carta2.area;
    carta2.rendapercapta = carta2.pib / carta2.populacao;

    return carta2;
}

///Função do desafio 1: Comparação de cartas com base em um único atributo utilizando if e if-else.
void comparaPopulacao(Carta c1, Carta c2) {
    printf("\n--- Comparando Populacao ---\n");
    printf("Carta - %s: %d\n", c1.nomePais, c1.populacao);
    printf("Carta - %s: %d\n", c2.nomePais, c2.populacao);

    if (c1.populacao > c2.populacao) {
        printf("Resultado: Carta (%s) venceu!\n", c1.nomePais);
    } else if (c2.populacao > c1.populacao) {
        printf("Resultado: Carta (%s) venceu!\n", c2.nomePais);
    } else {
        printf("Resultado: Empate!\n");
    }
}

/// Menu de seleção de atributos
int menuAtributo() {
    int opcao;
    printf("\n===== MENU DE ATRIBUTOS =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. Renda per capita\n");
    printf("Digite sua opcao (1-6): ");
    scanf("%d", &opcao);
    return opcao;
}

/// Função para comparar qualquer atributo selecionado
void comparaCartas(Carta c1, Carta c2, int atributo) {
    printf("\n--- Comparando Cartas ---\n");
    switch (atributo) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %d vs %s: %d\n", c1.nomePais, c1.populacao, c2.nomePais, c2.populacao);
            if (c1.populacao > c2.populacao)
                printf("%s venceu!\n", c1.nomePais);
            else if (c1.populacao < c2.populacao)
                printf("%s venceu!\n", c2.nomePais);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km^2 vs %s: %.2f km^2\n", c1.nomePais, c1.area, c2.nomePais, c2.area);
            if (c1.area > c2.area)
                printf("%s venceu!\n", c1.nomePais);
            else if (c1.area < c2.area)
                printf("%s venceu!\n", c2.nomePais);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f vs %s: R$ %.2f\n", c1.nomePais, c1.pib, c2.nomePais, c2.pib);
            if (c1.pib > c2.pib)
                printf("%s venceu!\n", c1.nomePais);
            else if (c1.pib < c2.pib)
                printf("%s venceu!\n", c2.nomePais);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d vs %s: %d\n", c1.nomePais, c1.pontosturisticos, c2.nomePais, c2.pontosturisticos);
            if (c1.pontosturisticos > c2.pontosturisticos)
                printf("%s venceu!\n", c1.nomePais);
            else if (c1.pontosturisticos < c2.pontosturisticos)
                printf("%s venceu!\n", c2.nomePais);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demografica (vence o MENOR valor!)\n");
            printf("%s: %.2f hab/km^2 vs %s: %.2f hab/km^2\n", c1.nomePais, c1.densidadedemografica, c2.nomePais, c2.densidadedemografica);
            if (c1.densidadedemografica < c2.densidadedemografica)
                printf("%s venceu!\n", c1.nomePais);
            else if (c1.densidadedemografica > c2.densidadedemografica)
                printf("%s venceu!\n", c2.nomePais);
            else
                printf("Empate!\n");
            break;
        case 6:
            printf("Atributo: Renda per capita\n");
            printf("%s: R$ %.2f vs %s: R$ %.2f\n", c1.nomePais, c1.rendapercapta, c2.nomePais, c2.rendapercapta);
            if (c1.rendapercapta > c2.rendapercapta)
                printf("%s venceu!\n", c1.nomePais);
            else if (c1.rendapercapta < c2.rendapercapta)
                printf("%s venceu!\n", c2.nomePais);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }
}

/// Menu para o segundo atributo
int menuAtributo2(int escolhido) {
    int opcao;
    printf("\n===== ESCOLHA O SEGUNDO ATRIBUTO =====\n");
    printf("Escolha outro atributo para comparar:\n");

    ///imprime todos menos o já escolhido
    for (int i = 1; i <= 6; i++) {
        if (i != escolhido) {
            switch(i) {
                case 1: printf("1. Populacao\n"); break;
                case 2: printf("2. Area\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Pontos Turisticos\n"); break;
                case 5: printf("5. Densidade Demografica\n"); break;
                case 6: printf("6. Renda per capita\n"); break;
            }
        }
    }
    printf("Digite sua opcao (1-6, diferente do primeiro): ");
    scanf("%d", &opcao);

    /// Confirma se não escolheu o mesmo atributo e força o correto
    while(opcao == escolhido || opcao < 1 || opcao > 6) {
        printf("Opcao invalida! Escolha um atributo diferente do primeiro: ");
        scanf("%d", &opcao);
    }
    return opcao;
}

/// Função para facilitar o desafio 3
float getAtributo(Carta c, int atributo) {
    switch(atributo) {
        case 1: return (float)c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return (float)c.pontosturisticos;
        case 5: return c.densidadedemografica;
        case 6: return c.rendapercapta;
        default: return 0.0;
    }
}

/// Desafio 3 com operação ternária
void comparaMestre(Carta c1, Carta c2, int at1, int at2) {
    printf("\n===== COMPARAÇÃO MESTRE =====\n\n");

    float valor1_1 = getAtributo(c1, at1);
    float valor2_1 = getAtributo(c2, at1);
    float valor1_2 = getAtributo(c1, at2);
    float valor2_2 = getAtributo(c2, at2);

    float pontos1 = 0, pontos2 = 0;

    /// Para cada atributo, quem vencer soma o valor à pontuação total
    for(int i = 0; i < 2; i++) {
        int atributo = (i == 0) ? at1 : at2;
        float v1 = (i == 0) ? valor1_1 : valor1_2;
        float v2 = (i == 0) ? valor2_1 : valor2_2;

        printf("Atributo %d: ", atributo);
        switch(atributo) {
            case 1: printf("Populacao\n"); break;
            case 2: printf("Area\n"); break;
            case 3: printf("PIB\n"); break;
            case 4: printf("Pontos Turisticos\n"); break;
            case 5: printf("Densidade Demografica (MENOR vence)\n"); break;
            case 6: printf("Renda per capita\n"); break;
        }
        printf("\t%s: %.2f | %s: %.2f\n", c1.nomePais, v1, c2.nomePais, v2);

        int vencedor = 0;
        if (atributo == 5) { // Densidade, menor vence
            vencedor = (v1 < v2) ? 1 : (v1 > v2) ? 2 : 0;
        } else { // Outros, maior vence
            vencedor = (v1 > v2) ? 1 : (v1 < v2) ? 2 : 0;
        }

        if (vencedor == 1) {
            printf("\t\t=> %s venceu o atributo!\n", c1.nomePais);
            pontos1 += v1;
        } else if (vencedor == 2) {
            printf("\t\t=> %s venceu o atributo!\n", c2.nomePais);
            pontos2 += v2;
        } else {
            printf("\t\t=> Empate nesse atributo!\n");
            pontos1 += v1;
            pontos2 += v2;
        }
        printf("\n");
    }

    printf("Soma dos atributos:\n");
    printf("\t%s: %.2f\n", c1.nomePais, pontos1);
    printf("\t%s: %.2f\n", c2.nomePais, pontos2);

    /// Decisão final (operador ternário)
    printf("\nRESULTADO FINAL:\n\t\t ");
    if (pontos1 > pontos2)
        printf("%s venceu a rodada!\n", c1.nomePais);
    else if (pontos2 > pontos1)
        printf("%s venceu a rodada!\n", c2.nomePais);
    else
        printf("Empate!\n");
}

int main() {
    /// Declarando as cartas
    Carta carta1 = criaCarta1();
    Carta carta2 = criaCarta2();

    /// Imprimendo as cartas
    imprimeCarta(carta1);
    imprimeCarta(carta2);

    /** Desafio 1
    comparaPopulacao(carta1, carta2);
    */
    /** Desafio 2
    int opcao = menuAtributo();
    comparaCartas(carta1, carta2, opcao);
    */
    /** Desafio 3*/
    int atributo1 = menuAtributo();
    int atributo2 = menuAtributo2(atributo1);

    comparaMestre(carta1, carta2, atributo1, atributo2);

    printf("\n\n=== OBRIGADO POR JOGAR ===\n");

    return 0;
}
