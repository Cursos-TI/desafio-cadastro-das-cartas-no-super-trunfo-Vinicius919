#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //
        char Estado1, Estado2;
        char Codigo1[3], Codigo2[3];
        char NomeCidade1[20], NomeCidade2[20];
        int Populacao1, Populacao2;
        float Area1, Area2;
        float Pib1, Pib2;
        int NPontosTur1, NPontosTur2;
// Primeira Carta
        printf("\tPrimeira carta\n");
        printf("Estado(apenas um caracter): ");
        scanf("%c", &Estado1);

        printf("Codigo do primeiro Estado: ");
        scanf("%s", Codigo1);
getchar();
        printf("Nome da Cidade: ");
        scanf("%20[^\n]", NomeCidade1);

        printf("Populacao: ");
        scanf("%d", &Populacao1);

        printf("Area do local: ");
        scanf("%f", &Area1);

        printf("PIB: ");
        scanf("%f", &Pib1);

        printf("Numeros de pontos turisticos");
        scanf("%d", &NPontosTur1);
getchar();
// Segunda carta
        printf("\n\tSegnda carta\n");
        printf("Segundo estado(apenas um caracter): ");
        scanf("%c", &Estado2);

        printf("Codigo do segundo Estado: ");
        scanf("%s", Codigo2);
getchar();
        printf("Nome da Cidade: ");
        scanf("%20[^\n]", NomeCidade2);

        printf("Populacao: ");
        scanf("%d", &Populacao2);

        printf("Area do local: ");
        scanf("%f", &Area2);

        printf("PIB: ");
        scanf("%f", &Pib2);

        printf("Numeros de pontos turisticos");
        scanf("%d", &NPontosTur2);
getchar();
//imprimindo carta1
printf("======Imprimindo infomracoes======\n");
printf("Estado1: %c\t\tEstado2: %c\n", Estado1, Estado2);
printf("Codigo1: %s\t\tCodigo2: %s\n", Codigo1, Codigo2);
printf("Cidade1: %s\t\tCidade2: %s\n", NomeCidade1, NomeCidade2);
printf("Populacao1: %d\t\t Populacao2: %d\n", Populacao1, Populacao2);
printf("Area1: %.2f\t\tArea2: %.2f\n", Area1, Area2);
printf("Pib1: %.2f\t\tPib2: %.2f\n", Pib1, Pib2);
printf("Pontos turisticos1: %d\t\tPontos turisticos2: %d\n", NPontosTur1, NPontosTur2);


    return 0;
}
