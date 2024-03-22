#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu()
{
    int option;
    printf(
        "+--------------------------------------------------MENU-------------------------------------------------+\n"
        "\t01) Digite 1 - para criar um vetor com 10 números aleatórios\n"
        "\t02) Digite 2 - para mostrar o elemento de maior valor do vetOriginal\n"
        "\t03) Digite 3 - para contabilizar quantos elementos são pares no vetOriginal\n"
        "\t04) Digite 4 - para mostrar o valor do somatório dos elementos do vetOriginal\n"
        "\t05) Digite 5 - para mostrar os elementos do vetorOriginal na ordem inversa(O vetor deve ser invertido de verdade)\n"
        "\t06) Digite 6 - para ordenar o vetor crescentemente(Ordem crescente dos numeros)\n"
        "\t07) Digite 7 - para sair\n");
    scanf("%d", &option);

    return option;
}

int main()
{
    int option;
    setlocale(LC_ALL, "pt-br");
    do
    {
        option = menu();
        printf("Opção selecionada: %d", option);
    } while (option != 7);
}