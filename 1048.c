/*
A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:

| Salário            | Percentual de Reajuste |
|--------------------|------------------------|
| 0 – 400.00         | 15%                    |
| 400.01 – 800.00    | 12%                    |
| 800.01 – 1200.00   | 10%                    |
| 1200.01 – 2000.00  | 7%                     |
| Acima de 2000.00   | 4%                     |

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste (ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho, conforme exemplo abaixo.
*/

#include <stdio.h>
 
int main() {
   
   float sal,novo;
   
   scanf("%f", &sal);
   
   if (sal <= 400){
       novo = sal + (sal*15/100);
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",novo,(novo-sal));
   } else
   if (sal > 400 && sal <= 800){
       novo = sal + (sal*12/100);
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",novo,(novo-sal));
   } else
   if (sal > 800 && sal <= 1200){
       novo = sal + (sal*10/100);
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",novo,(novo-sal));
   } else
   if (sal > 1200 && sal <= 2000){
       novo = sal + (sal*7/100);
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",novo,(novo-sal));
   } else {
       novo = sal + (sal*4/100);
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",novo,(novo-sal));
   }
 
    return 0;
}