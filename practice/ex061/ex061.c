#include <stdio.h>
#define MAX 100

typedef struct aluno {
    char nome[81];
    int mat;
    char end[121];
    char tel[21];
} Aluno;

typedef struct aluno *PAluno;
PAluno tab[MAX];

void inicializa (void) {
    int i;
    for (i=0; i<MAX; i++)
    tab[i] = NULL;
}

void preenche (int i) {
    if (tab[i]==NULL)
        tab[i] = (PAluno)malloc(sizeof(Aluno));
        
    printf("Entre com o nome:");
    scanf(" %80[^\n]", tab[i]->nome);
    printf("Entre com a matricula:");
    scanf("%d", &tab[i]->mat);
    printf("Entre com o endereco:");
    scanf(" %120[^\n]", tab[i]->end);
    printf("Entre com o telefone:");
    scanf(" %20[^\n]", tab[i]->tel);
}

void remove (int i) {
    if (tab[i] != NULL) {
        free(tab[i]);
        tab[i] = NULL;
    }  
}
int main(void) {

    return 0;
}