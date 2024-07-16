/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/

#include <stdio.h>
 
int main() {
 
   int N, h,s,m;
   
   scanf("%d", &N);
   h = N/3600;
   N = N%3600;
   m = N/60;
   N = N%60;
   s = N;
   
   printf ("%d:%d:%d\n",h,m,s);
 
    return 0;
}