#include <stdio.h>

int main() {

    char EstadoA [50];
    char Codigo_da_cartaA[50];
    char Nome_da_cidadeA[50];
    float Area_em_KmA;
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
scanf("%d",&PopulacaoA);

printf("Área em Km \n");
scanf("%f",&Area_em_KmA);

printf("PIB: \n");
scanf("%f", &PIBA);

printf("Número de Pontos Turísticos: \n");
scanf("%d", &Numero_de_Pontos_TuristicosA);

printf("Estado B\n");

   printf("Digite o Estado B: \n");
   scanf("%s", &EstadoB);

   printf("Códidigo: \n");
   scanf("%s", &Codigo_da_cartaB);

   printf("Cidade: \n");
   scanf("%s", &Nome_da_cidadeB);

   printf("População: \n");
   scanf("%d", &populacaoB);
    
   printf("Área: \n");
   scanf("%f", &Area_em_KmB);
   
   printf("PIB: \n");
   scanf("%f",&PIBB);

   printf("Número de Pontos Turísticos: \n");
   scanf("%d", &Numero_de_Pontos_TuristicosB);

   if (PopulacaoA < populacaoB){
    printf("Cidade A venceu, maior população!\n");
   }else {
    printf("Cidade B venceu, maior população!\n");
   }
    if (PIBA > PIBB){
    printf("Cidade A é mais rica, venceu!\n");
    } else {
        printf("Cidade B é mais rica, venceu!\n");
    }
    if (Area_em_KmA > Area_em_KmB){
        printf("A cidade A vence, maior área!\n");
    }else {
        printf("A cidade B vence, maior área!\n");
    }
    if (Numero_de_Pontos_TuristicosA > Numero_de_Pontos_TuristicosB){
        printf("Cidade A vence,tem mais pontos turísticos!\n");
    }else{
        printf("Cidade B vence, tem mais pontos turísticos!\n");
    }



    return 0;
}
