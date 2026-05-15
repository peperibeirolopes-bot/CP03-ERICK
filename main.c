#include<stdio.h>
#include<stdlib.h>

float saldo = 1000;
int senha =  1234;

void consultarSaldo() {
    printf("\nSaldo atual: R$ %.2f\n", saldo);
}

void depositar() {
    float valor;
     printf("\nValor para deposito: R$ ");
    scanf("%f", &valor);

    if(valor > 0){
        saldo += valor;
        printf("Deposito realizado!\n");
    }else{
        printf("Valor invalido!\n");
    }
}

void sacar() {
    float valor;

    printf("\nValor para saque: R$ ");
    scanf("%f", &valor);

    if(valor <= 0){
        printf("Valor invalido!\n");
    }
    else if(valor > saldo){
        printf("Saldo insuficiente!\n");
    }
    else{
        saldo -= valor;
        printf("Saque realizado!\n");
    }
}

void alterarSenha() {
    int nova;

    printf("\nDigite a nova senha: ");
    scanf("%d", &nova);

    senha = nova;

    printf("Senha alterada com sucesso!\n");
}

int main() {

    int conta = 1234;
    int loginConta, loginSenha;
    int tentativas = 3;
    int opcao;

    printf("===== CAIXA ELETRONICO =====\n");

    while(tentativas > 0){

        printf("\nConta: ");
        scanf("%d",&loginConta);

        printf("Senha: ");
        scanf("%d",&loginSenha);

        if(loginConta == 1234 && loginSenha == senha){
            printf("\nLogin realizado!\n");
            break;
        }

        tentativas--;

        printf("Dados incorretos! Tentativas restantes: %d\n", tentativas);
    }
    
    if(tentativas == 0){
        printf("Conta bloqueada!\n");
        return 0;
    }

    do{

        printf("\n===== MENU =====\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Alterar senha\n");
        printf("0 - Sair\n");

        printf("Escolha: ");
        scanf("%d",&opcao);

        switch(opcao){

            case 1:
                consultarSaldo();
                break;

            case 2:
                depositar();
                break;

            case 3:
                sacar();
                break;

            case 4:
                alterarSenha();
                break;

            case 0:
                printf("Encerrando sistema...\n");
                break;
        }