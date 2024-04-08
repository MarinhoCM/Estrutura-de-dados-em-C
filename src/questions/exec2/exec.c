#include <stdio.h>
#include <locale.h>

struct BolsaDeValores
{
	char nome_empresa[50];
	char area_atuacao[50];
	float valor_atual_acao;
	float valor_antigo_acao;
	double variacao_acao;
};

struct Aluno
{
	char nome[50];
	int matricula;
	float primeira_nota;
	float segunda_nota;
};

void cadastrar_alunos(struct Aluno alunos[])
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("Cadastro do aluno %d:\n", i + 1);
		printf("Nome: ");
		scanf("%s", alunos[i].nome);
		printf("Matrícula: ");
		scanf("%d", &alunos[i].matricula);
		printf("Nota 1: ");
		scanf("%f", &alunos[i].primeira_nota);
		printf("Nota 2: ");
		scanf(" %f", &alunos[i].segunda_nota);
	}
	printf("\nDados dos alunos cadastrados:\n");
}

void imprime_alunos_cadastrados(struct Aluno alunos[])
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("\nAluno %d:\n", i + 1);
		printf("Nome: %s\n", alunos[i].nome);
		printf("Matrícula: %d\n", alunos[i].matricula);
		printf("Nota 1: %.2f\n", alunos[i].primeira_nota);
		printf("Nota 2: %.2f\n", alunos[i].segunda_nota);
		printf("Media: %.2f\n", (alunos[i].primeira_nota + alunos[i].segunda_nota) / 2);
	}
}

void cadastrar_bolsa(struct BolsaDeValores bolsa_de_valores[])
{
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Nome da empresa %d: ", i + 1);
		scanf("%s", bolsa_de_valores[i].nome_empresa);
		printf("Área de atuação: ");
		scanf("%s", bolsa_de_valores[i].area_atuacao);
		printf("Valor atual da ação: ");
		scanf("%f", &bolsa_de_valores[i].valor_atual_acao);
		printf("Valor anterior da ação: ");
		scanf("%f", &bolsa_de_valores[i].valor_antigo_acao);
	}
}

void imprimir_bolsa_de_valores(struct BolsaDeValores bolsa_de_valores[])
{
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("\nBolsa #%d\n", i + 1);
		printf("\nNome da empresa: %s\n", bolsa_de_valores[i].nome_empresa);
		printf("\nÁrea de atuação: %s\n", bolsa_de_valores[i].area_atuacao);
		printf("\nValor atual da ação: %.2f\n", bolsa_de_valores[i].valor_atual_acao);
		printf("\nValor anterior da ação: %.2f\n", bolsa_de_valores[i].valor_antigo_acao);
	}
}

int menu()
{
	int option;
	printf("\n+================================================================+\n");
	printf("|\t<--Selecione qual programa deseja executar-->\t\t|\n");
	printf("|\t\t1 -- Cadastro de alunos\t\t\t\t|\n");
	printf("|\t\t2 -- Bolsa de valores\t\t\t\t|\n");
	printf("+================================================================+\n");
	printf("----------> ");
	scanf(" %d", &option);
	printf("Iniciando programa %d...\n\n", option);
	return option;
}

void first()
{
	struct Aluno alunos[5];
	cadastrar_alunos(alunos);
	imprime_alunos_cadastrados(alunos);
}

void second()
{
	struct BolsaDeValores bolsa_de_valores[3];
	cadastrar_bolsa(bolsa_de_valores);
	imprimir_bolsa_de_valores(bolsa_de_valores);
}

int main()
{
	setlocale(LC_ALL, "");
	if (menu() == 1)
		first();
	else
		second();
	return 0;
}
