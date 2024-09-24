#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {

  int x, compra;
  unsigned long qntd;
  float valor, valorf = 0, Kg;
  char produto[50];
  //abrir arquivo para escrever em formato a
  FILE * nota_fiscal;
  nota_fiscal = fopen("Nota Fiscal", "a");
  
  compra = 0;
  while(compra != 2){
    
    //PRODUTOS
    
    printf("Digite o numero do setor que deseja\n\n1 - Limpeza e higiene\n2 - Graos e oleos\n3 - Hortifruti\n4 - Molhos e conservas\n5 - Diversos\n6 - Finalizar\n7 - Limpar nota fiscal\n\n");
    scanf("%i", &x);
    switch(x){
      
      case 1:
        compra = 0;
        while(compra !=1){
        printf("Produtos disponiveis:\n\n1 - Alvejante RS:6,50\n2 - Sabao em po RS:10,00\n3 - Pasta de dente RS:9,90\n4 - Papel higienico(unidade) RS:1,50\n5 - Voltar para os setores\n\n");
        scanf("%i", &x);
       
          switch(x){
          
            case 1:
              printf("Digite a quantidade\n");
              scanf("%lu", &qntd);
              valor = 6.5 * (float)qntd;
              strcpy(produto, "Alvejante");
              valorf = valorf + valor;
              break;

            case 2:
              printf("Digite a quantidade\n");
              scanf("%lu", &qntd);
              valor = 10 * (float)qntd;
              strcpy(produto, "Sabao em po");
              valorf = valorf + valor;
              break;

            case 3:
            printf("Digite a quantidade\n");
            scanf("%lu", &qntd);
            valor = 9.9 * (float)qntd;
            strcpy(produto, "Pasta de dente");
            valorf = valorf + valor;
            break;

            case 4:
            printf("Digite a quantidade\n");
            scanf("%lu", &qntd);
            valor = 1.5 * (float)qntd;
            strcpy(produto, "Papel higienico");
            valorf = valorf + valor;
            break;

            case 5:
            compra = 1;
            break;
            
          }

          if(x != 5){
          fprintf(nota_fiscal, "%s x %lu ", produto, qntd);
          fprintf(nota_fiscal, "RS:%.2f\n", valor);
          }
        }
      break;

      case 2:
        compra = 0;
        while(compra !=1){
          printf("Produtos disponiveis:\n\n1 - Arroz 5Kg RS:21.20\n2 - Feijao Kg RS:8,99\n3 - Oleo de soja 900ml RS:5,20\n4 - Azeite de oliva 500ml RS:49,95\n5 - Voltar para os setores\n\n");
          scanf("%i", &x);

            switch(x){

              case 1:
                printf("Digite a quantidade\n");
                scanf("%lu", &qntd);
                valor = 21.20 * (float)qntd;
                strcpy(produto, "Arroz 5Kg");
                valorf = valorf + valor;
                break;

              case 2:
                printf("Digite a quantidade\n");
                scanf("%lu", &qntd);
                valor = 8.99 * (float)qntd;
                strcpy(produto, "Feijao Kg");
                valorf = valorf + valor;
                break;

              case 3:
              printf("Digite a quantidade\n");
              scanf("%lu", &qntd);
              valor = 5.20 * (float)qntd;
              strcpy(produto, "Oleo de soja 900ml");
              valorf = valorf + valor;
              break;

              case 4:
              printf("Digite a quantidade\n");
              scanf("%lu", &qntd);
              valor = 49.95 * (float)qntd;
              strcpy(produto, "Azeite de oliva 500ml");
              valorf = valorf + valor;
              break;

              case 5:
              compra = 1;
              break;

            }

            if(x != 5){
            fprintf(nota_fiscal, "%s x %lu ", produto, qntd);
            fprintf(nota_fiscal, "RS:%.2f\n", valor);
            }
          }
      break;

      case 3:
        compra = 0;
        while(compra !=1){
          printf("Produtos disponiveis:\n\n1 - Batata Kg RS:2,16\n2 - Alface (unidade) RS:1,50\n3 - Laranja Kg RS:1,88\n4 - Maca RS:9,99\n5 - Voltar para os setores\n\n");
          scanf("%i", &x);

            switch(x){

              case 1:
                printf("Digite a quantidade\n");
                scanf("%f", &Kg);
                valor = 2.16 * Kg;
                strcpy(produto, "Batata Kg");
                valorf = valorf + valor;
                break;

              case 2:
                printf("Digite a quantidade\n");
                scanf("%lu", &qntd);
                valor = 1.5 * (float)qntd;
                strcpy(produto, "Alface (unidade)");
                valorf = valorf + valor;
                break;

              case 3:
              printf("Digite a quantidade\n");
              scanf("%f", &Kg);
              valor = 1.88 * Kg;
              strcpy(produto, "Laranja Kg");
              valorf = valorf + valor;
              break;

              case 4:
              printf("Digite a quantidade\n");
              scanf("%f", &Kg);
              valor = 9.99 * Kg;
              strcpy(produto, "maca");
              valorf = valorf + valor;
              break;

              case 5:
              compra = 1;
              break;

            }

            if(x != 5 && x==2){
            fprintf(nota_fiscal, "%s x %lu ", produto, qntd);
            fprintf(nota_fiscal, "RS:%.2f\n", valor);
            }
            else if (x != 5){
              fprintf(nota_fiscal, "%s x %.3f ", produto, Kg);
              fprintf(nota_fiscal, "RS:%.2f\n", valor);
            }
          }
      break;

      case 4:
        compra = 0;
        while(compra !=1){
          printf("Produtos disponiveis:\n\n1 - Extrato de tomate RS:5,85\n2 - Palmito em conserva RS:10,80\n3 - Azeitona em conserva RS:14,90\n4 - Milho enlatado RS:3,49\n5 - Voltar para os setores\n\n");
          scanf("%i", &x);

            switch(x){

              case 1:
                printf("Digite a quantidade\n");
                scanf("%lu", &qntd);
                valor = 5.85 * (float)qntd;
                strcpy(produto, "Extrato de tomate");
                valorf = valorf + valor;
                break;

              case 2:
                printf("Digite a quantidade\n");
                scanf("%lu", &qntd);
                valor = 10.8 * (float)qntd;
                strcpy(produto, "Palmito em conserva");
                valorf = valorf + valor;
                break;

              case 3:
              printf("Digite a quantidade\n");
              scanf("%lu", &qntd);
              valor = 14.9 * (float)qntd;
              strcpy(produto, "Azeitona em conserva");
              valorf = valorf + valor;
              break;

              case 4:
              printf("Digite a quantidade\n");
              scanf("%lu", &qntd);
              valor = 3.49 * (float)qntd;
              strcpy(produto, "Milho enlatado");
              valorf = valorf + valor;
              break;

              case 5:
              compra = 1;
              break;

            }

            if(x != 5){
            fprintf(nota_fiscal, "%s x %lu ", produto, qntd);
            fprintf(nota_fiscal, "RS:%.2f\n", valor);
            }
          }
      break;

      case 5:
        compra = 0;
        while(compra !=1){
          printf("Produtos disponiveis:\n\n1 - Guarda napo RS:1,93\n2 - Pano de prato RS:1,67\n3 - Papel toalha RS:5,97\n4 - Lampada RS:9,90\n5 - Voltar para os setores\n\n");
          scanf("%i", &x);

            switch(x){

              case 1:
                printf("Digite a quantidade\n");
                scanf("%lu", &qntd);
                valor = 1.93 * (float)qntd;
                strcpy(produto, "Guarda napo");
                valorf = valorf + valor;
                break;

              case 2:
                printf("Digite a quantidade\n");
                scanf("%lu", &qntd);
                valor = 1.67 * (float)qntd;
                strcpy(produto, "Pano de prato");
                valorf = valorf + valor;
                break;

              case 3:
              printf("Digite a quantidade\n");
              scanf("%lu", &qntd);
              valor = 5.97 * (float)qntd;
              strcpy(produto, "Papel toalha");
              valorf = valorf + valor;
              break;

              case 4:
              printf("Digite a quantidade\n");
              scanf("%lu", &qntd);
              valor = 9.9 * (float)qntd;
              strcpy(produto, "Lampada");
              valorf = valorf + valor;
              break;

              case 5:
              compra = 1;
              break;

            }

            if(x != 5){
            fprintf(nota_fiscal, "%s x %lu ", produto, qntd);
            fprintf(nota_fiscal, "RS:%.2f\n", valor);
            }
          }
      break;

      case 6:
        printf("Imprimindo nota fiscal\n");
        printf("O valor da compra eh de RS:%.2f", valorf);
        fprintf(nota_fiscal, "Total: Rs:%.2f", valorf);
        compra = 2;
      
      break;

      case 7:
      fseek(nota_fiscal, 0, SEEK_SET);
      ftruncate(fileno(nota_fiscal), 0);
      break;
      
    }

  }

  fclose(nota_fiscal);
  return 0;
}
