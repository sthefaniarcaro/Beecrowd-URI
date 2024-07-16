/*
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
*/

#include <stdio.h>
 
int main() {
 
    int h1, m1, h2, m2, tempo;
    
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    
    tempo = ((h2*60)+m2)-((h1*60)+m1);
        
    if(tempo <= 0){
        tempo += 1440; // 24*60
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(tempo/60),(tempo%60));
    
    return 0;
}