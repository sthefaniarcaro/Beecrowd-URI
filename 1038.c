/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

| CODIGO | ESPECIFICAÇÃO       | PREÇO  |
|--------|---------------------|--------|
| 1      | Cachorro Quente     | R$ 4.00|
| 2      | X-Salada            | R$ 4.50|
| 3      | X-Bacon             | R$ 5.00|
| 4      | Torrada simples     | R$ 2.00|
| 5      | Refrigerante        | R$ 1.50|


Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
*/

#include <stdio.h>
 
int main() {
 
    int c, q;
    scanf ("%d %d", &c, &q);
    
    if (c ==1){
        printf("Total: R$ %.2f\n", (float)q*4);
    } else
    if (c == 2) {
        printf ("Total: R$ %.2f\n", (float)q*4.5);
    } else
    if (c == 3){
        printf("Total: R$ %.2f\n", (float)q*5);
    } else
     if (c == 4) {
        printf ("Total: R$ %.2f\n", (float)q*2);
    } else
     if (c == 5) {
        printf ("Total: R$ %.2f\n", (float)q*1.50);
    } 
 
    return 0;
}