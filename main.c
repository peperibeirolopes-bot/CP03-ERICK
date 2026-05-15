#include<stdio.h>
#include<stdlib.h>

float saldo = 1000;
int senha =  1234;

void consultarSaldo() {
    printf("\nSaldo atual: R$ %.2f\n", saldo);
}

void depositar() {
    float valor;