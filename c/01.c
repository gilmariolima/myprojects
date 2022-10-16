#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char * nome;
    int idade;
    struct aluno * prox;
}aluno;

aluno * inicio = NULL;
aluno * fim = NULL;
int tam = 0;

void cadastrar(char * nome, int idade){
    aluno * novo = malloc(sizeof(aluno));
    novo->nome = nome;
    novo->idade = idade;
    novo->prox = NULL;

    if(inicio == NULL){
        inicio = novo;
        fim = novo;
    }else{
        fim->prox = novo;
        fim = novo;
    }
    tam++;
}

void ver(){
    aluno * aux = inicio;
    for(int i=0; i < tam; i++){
        printf("Nome: %s - Idade: %d\n", aux->nome, aux->idade);
        aux = aux->prox;
    }
}

int main(){
    cadastrar("gilmario", 20);
    cadastrar("sla", 21);
    cadastrar("tati", 18);
    cadastrar("oi", 10);
    ver();
    return 0;
}
