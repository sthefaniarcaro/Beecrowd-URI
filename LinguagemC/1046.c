/*
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo.
*/

#include <stdio.h>
 
int main() {
 
    int inicio, fim, tempo;
    
    scanf("%d %d", &inicio, &fim);
    
    if (inicio == fim){
        printf("O JOGO DUROU 24 HORA(S)\n");
    } else
    if (inicio < fim){
        tempo = fim - inicio;
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    } else {
        tempo = 24 - inicio + fim;
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }
 
    return 0;
}