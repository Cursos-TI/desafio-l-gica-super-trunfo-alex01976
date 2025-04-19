#include <stdio.h>

int main() {

    char EstadoA [50];
    char Codigo_da_cartaA[50];
    char Nome_da_cidadeA[50];
    int PopulacaoA;
    float PIBA;
    int Numero_de_Pontos_TuristicosA;
    

    char EstadoB [50];
    char Codigo_da_cartaB[50];
    char Nome_da_cidadeB[50];
    int populacaoB;
    float Area_em_KmB;
    float PIBB;
    int Numero_de_Pontos_TuristicosB;
    
    
printf ("Desafio Super-Trunfo 2 - Novato.\n");

printf("Estado A\n\n");

printf("Digite o Estado da carta A: \n");
   scanf("%s",&EstadoA);

   printf("Digite o Código da Carta: \n");
   scanf("%s",&Codigo_da_cartaA);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &Nome_da_cidadeA);

   printf("População: \n");
   scanf("%d",&populacaoA);

   printf("Área em Km \n");
   scanf("%f",&Area_em_KmA);

   printf("PIB: \n");
   scanf("%f", &PIBA);

   printf("Número de Pontos Turísticos: \n");
   scanf("%d", &Numero_de_Pontos_TuristicosA);


if (PIBA > PIBB){
printf("Cidade A é mais rica!\n");
} else {
    printf("Cidade B é mais rica!");
}


    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
