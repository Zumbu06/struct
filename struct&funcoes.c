#include <stdio.h>
#include <string.h>

struct Livro {
    int codigo;
    char titulo[100];
    char autor[50];
    int ano;
};

void cadastrarLivro(FILE *arquivo);
void listarLivros(FILE *arquivo);
void editarLivro(FILE *arquivo);
void excluirLivro(FILE *arquivo);
void buscarLivro(FILE *arquivo);