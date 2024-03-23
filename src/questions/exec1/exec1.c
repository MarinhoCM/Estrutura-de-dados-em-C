#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define TAMANHO_VETOR 10

void popularVet(int vetor[])
{
    srand((unsigned int)time(NULL));
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        vetor[i] = rand() % 101;
    }

    printf("Vetor populado com sucesso!\nVetor após ser populado:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
}

int encontrarMaiorElemento(int vetor[])
{
    int maior = vetor[0];
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    return maior;
}

int contarElementosPares(int vetor[])
{
    int i, contador = 0;
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            contador++;
        }
    }
    return contador;
}

int calcularSoma(int vetor[])
{
    int i, soma = 0;
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        soma += vetor[i];
    }
    return soma;
}

void imprimirOrdemInversa(int vetor[])
{
    int i;
    printf("Elementos na ordem inversa:\n");
    for (i = TAMANHO_VETOR - 1; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void ordenarVetorCrescente(int vetor[])
{
    int i, j, temp;
    for (i = 0; i < TAMANHO_VETOR - 1; i++)
    {
        for (j = 0; j < TAMANHO_VETOR - i - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    printf("Vetor ordenado em ordem crescente:\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int menu()
{
    int opcao;
    printf(
        "+--------------------------------------------------MENU-------------------------------------------------+\n"
        "\t01) Digite 1 - para criar um vetor com 10 números aleatórios\n"
        "\t02) Digite 2 - para mostrar o elemento de maior valor do vetOriginal\n"
        "\t03) Digite 3 - para contabilizar quantos elementos são pares no vetOriginal\n"
        "\t04) Digite 4 - para mostrar o valor do somatório dos elementos do vetOriginal\n"
        "\t05) Digite 5 - para mostrar os elementos do vetorOriginal na ordem inversa(O vetor deve ser invertido de verdade)\n"
        "\t06) Digite 6 - para ordenar o vetor crescentemente(Ordem crescente dos numeros)\n"
        "\t07) Digite 7 - para sair\n\n");
    printf("Escolha sua opção: ");
    scanf("%d", &opcao);
    return opcao;
}

int main()
{
    setlocale(LC_ALL, "");

    int vetorOriginal[TAMANHO_VETOR];
    int opcao, maior, contador, soma;

    do
    {
        opcao = menu();
        switch (opcao)
        {
        case 1:
            popularVet(vetorOriginal);
            break;
        case 2:
            maior = encontrarMaiorElemento(vetorOriginal);
            printf("O elemento com maior valor no vetor é %d\n", maior);
            break;
        case 3:
            contador = contarElementosPares(vetorOriginal);
            printf("Existem %d numeros pares dentro do vetor\n", contador);
            break;
        case 4:
            soma = calcularSoma(vetorOriginal);
            printf("A soma dos elementos do vetor é: %d\n", soma);
            break;
        case 5:
            imprimirOrdemInversa(vetorOriginal);
            break;
        case 6:
            ordenarVetorCrescente(vetorOriginal);
            break;
        case 7:
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        }
    } while (opcao != 7);
}
