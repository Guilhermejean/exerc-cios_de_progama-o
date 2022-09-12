/**
 * @file incrementob.c
 * @author Jean Guilherme Freitas Fonseca 
 * @brief Faça um programa com 2 variáveis, A e B, onde A terá o valor 40 e B terá o valor -1.
 *        Imprima o valor de A+B, A-B, AxB e A/B.
 *        Em seguida, faça B incrementar de uma unidade e repita as 4 operações.
 * @version 0.1
 * @date 2022-09-11
 * @copyright Copyright (c) 2022
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    /* A e B, onde A terá o valor 40 e B terá o valor -1 e imprima o valor de A+B, A-B, AxB e A/B.*/
    int A = 40;
    int B = -1;
    int AmaisB= A+B;
    printf("40+(-1)= %i\n", AmaisB);
    
    int AmenosB= A-B;
    printf(" 40 -(-1)= %i\n",AmenosB);
    
    int AvezesB = A*B;
    printf("40 * (-1)=%i\n", AvezesB);

    int AdivideB= A/B;
    printf("40 / (-1) =%i\n\n",AdivideB);

/*faça B incrementar de uma unidade e repita as 4 operações.*/
      int Bplus = B+B;
      
     int AmaisBplus= A + Bplus;
    printf("40+(-2)= %i\n", AmaisBplus);
    
    int AmenosBplus= A-Bplus;
    printf(" 40 -(-2)= %i\n",AmenosBplus);
    
    int AvezesBplus = A*Bplus;
    printf("40 * (-2)=%i\n", AvezesBplus);

    int AdivideBplus= A/Bplus;
    printf("40 / (-2) =%i\n",AdivideBplus);

    




}