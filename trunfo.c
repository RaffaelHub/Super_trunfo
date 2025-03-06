#include <stdio.h>
#include <string.h>

int main() {
    int habitantes_1, habitantes_2,pib_1,pib_2;
    
    char letra_carta1; 
    char code_carta1[4],code_carta2[4], cidade_1[50], cidade_2[50];

    printf("----------Seja bem vindo----------\n");
    printf("Vamos jogar SUPER_TRUNFO \n");

    printf("Insira uma Letra de 'A' a 'H': ");
    scanf(" %c", &letra_carta1);
    printf("Insita um code EXEMPLO(A01): ");
    scanf(" %s", code_carta1);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(cidade_1, 50, stdin);
    cidade_1[strcspn(cidade_1, "\n")] = 0;
    printf("Quantos habitantes?: ");
    scanf("  %d", &habitantes_1);
    printf("Qual o PIB da cidade? ");
    scanf("  %d", &pib_1);

    return 0;

}