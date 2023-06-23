//Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.

#include <stdio.h>
#include <string.h>

int main(){
    char nome[100], senha[100];

    printf("Informe o nome: ");
    fgets(nome, 100, stdin);

    printf("Informe a senha: ");
    fgets(senha, 100, stdin);

    while (!strcmp(nome, senha)) {
        printf("Senha não pode ser igual ao nome. Insira outra senha: ");
        fgets(senha, 100, stdin);
    }
    return 0;
}