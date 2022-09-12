/**
 * @file imc.c
 * @author Jean Guilherme Freitas Fonseca
 * @brief  Tendo a Altura da pessoa definida como uma constante, calcule seu peso ideal utilizando a seguinte fórmula:
 *         peso ideal = 72.7 x altura – 58
 * @version 0.1
 * @date 2022-09-11
 * 
 * @copyright Copyright (c) 2022
 * */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //defina a altura como uma constante
   const float altura = 1.72;
   //calcule o seu peso ideal com a fórmula 72.7 * altura - 58
   float pesoideal= 72.2 * altura - 58;
   printf("Seu peso ideal é de: %.3f", pesoideal);
    return 0;
}
