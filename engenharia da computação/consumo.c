
/*Escreva um programa para determinar a quantidade de litros
 de combustível gastos em uma viagem por um automóvel que faz 12 km/litro.
 Para isso, sabe-se que o tempo gasto na viagem é de 35 min e a velocidade
 média do automóvel é 80 km/h.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
  float velocidade = 80;
  float consumo= 12;
  float tempoMinutos = 35;
  float tempohoras;
  float distancia;
  float litrosconsumidos;
  //converter os minutos para horas
 
  tempohoras= tempoMinutos/60;
 
 //calcular a distancia = velocidade * tempo
 
 distancia = velocidade * tempohoras;
 
 //calcular a quantidade de litros consumidos = distancia / consumo
 
 litrosconsumidos= distancia/consumo;

printf("litros consumidos:%.2f", litrosconsumidos);

    return 0;
}
