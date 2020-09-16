//2. Construa uma estrutura aluno com nome, número de matrícula e curso. 
//Leia do usuário asinformaçõesde 5 alunos e 
//armazene num vetor dessa estrutura. Imprima os dados na tela.
//feito por Wanessa de Souza Barros - 12/05/2020
#include <stdio.h>
#include <string.h>
struct aluno {
	char nome[40];
	int nr_matric;
	char curso[40];
};

int main () {
	struct aluno p1, p2,p3,p4,p5;
	struct aluno *p, *x; //ponteiro
	//
	printf ("digite os dados para pessoa 1:\n");
	printf ("nome: ");
	scanf ("%s", &p1.nome);
	printf ("numero de matricula: ");
	scanf ("%d", &p1.nr_matric);
	printf ("curso: ");
	scanf ("%s", &p1.curso);
	//
	printf ("digite os dados para pessoa 2:\n");
	printf ("nome: ");
	scanf ("%s", &p2.nome);
	printf ("numero de matricula: ");
	scanf ("%d", &p2.nr_matric);
	printf ("curso: ");
	scanf ("%s", &p2.curso);
	//
		//
	printf ("digite os dados para pessoa 3:\n");
	printf ("nome: ");
	scanf ("%s", &p3.nome);
	printf ("numero de matricula: ");
	scanf ("%d", &p3.nr_matric);
	printf ("curso: ");
	scanf ("%s", &p3.curso);//
		//
	printf ("digite os dados para pessoa 4:\n");
	printf ("nome: ");
	scanf ("%s", &p4.nome);
	printf ("numero de matricula: ");
	scanf ("%d", &p4.nr_matric);
	printf ("curso: ");
	scanf ("%s", &p4.curso);
	//
		//
	printf ("digite os dados para pessoa 5:\n");
	printf ("nome: ");
	scanf ("%s", &p5.nome);
	printf ("numero de matricula: ");
	scanf ("%d", &p5.nr_matric);
	printf ("curso: ");
	scanf ("%s", &p5.curso);
	//
	printf("\n*** DADOS DOS ALUNOS: ***");
	printf("\nAluno 1: Nome: %s\nNumero de matricula:%d\nCurso:%s",p1.nome,p1.nr_matric,p1.curso);
	printf("\nAluno 2: Nome: %s\nNumero de matricula:%d\nCurso:%s",p2.nome,p2.nr_matric,p2.curso);
	printf("\nAluno 3: Nome: %s\nNumero de matricula:%d\nCurso:%s",p3.nome,p3.nr_matric,p3.curso);
	printf("\nAluno 4: Nome: %s\nNumero de matricula:%d\nCurso:%s",p4.nome,p4.nr_matric,p4.curso);
	printf("\nAluno 5: Nome: %s\nNumero de matricula:%d\nCurso:%s",p5.nome,p5.nr_matric,p5.curso);
	return 0;
}
