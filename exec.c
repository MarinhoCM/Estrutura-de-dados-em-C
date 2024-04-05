#include <stdio.h>
#include <locale.h>

/*
1. Escreva um programa que cadastre o nome, a matrícula e duas notas de 5 alunos.
1.1 Em seguida imprima a matrícula, o nome e a média de cada um deles.
2. Crie uma struct para controlar ações de uma bolsa de valores com as seguintes informações:
   	• Nome da empresa
   	• Área de atuação da empresa
   	• Valor atual da ação (em reais)
   	• Valor anterior
   	• Variação da ação em porcentagem (double), ou seja, quanto a ação cresceu ou caiu
     desde a abertura da bolsa no dia.

2.2 Faça um programa que:
	a) Preencha os campos da struct do exercício anterior
	b) Imprima os campos da struct do exercício anterior
	c) Com um laço, preencha 3 structs (vetor de structs)
	
3.
*/

struct BolsaDeValores{
	char nome_empresa[50];
	char area_atuacao[50];
	float valor_atual_acao, valor_antigo_acao;
	double variacao_acao;	
};

struct Aluno{
	char nome[50];
	int matricula;
	float primeira_nota;
	float segunda_nota;
};

void cadastrar_alunos(struct Aluno alunos[]){
	int i;
	float media;
	
	for(i=0; i < 5; i++){
        printf("Cadastro do aluno %d:\n", i+1);
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

void imprime_alunos_cadastrados(struct Aluno alunos[]){
	int i;
	
	for (i=0; i < 5; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nota 1: %.2f\n", alunos[i].primeira_nota);
        printf("Nota 2: %.2f\n", alunos[i].segunda_nota);
        printf("Media: %.2f\n", (alunos[i].primeira_nota + alunos[i].segunda_nota) / 2);
    }
}

void first(){
	struct Aluno alunos[5];
			
	cadastrar_alunos(alunos);
	imprime_alunos_cadastrados(alunos);
}

void popular_bolsa(struct BolsaDeValores bolsa_de_valores[]){
	int i;
	
	for(i=0;i<3;i++){
		printf("Nome da empresa %d: ", i+1);
		scanf("%d", &bolsa_de_valores[i].nome_empresa);
		printf("Área de atuação: ");
		scanf("%d", &bolsa_de_valores[i].area_atuacao);
		printf("Valor atual da ação: ");
		scanf("%d", &bolsa_de_valores[i].valor_atual_acao);
		printf("Valor anterior da ação: ");
		scanf("%d", &bolsa_de_valores[i].valor_antigo_acao);	
	}
}

void second(){
	struct BolsaDeValores bolsa_de_valores[3];
	
	popular_bolsa(bolsa_de_valores);
	
}

int main(){
	setlocale(LC_ALL, "");
//	first();
	second();
	return 0;	
}
