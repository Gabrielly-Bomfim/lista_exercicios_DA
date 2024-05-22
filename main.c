#include <stdio.h>
#include "func.h"

int main(void) {
  int escolha;
  printf("---------------LISTA DE EXERCICIOS GABRIELLY------------------- \n");
  printf("1.Soma de Elementos em um Array: \n");
  printf("2.Manipulação de Strings\n");
  printf("3.Cadastro de Produtos usando Struct: \n");
  printf("4.Operações Matriciais\n");
  printf("5.Manipulação de Ponteiros em String:\n");
  printf("6.Leitura e Escrita de Registros em Arquivos Binários:\n");
  printf("7.Ordenação de Structs: \n");
  printf("8.Manipulação de Ponteiros:\n");
  printf("9.Cálculo de Estatísticas em um Array:\n");
  printf("10.Manipulação de Tempo:\n");
  printf("\nEscolha um exercicio: ");
  scanf("%d", &escolha);

  if(escolha == 1){
      printf("soma\n");
    }else if(escolha == 2){
     // Manipulacao_de_strings();
    }else if(escolha == 3){
      //Cadastro_de_produtos_usando_struct();
    }else if(escolha ==4){
      //operacoes_matriciais();
    }else if(escolha ==5){
      //manipulacao_de_ponteiros_em_string();
    }else if(escolha ==6){
     // leitura_escrita_de_registros_em_arquivos_binarios();

    }else if (escolha == 7){
     // Ordenacao_de_structs();
    }else if (escolha == 8){
    //  manipulacao_de_ponteiros();
    }else if(escolha == 9){
    //  calculo_de_estatisticas();
    }else if(escolha == 10){
    //  manipulacao_de_tempo();
    }

  }

