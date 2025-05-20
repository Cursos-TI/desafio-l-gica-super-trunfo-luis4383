#include <stdio.h>



    typedef struct {
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
    float densidade_demografica;
    } Carta;


    float calcular_densidade(unsigned long int populacao, float area) {
    if (area > 0) {
        return (float)populacao / area;
    } else {
       
    }
}

    int main() {
    Carta carta1, carta2;
    int escolha;

   
    strcpy(carta1.nome, "distrito federal");
    carta1.populacao = 213000;
    carta1.area = 8516.0;
    carta1.pib = 14400000.0;
    carta1.num_pontos_turisticos = 15;
    carta1.densidade_demografica = calcular_densidade(carta1.populacao, carta1.area);

    
    strcpy(carta2.nome, "bahia");
    carta2.populacao = 450000;
    carta2.area = 2780025.0;
    carta2.pib = 4900000.0;
    carta2.num_pontos_turisticos = 25;
    carta2.densidade_demografica = calcular_densidade(carta2.populacao, carta2.area);

    printf("--- Super Trunfo de estados ---\n\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("Carta 2: %s\n\n", carta2.nome);

     {
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("0 - Sair\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha);

printf("\n--- Resultado da Comparacao ---\n");
printf("estados: %s vs %s\n", carta1.nome, carta2.nome);

switch (escolha) {
 case 1:
printf("Atributo: Populacao\n");
printf("%s: %lu\n", carta1.nome, carta1.populacao);
printf("%s: %lu\n", carta2.nome, carta2.populacao);
if (carta1.populacao > carta2.populacao) {
printf("Vencedor: %s\n", carta1.nome);
} else if (carta2.populacao > carta1.populacao) {
printf("Vencedor: %s\n", carta2.nome);}
 else {
printf("Empate!\n");}

break;
 case 2:
printf("Atributo: Area\n");
printf("%s: %.2f\n", carta1.nome, carta1.area);
printf("%s: %.2f\n", carta2.nome, carta2.area);
if (carta1.area > carta2.area) {
printf("Vencedor: %s\n", carta1.nome);}
 else if (carta2.area > carta1.area) {
printf("Vencedor: %s\n", carta2.nome);}
 else {
printf("Empate!\n");}

break;
case 3:
printf("Atributo: PIB\n");
printf("%s: %.2f\n", carta1.nome, carta1.pib);
printf("%s: %.2f\n", carta2.nome, carta2.pib);
if (carta1.pib > carta2.pib) {
printf("Vencedor: %s\n", carta1.nome);}
 else if (carta2.pib > carta1.pib) {
printf("Vencedor: %s\n", carta2.nome);}
else {       
  printf("Empate!\n");}

break;
case 4:
printf("Atributo: Numero de Pontos Turisticos\n");
printf("%s: %d\n", carta1.nome, carta1.num_pontos_turisticos);
printf("%s: %d\n", carta2.nome, carta2.num_pontos_turisticos);
if (carta1.num_pontos_turisticos > carta2.num_pontos_turisticos) {
printf("Vencedor: %s\n", carta1.nome);}
 else if (carta2.num_pontos_turisticos > carta1.num_pontos_turisticos) {
printf("Vencedor: %s\n", carta2.nome);}
 else {
printf("Empate!\n");}

break;
case 5:
printf("Atributo: Densidade Demografica\n");
printf("%s: %.2f\n", carta1.nome, carta1.densidade_demografica);
printf("%s: %.2f\n", carta2.nome, carta2.densidade_demografica);
if (carta1.densidade_demografica < carta2.densidade_demografica) {
printf("Vencedor: %s\n", carta1.nome);
} else if (carta2.densidade_demografica < carta1.densidade_demografica) {
printf("Vencedor: %s\n", carta2.nome);}
 else {
printf("Empate!\n");}

break;
case 0:
printf("Saindo do jogo.\n");
break;
default:
printf("Opcao invalida. Tente novamente.\n");}

printf("\n");}
    

    return 0;


 }
