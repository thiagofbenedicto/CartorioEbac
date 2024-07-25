#include <stdio.h> //biblioteca de comunicação com o usurio
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string 

int registro()
{
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];

    printf("Digite o CPF a ser cadastrado: ");
    scanf("%s", cpf);

    strcpy(arquivo, cpf); //Responsável por criar os valores das string 

    FILE *file; // Cria o arquivo no banco de dados
    file = fopen(arquivo, "w");
    fprintf(file,cpf); //Salvo o valor da variável
    fclose(file); // fecha o arquivo

    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);

    printf("Digite o nome a ser cadastrado: ");
    scanf("%s",nome);

    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);

    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);

    printf("Digite o nome o sobrenome cadastrado: ");
    scanf("%s",sobrenome);

    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);

    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);

    printf("Digite o nome o cargo cadastrado: ");
    scanf("%s",cargo);

    file = fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);

    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);

    system("pause"); 
}

int consulta()
{
    printf("Você escolheu consultar os nomes!\n");
    system("pause");
}

int deletar()
{
    printf("Você escolheu deletar os nomes!\n");
    system("pause");
}

int main()
{
    int opcao=0; //Definindo variáveis
    int laco=1;
    for(laco=1;laco==1;)
    {
        system("cls");
        
        setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
        
        printf("### Loja da Ebac ###\n\n"); //Início do menu
        printf("Escolha a opção desejada do menu:\n\n");
        printf("\t1 - Registrar nomes\n");
        printf("\t1 - Consultar nomes\n");
        printf("\t1 - Deletar nomes\n");
        printf("Opção: "); //fim do menu
        
        printf("Esse software é de livre uso de Thiago Benedicto\n");
        
        
        scanf("%d", &opcao); //armazenado a escolha do usuário
        
        system("cls");
        
        switch(opcao)
        {
            case 1:
                printf("Você escolheu o registro nomes!\n");
                system("pause");
                break;
                
            case 2:
                printf("Você escolheu consultar nomes!\n");
                system("pause");
                break;
                
            case 3:
                printf("Você escolheu deletar nomes!\n");
                system("pause");
                break;
                
            case 4:
                printf("Essa opção não está disponível!\n");
                system("pause");
                break;
                
        } //fim da seleção
    }
}