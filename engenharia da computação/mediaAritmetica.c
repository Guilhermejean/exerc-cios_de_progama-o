/**
 * @file mediaAritmetica.c
 * @author Jean Guilherme Freitas Fonseca
 * @brief Calcule a média aritmética de 4 números reais que o usuário digitar. 
 *        Imprima a média na tela apenas com 2 casas decimais.
 * @version 0.1
 * @date 2022-09-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{   //Declare as variáveis
    int numeroReal,numeroReal2,numeroReal3,numeroReal4;
    //Obtenha o valor das variáveis
    printf("Digite 1 numeros:\n");
     scanf("%i",&numeroReal);
       printf("Digite mais um numero:\n");
     scanf("%i",&numeroReal2);
       printf("Digite mais um numero:\n");
     scanf("%i",&numeroReal3);
       printf("Digite o último numero numero:\n");
     scanf("%i",&numeroReal4);
     //obtenha a soma das variáveis
     float soma = numeroReal + numeroReal2 + numeroReal3 + numeroReal4;
     //realize a divisão 1
     
     float div = soma / 4;
     printf("a média é %.3f",div);
    
    return 0;
}
