#include <stdio.h>

int main() {
    // Estrutura para armazenar os dados das cartas
    int crt1_estado;
    int crt2_estado;
    char crt1_codigo[4]; // Mudança aqui, pesquisa 20.03.2025
    char crt2_codigo[4]; // Mudança aqui, pesquisa 20.03.2025
    char crt1_nomeCidade[50];
    char crt2_nomeCidade[50];
    int crt1_populacao;
    int crt2_populacao;
    float crt1_area;
    float crt2_area;
    float crt1_pib;
    float crt2_pib;
    int crt1_numPontosTuristicos;
    int crt2_numPontosTuristicos;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Digite o Estado (Letras de A até H): ");
    scanf(" %c", &crt1_estado); // Adicionado espaço para consumir o '\n' deixado pelo buffer. Mudança aqui, pesquisa 20.03.2025

    printf("Código da Carta contendo a Letra da Carta acrescido de um numero de 01 a 04 (ex: A01): ");
    scanf("%s", crt1_codigo);

    printf("Nome da Cidade: ");
    scanf(" %s", crt1_nomeCidade); // Adicionado espaço para consumir o '\n' deixado pelo buffer. Mudança aqui, pesquisa 20.03.2025

    printf("População: ");
    scanf("%d", &crt1_populacao);

    printf("Área (em km²): ");
    scanf("%f", &crt1_area);

    printf("PIB(em bilhoes de reais): ");
    scanf("%f", &crt1_pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &crt1_numPontosTuristicos);

    printf("\n"); // Adiciona uma linha em branco para separar as entradas

    // Leitura dos dados da Carta 2
    printf("Digite os dados da Carta 2:\n");

    printf("Digite o Estado (Letras de A até H): ");
    scanf(" %c", &crt2_estado); // Adicionado espaço para consumir o '\n' deixado pelo buffer. Mudança aqui, pesquisa 20.03.2025

    printf("Código da Carta contendo a Letra da Carta acrescido de um numero de 01 a 04 (ex: A01): ");
    scanf("%s", crt2_codigo);

    printf("Nome da Cidade: ");
    scanf(" %s", crt2_nomeCidade); // Adicionado espaço para consumir o '\n' deixado pelo buffer. Mudança aqui, pesquisa 20.03.2025

    printf("População: ");
    scanf("%d", &crt2_populacao);

    printf("Área (em km²): ");
    scanf("%f", &crt2_area);

    printf("PIB(em bilhoes de reais): ");
    scanf("%f", &crt2_pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &crt2_numPontosTuristicos);

    printf("\n"); // Adiciona uma linha em branco para separar as saídas

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", crt1_estado);
    printf("Código: %s\n", crt1_codigo);
    printf("Nome da Cidade: %s\n", crt1_nomeCidade);
    printf("População: %d habitantes\n", crt1_populacao);
    printf("Área: %.2f km²\n", crt1_area);
    printf("PIB: %.2f bilhões de reais\n", crt1_pib);
    printf("Número de Pontos Turísticos: %d\n", crt1_numPontosTuristicos);

    printf("\n"); // Adiciona uma linha em branco para separar as cartas

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", crt2_estado);
    printf("Código: %s\n", crt2_codigo);
    printf("Nome da Cidade: %s\n", crt2_nomeCidade);
    printf("População: %d habitantes\n", crt2_populacao);
    printf("Área: %.2f km²\n", crt2_area);
    printf("PIB: %.2f bilhões de reais\n", crt2_pib);
    printf("Número de Pontos Turísticos: %d\n", crt2_numPontosTuristicos);

    return 0;
}
