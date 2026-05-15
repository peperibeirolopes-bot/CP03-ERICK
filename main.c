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