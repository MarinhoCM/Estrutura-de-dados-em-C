#include <stdio.h>
#include <locale.h>

/*
1. Escreva um programa que cadastre o nome, a matr�cula e duas notas de 5 alunos.
1.1 Em seguida imprima a matr�cula, o nome e a m�dia de cada um deles.
2. Crie uma struct para controlar a��es de uma bolsa de valores com as seguintes informa��es:
   	� Nome da empresa
   	� �rea de atua��o da empresa
   	� Valor atual da a��o (em reais)
   	� Valor anterior
   	� Varia��o da a��o em porcentagem (double), ou seja, quanto a a��o cresceu ou caiu
     desde a abertura da bolsa no dia.

2.2 Fa�a um programa que:
	a) Preencha os campos da struct do exerc�cio anterior
	b) Imprima os campos da struct do exerc�cio anterior
	c) Com um la�o, preencha 3 structs (vetor de structs)
	
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
        printf("Matr�cula: ");
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
        printf("Matr�cula: %d\n", alunos[i].matricula);
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
		printf("�rea de atua��o: ");
		scanf("%d", &bolsa_de_valores[i].area_atuacao);
		printf("Valor atual da a��o: ");
		scanf("%d", &bolsa_de_valores[i].valor_atual_acao);
		printf("Valor anterior da a��o: ");
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
