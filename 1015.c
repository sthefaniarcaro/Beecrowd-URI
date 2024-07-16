/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais, segundo a fórmula:

Distancia = sqrt((x2-x1)² + (y2 - y1)²)

Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, considerando 4 casas decimais.
*/

#include <stdio.h>
#include <math.h>
 
int main() {
 
 float x1, x2, y1, y2, d;
 scanf ("%f %f %f %f", &x1, &y1, &x2, &y2);
 
 d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
 
 printf("%.4f\n", d);
    return 0;
}