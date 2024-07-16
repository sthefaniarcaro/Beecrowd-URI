/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/

#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    
    printf ("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", n/100);
    n = n % 100; //recebe o resto da divisao de 100
    printf("%d nota(s) de R$ 50,00\n", n/50);
    n = n%50;
    printf("%d nota(s) de R$ 20,00\n", n/20);
    n = n%20;
    printf("%d nota(s) de R$ 10,00\n", n/10);
    n = n%10;
    printf("%d nota(s) de R$ 5,00\n", n/5);
    n = n%5;
    printf("%d nota(s) de R$ 2,00\n", n/2);
    n = n%2;
    printf("%d nota(s) de R$ 1,00\n", n/1);
 
    return 0;
}