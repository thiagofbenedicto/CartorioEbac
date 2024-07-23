#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //bibliotexa de alocações de texto por registro 
#include <string.h> //biblioteca responsável por cuidar das string

int registro() //Função responsável por cadastrar os usuários no sistema
{
      //início criação de variáveis/string
      char arquivo[40];
      char cpf[40];
      char nome [40];
      char sobrenome [40];
      char cargo [40];
      // final da criação de variáveis/string 

      printf("Digite o CPF a ser cadastrado: "); //Coletando informação do usuário
      scanf("%s", cpf); //%s refere-se a string

      strcpy(arquivo, cpf); //Responsável por copiar os valores das string

      FILE *file; //Cria o arquivo
      file = fopen(arquivo, "w"); //Cria o arquivo
      fprintf(file,cpf); // Salvo o valor da variável
      fclose(file); // Fecha o arquivo

      file = fopen(arquivo, "a");
      fprintf(file, ",");
      fclose(file);

      printf("Digite o nome a ser cadastrado: ");
      scanf("%s", nome);

      file = fopen(arquivo, "a");
      fprintf(file, nome);
      fclose(file);

      file = fopen(arquivo, "a");
      fprintf(file, ",");
      fclose(file);

      printf("Digite o sobrenome a ser cadastrado: ");
      scanf("%s", sobrenome);

      file = fopen(arquivo, "a");
      fprintf(file, sobrenome);
      fclose(file);

      file = fopen(arquivo, "a");
      fprintf(file, ",");
      fclose(file);

      printf("Digite o cargo a ser cadastrado: ");
      scanf("%s", cargo);

      file = fopen(arquivo, "a");
      fprintf(file, cargo);
      fclose(file); 

      system("pause");

}

int consulta()
{
      setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem 

      char cpf[40];
      char conteudo[200];

      printf("Digite o Cpf a ser consultado: ");
      scanf("%s", cpf);

      FILE *file;
      file = fopen(cpf, "r");

      if(file == NULL)
      {
            printf("Não foi possível abrir o arquivo, não localizado!.\n");
      }
      
      while(fgets(conteudo, 200, file) != NULL)
      {
            printf("\nEssas são informações do usuário: ");
            printf("%s", conteudo);
            printf("\n\n");
      
      }

      system("pause");


}

int deletar()
{
      char cpf[40];

      printf("Digite o CPF a ser deletado: ");
      scanf("%s", cpf);

      remove(cpf);

      FILE *file; 
      file = fopen(cpf, "r");

      if(file ==  NULL)
      {
            printf("O usuário não se encontra no sistema!.\n");
            system("pause");

      }



}

int main()
{

    int opcao=0; //Definindo variáveis
    int x=1;

    for(x=1;x=1;)
    {

      setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem

      system("cls"); //Responsável por limpar a tela 

      printf("### Cartório da Ebac ###\n\n"); //inicio do menu
      printf("Escolha a opção desejada do menu\n\n");
      printf("\t1 - Registrar nomes\n");
      printf("\t2 - Consultar nomes\n");
      printf("\t3 - Deletar nomes\n\n");
      printf("\t4 - Sair do sistema\n\n");
      printf("Esse software é de livre uso dos alunos\n"); //fim do menu

      scanf("%d", &opcao); //armazenando a escolha do usuario

      system("cls");

      switch(opcao) //inicio da seleção
      {
         case 1:
         registro(); //Chamada de funções
         break; 

         case 2: 
         consulta();
         break; 

         case 3: 
         deletar();
         break; 

         case 4:
         printf("Obrigado por utilizar o sistema!\n");
         return 0;
         break; 

    
         default:
         printf("Essa opção não está disponível!\n");
         system("pause");
         break; 
      }

    }
}


