#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "func.h"

clearBuffer(){
  char c;
  while((c = getchar()) != '\n' && c != EOF);
}

void Soma_de_Elementos_em_um_Array(){
  int quant;
  //Crie um programa que solicita ao usuário inserir elementos em um array e calcule a soma desses elementos
  printf("-------Soma de elementos em um array---------\n");
  printf("Digite a quantidade de elementos que vamos somar: \n");
  scanf("%d", &quant);

   int *array = (int *)malloc(quant * sizeof(int));
  printf("Digite os valores: ", quant);
  for (int i =0; i < quant; i ++){
    scanf("%d", &array[i]);
  }

  int soma = 0 ;
  for (int i =0; i< quant;i++){
    soma += array[i];

  }
  printf("RESULTADO DA SOMA: %d", soma);
  clearBuffer();
}


void Manipulacao_de_strings(){
  //Desenvolva um programa que recebe uma string do usuário e conta o número de vogais nela.
  printf("---------MANIPULAÇÃO DE STRINGS---------\n");
  char string[100];

  printf("Digite uma palavra: ");
  scanf(" %s", &string);
  int vogais =0;
  for (int i = 0; string[i] != '\0'; i++) {
    if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
        string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
        vogais++; 
    }

}
  printf("A QUANTIDADE DE VOGAIS É: %d\n", vogais);
}

void Cadastro_de_produtos_usando_struct(){
  //Crie uma estrutura de dados chamada "Produto" que armazena nome, preço e quantidade em estoque. Permita ao usuário cadastrar produtos, exibir as informações e calcular o valor total em estoque (preço * quantidade).
  struct produto{
    char nome[20];
    float preco;
    int quantidade;
  };
  struct produto item;
  int escolha;
  printf("---------CADASTRO DE PRODUTOS---------\n");

    printf("Cadastre os produtos\n");
    printf("Digite o nome do produto: ");
    scanf("%s", &item.nome);
    printf("Digite o preço:");
    scanf("%f", &item.preco);
    printf("Digite a quantidade: ");
    scanf("%d", &item.quantidade);
    printf("\n");
    printf("Listando os Produtos\n");
    printf("Nome: %s\n", item.nome);
    printf("Preço: %.2f\n",item.preco);
    printf("No estoque: %d\n",item.quantidade);
    printf("\n");
    printf("Valor do estoque do produto\n");
    printf("Valor total: %.2f\n", item.preco * item.quantidade);

}


void operacoes_matriciais(){
   int q = 3, p = 3;
      int i, j;
      int matriz[3][3];
      int transposta[3][3];

      printf("Digite os elementos da matriz %dx%d:\n", 3, 3);
      for (i = 0; i < 3; i++) {
          for (j = 0; j < 3; j++) {
              scanf("%d", &matriz[i][j]);
          }
      }
      for (i = 0; i < 3; i++) {
          for (j = 0; j < 3; j++) {
              transposta[j][i] = matriz[i][j];
          }
      }
      printf("\nMatriz Transposta:\n");
      for (i = 0; i < 3; i++) {
          for (j = 0; j < 3; j++) {
              printf("%d ", transposta[i][j]);
          }
          printf("\n");
      }
  }

void manipulacao_de_ponteiros_em_string(){
  //Implemente uma função que recebe uma string como entrada e retorna a mesma string, mas com todas as letras convertidas para maiúsculas. Use ponteiros para percorrer a string.
    char string[100];
        char *str;

        printf("Digite uma string: ");
        scanf("%s", string);

        str = string;
        while (*str) {
            *str = toupper((unsigned char) *str);
            str++;
        }

        printf("Resultado: %s\n", string);

    }



void leitura_escrita_de_registros_em_arquivos_binarios(){
  //Desenvolva um programa que cria e manipula um arquivo binário para armazenar registros de funcionários. Cada registro deve conter nome, idade e salário. Permita ao usuário adicionar novos registros, listar todos os registros e buscar por registros específicos pelo nome.
    struct funcionarios{
        char nome [20]; 
        int idade;
        float salario;
      };
    struct funcionarios item;

    int escolha;
    printf("---REGISTRO DE FUNCIONÁRIOS---\n");
    printf("1. Acessar registro\n");
    clearBuffer();
    scanf("%d", &escolha);
    FILE *arquivo = fopen("registro_funcionarios.bin", "wb");
        if(escolha == 1){
            printf("Digite o nome do funcionário: ");
            scanf("%s", item.nome);
            printf("Digite a idade do funcionário: ");
            scanf("%d", &item.idade);
            printf("Digite o salário do funcionário: ");
            scanf("%f", &item.salario);
            fwrite(&item, sizeof(item),1, arquivo);
            printf("Funcionário cadastrado\n");
            printf("\n LISTA DE FUNCIONÁRIOS ATÉ O MOMENTO\n");
            printf("Nome: %s\n", item.nome);
            printf("Idade: %d\n",item.idade);
            printf("Salario:%2.f\n",item.salario);
            fclose(arquivo);
            printf("\n Buscar funcionário\n");
            char nome_busca[20];
            printf("Digite o nome do funcionário a ser buscado: ");
            scanf("%s", nome_busca);

            FILE *arquivo = fopen("registro_funcionarios.bin", "rb");

            int encontrado = 0;
            while (fread(&item, sizeof(item), 1, arquivo)) {
                if (strcmp(item.nome, nome_busca) == 0) {
                    encontrado = 1;
                    printf("Funcionário encontrado:\n");
                    printf("Nome: %s\n", item.nome);
                    printf("Idade: %d\n", item.idade);
                    printf("Salário: %.2f\n", item.salario);
                    break;
                }
            }
    } 
}


void Ordenacao_de_structs(){
  //Crie um programa que ordena um array de structs com base em um dos campos (por exemplo, idade) usando qsort da biblioteca glibc.
    struct idade{
        int idade [20]; 
      };
    //int compare(const void *a, const void *b) {
     //   return (*(int*)a - *(int*)b);
    //};
      struct idade item;
    printf("Digite as idades de 20 pessoas:\n");
    for (int i = 0; i < 20; i++) {
        printf("Idade da pessoa %d: ", i + 1);
      //  scanf("%d", &item[i].idade);
    }
    //qsort(item, 20, sizeof(struct idade);
    printf("\nIdades ordenadas:\n");
        for (int i = 0; i < 20; i++) {
          //  printf("%d\n", item[i].idade);
        }


}



void manipulacao_de_ponteiros(){
  //Implemente uma função que recebe um array e seu tamanho como argumentos e retorna um novo array invertido, utilizando ponteiros.
    int tamanho;
    printf("-----------Array invertido-----------\n");
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);
    int *array = (int*) malloc(tamanho * sizeof(int));
    printf("Digite os valores do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }
    printf("Array original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    int *Invertido = (int*) malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++) {
        Invertido[i] = array[tamanho - 1 - i];
    }
    printf("Invertido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", Invertido[i]);
    }
}


void calculo_de_estatisticas(){
  // Escreva um programa que recebe um array de números e calcula a média, mediana e moda dos elementos.
  int num[10];
  int i;
  printf("Digite os valores:  ");
  for (int i =0; i < 10; i ++){
    scanf("%d", &num[i]);
  }

    float soma = 0;
    for (i = 0; i < 10; i++) {
        soma += num[i];
    }
    float media;
    media = (soma / 10);


    int mediana;
    int meio = 10 / 2;
    if (10 % 2 == 0) {
        mediana = (num[meio - 1] + num[meio]) / 2;
    } else {
        mediana = num[meio];
    }

    int freq[101] = {0}; 
    for (i = 0; i < 10; i++) {
        freq[num[i]]++;
    }
    int moda = 0;
    int max_frequencia = 0;
    for (i = 0; i <= 100; i++) {
        if (freq[i] > max_frequencia) {
            max_frequencia = freq[i];
            moda = i;
        }
    }

    printf("Média: %.2f\n", media);
    printf("Mediana: %d\n", mediana);
    printf("Moda: %d\n", moda);

}


void manipulacao_de_tempo(){
  //Utilize a biblioteca time.h para calcular o tempo que um determinado trecho de código leva para ser executado.
    clock_t inicio = clock();
    printf("---Este é o programa para calcular o tempo de execução---\n ");
    printf("---lista de exercicios---\n ");
    clock_t fim = clock();
    printf("Tempo de execucao: %ld segundos\n", (long)(fim));
}