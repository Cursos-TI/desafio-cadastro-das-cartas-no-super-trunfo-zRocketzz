#include <stdio.h>

// Olá, me chamo Christian Ruan! E aqui é a minha primeira atividade com o professor Sérgio Cardoso.
// E esse é o desafio nível novato de Cartas Super Trunfo. Criando as Cartas do Super Trunfo!

int main() {
                                               //Declando as variaveis

    char estado, estado2;                    // Representa o Estado, por exemplo: A, B, C, D...
    char codigo[50], codigo2[50];           // Representa o Código da carta, por exemplo: A01, B02, C03, D04...
    char cidade[50], cidade2[50];          // Para armazenar e representar o nome do Estado utilizado.
    int populacao, populacao2;            // Número da população.
    double area, area2;                  // Número da área por km².
    double pib, pib2;                   // Referente ao número do PIB.
    int ponto, ponto2;                 // Quantos Pontos Turísticos existem nesse local.
    float densidade1, densidade2;     // Densidade Populacional.
    float pibper1, pibper2;          // Pib per Capital.

    printf("Olá, seja bem-vindo ao Desafio do Super Trunfo! \n");
    printf("Utilizaremos 2 cartas para fazer o jogo. \n");

                                   //Função printf exibe na tela e scanf coleta as informações referentes a carta 02
    printf("Carta número 1: \n");
    printf("Digite uma letra de A a D: \n");
    scanf(" %c", &estado);
    getchar();                    // Limpa o Enter do buffer para evitar problemas na leitura seguinte

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Estado: \n");
    getchar();                   // Para limpar o buffer antes de fgets()
    fgets(cidade, 50, stdin);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%lf", &area);

    printf("PIB: \n");
    scanf("%lf", &pib);

    printf("Pontos turísticos: \n");
    scanf("%d", &ponto);

    printf("Finalizamos os dados da primeira carta! \n");

    // Após fazer a primeira pesquisa, continuaremos para a segunda pesquisa.
    // E finalizar com as duas cartas modeladas. 

    printf("Agora, vamos dar início à segunda carta.\n");

    printf("Carta número 2 \n"); 
    getchar();

    printf("Digite uma letra de A a D: \n");
    scanf(" %c", &estado2);
    getchar();  // Limpa o Enter do buffer para evitar problemas na leitura seguinte

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Estado: \n");
    getchar();  // Para limpar o buffer antes de fgets()
    fgets(cidade2, 50, stdin);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Digite o valor da área: \n");
    scanf("%lf", &area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib2);

    printf("Pontos turísticos: \n");
    scanf("%d", &ponto2);

    //Para calcular a Densidade Populaciona, será da seguinte forma:
    //Divida a população da cidade pela sua área.
    //O resultado será a densidade populacional,que representa o número de habitantes por quilômetro quadrado.
    densidade1 = (float) (populacao / area);  
    densidade2 = (float) (populacao2 / area2);

    // Como calcular o PIB per Capita:
    // Divida o PIB da cidade pela sua população.
    // O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.
    pibper1 = (float) (pib / populacao);    
    pibper2 = (float) (pib2 / populacao2);

    //Agora finalizando, vamos fazer aparecer as duas cartas.
    //Printf para exibir na tela todas as informações digitadas pelo usuário referente a carta 01 e 02.

    printf("Carta 1: ");
    printf("Nome do Estado: %c\n", estado);
    printf("Código da carta: %c%s\n",estado, codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %lf km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);                // Formatado para 2 casas decimais
    printf("Números de Pontos Turísticos: %d\n", ponto); 
    printf("Densidisade Populacional: %.2lf hab/km²\n", densidade1); 
    printf("PIB per Capita: %.2lf reais\n", pibper1);
    printf("\n");

    //Agora vamos fazer aparecer a segunda carta.

    printf("Carta 2:"); 
    printf("Nome do Estado: %c\n", estado2);
    printf("Código da carta: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %lf km²\n", area2);
    printf("PIB: %.2lf bilhões\n", pib2);                // Formatado para 2 casas decimais
    printf("Números de Pontos Turísticos: %d\n", ponto2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pibper2);
    printf("\n");
    printf("Desafio finalizado! Obrigado pela sua colaboração!\n");


    return 0;
}
