/**
 * @file poupanca.c
 * @author Jean Guilherme Freitas Fonseca 
 * 
 * @version 0.1
 * @date 2022-09-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * Uma conta de caderneta de poupança foi aberta com um depósito de R$ 500,00. 
 * Imagine que esta conta é remunerada em 1% de juros ao mês. Qual será o valor da conta após três meses?
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float deposito= 500.00;
    float juros= 1; 
    float juroscalculo = juros/100;
    
    float valorpormes=deposito * juroscalculo + deposito;
    float valorpormes2 = valorpormes + deposito * juroscalculo; 
    float valorpormes3 = valorpormes2 + deposito * juroscalculo; 
    
    printf("o valor apó 3 meses é %.2f\n",valorpormes3);

    
    return 0;
}
