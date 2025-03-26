#include <stdio.h>

int main() {

    //CARTA 01
    char pronto [5];    
    char estado [50], codigo_carta [8], cidade [30];
    int populacao = 0, pontos_turisticos = 0;
    float area_km = 0, pib = 0;
    char ok [5];

    //CARTA02
    char estado2 [50], codigo_carta2 [8], cidade2 [30];
    int populacao2 = 0, pontos_turisticos2 = 0;
    float area_km2 = 0, pib2 = 0;
    
    
    
    printf("Seja Bem Vindo ao Super Trunfo, jogo de Cartas!\n"); //Mensagem de Boas-Vindas.
    printf("-----------------------------------------------------------------------------------------\n");

    printf("Inicialmente, será necessário inserir os Dados das Cartas, conforme solicitado cada um dos Dados!\n"); //Instrução

    printf("Voce está Pronto(a)?: "); //Pergunta Interativa
    scanf ("%5s", &pronto);

    printf("-----------------------------------------------------------------------------------------\n");
    printf("Vamos Começar!\n"); 
    printf("Inserir Dados da Carta 01:\n"); //Comece
    printf("-----------------------------------------------------------------------------------------\n");

    getchar();                         //COMEÇANDO NA CARTA 01

    printf("Digite o Nome do Estado: "); 
    fgets(estado, 50, stdin);

    printf("Digite o Código da Carta (Sigla do Estado + 01 ): ");
    fgets(codigo_carta, 8, stdin);
    
    printf("Digite o Nome da Cidade dessa Carta: ");  //Limpeza do Buffer de Entrada
    fgets(cidade, 30, stdin);
    //Leitura de Strings com Nomes compostos Fgets

    printf("Digite a População: "); 
    scanf("%d", &populacao);

    printf("Digite a Área em Km (somente Números): ");
    scanf(" %f", &area_km);  //Espaço antes do % do scanf, garante que o caracteres de nova linha ou espaços residuais não interfiram com a próxima leitura.    
          
    //Espaço de 3 Linhas, necessário para Entrada de Dados serem feita com Exito.

    printf("Digite o Valor do PIB: "); 
    scanf(" %f", &pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);
    printf("-----------------------------------------------------------------------------------------\n");

    printf("Muito bem! Você Acabou de inserir os Dados da Primeira Carta!");
    printf(" Vamos Agora Para Carta 02!\n");
    printf("-----------------------------------------------------------------------------------------\n");


    printf("Inserir Dados da Carta 02:\n"); //Comece
    printf("-----------------------------------------------------------------------------------------\n");

    getchar();                         //COMEÇANDO NA CARTA 02

    printf("Digite o Nome do Estado (CARTA 02): "); 
    fgets(estado2, 50, stdin);

    printf("Digite o Código da Carta (Sigla do Estado + 02 ): ");
    fgets(codigo_carta2, 8, stdin);
    
    printf("Digite o Nome da Cidade dessa Carta (CARTA 02): "); 
    fgets(cidade2, 30, stdin);
    //Leitura de Strings com Nomes compostos Fgets

    printf("Digite a População (CARTA 02): "); getchar (); //Limpeza do Buffer de Entrada
    scanf("%d", &populacao2);

    printf("Digite a Área em Km (somente Números): ");
    scanf(" %f", &area_km2); //Espaço antes do % do scnaf, garante que o caracteres de nova linha ou espaços residuais não interfiram com a próxima leitura.    

       
    printf("Digite o Valor do PIB (CARTA 02): "); 
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turísticos (CARTA 02): ");
    scanf("%d", &pontos_turisticos2);
    printf("-----------------------------------------------------------------------------------------\n");

    printf("Muito Bem por ter chegado até Aqui. Iremos Mostrar as Informações das Cartas 01 e 02!\n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("Digite um OK: ");
    scanf("%s", ok); 

    printf("==================(CARTA 01)==================\n\n");

    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em KM: %f\n", area_km);
    printf("PIB: %f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
   
    printf("==================(CARTA 02)==================\n\n");

    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em KM: %f\n", area_km2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
   
    return 0;

}