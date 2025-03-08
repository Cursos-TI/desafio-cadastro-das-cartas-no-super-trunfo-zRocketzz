#include <stdio.h>

// Olá, me chamo Christian Ruan! E aqui é a minha primeira atividade com o professor Sérgio Cardoso.
// E esse é o desafio nível novato. Criando as Cartas do Super Trunfo!

int main() {

    char estado;              // Representa o Estado, por exemplo: A, B, C, D...
    char codigo[4];           // Representa o Código da carta, por exemplo: A01, B02, C03, D04...
    char cidade[50];          // Para armazenar e representar o nome do Estado utilizado.
    int populacao;            // Número da população.
    double area;              // Número da área por km².
    double pib;               // Referente ao número do PIB.
    int ponto;                // Quantos Pontos Turísticos existem nesse local.

    printf("Olá, seja bem-vindo ao Desafio do Super Trunfo! \n");
    printf("Utilizaremos 2 cartas para fazer o jogo. \n");

    printf("Carta número 1: \n");
    getchar();  // Limpa o Enter do buffer

    printf("Digite uma letra de A a D: \n");
    scanf("%c", &estado);
    getchar();  // Limpa o Enter do buffer para evitar problemas na leitura seguinte

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite qual será o Estado: \n");
    getchar();  // Para limpar o buffer antes de fgets()
    fgets(cidade, 50, stdin);

    printf("Digite qual é o número da população: \n");
    scanf("%d", &populacao);

    printf("Digite o valor da área: \n");
    scanf("%lf", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib);

    printf("Quantos pontos turísticos existem nesse local? \n");
    scanf("%d", &ponto);

    printf("Finalizamos os dados da primeira carta! \n");

    // Após fazer a primeira pesquisa, continuaremos para a segunda pesquisa.
    // E finalizar com as duas cartas modeladas. 

    printf("Agora, vamos dar início à segunda carta.\n");

    printf("Carta número 2 \n"); 
    getchar();

    printf("Digite uma letra de A a D: \n");
    scanf("%c", &estado);
    getchar();  // Limpa o Enter do buffer para evitar problemas na leitura seguinte

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite qual será o Estado: \n");
    getchar();  // Para limpar o buffer antes de fgets()
    fgets(cidade, 50, stdin);

    printf("Digite qual é o número da população: \n");
    scanf("%d", &populacao);

    printf("Digite o valor da área: \n");
    scanf("%lf", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib);

    printf("Quantos pontos turísticos existem nesse local? \n");
    scanf("%d", &ponto);

    //Agora finalizando, vamos fazer aparecer as duas cartas.
    printf("Carta: ")
    return 0;
}
