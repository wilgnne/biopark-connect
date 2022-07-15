1. Qual é o tipo de variável correta para armazenar as seguintes informações:

    a. A idade. 
    
        int

    b. O número de estrelas na galáxia.

        long int

    c. A quantidade de chuva média no mês de fevereiro.

        float

    d. A área do seu quintal.

        double


2. Indique a diferença entre as seguintes atribuições:

    ```c
    char a;
    a = '6';   // Atribui o caractere que representa o número 6 a variável a.
    a = 6;     // Atribui o número 6 a variável a. Ou seja, o caractere 6 da tabela ASCII é atribuído a variável a.
    ```

6. Faça um programa que leia os valores correspondentes aos três lados a, b e c de um
triângulo. O programa deve então calcular a área A do triângulo utilizando a fórmula de
Heron:
A = √s(s − a)(s − b))(s − c)
onde
s = (a + b + c) / 2
Ao calcular a área pela fórmula de Heron e a fórmula da questão anterior, em alguns casos
obtemos valores ligeiramente diferentes. Qual o motivo disto?

    Devido ao maior numero de operações, há um acumulo de arredondamento.

1. A solução abaixo está correta para classificar um número como par e menor que 100, ou
par e maior ou igual a 100, etc, como no exemplo visto em aula?

    ```c
    #include <stdio.h>

    int main(){
        int a;

        printf("Digite um número inteiro:");
        scanf("%d", &a);

        if( ( a % 2 == 0) && (a<100) )
            printf("O número é par e menor que 100\n");
        else if( a>=100 )
            printf("O número é par e maior ou igual a 100\n");
            
        if( ( a % 2 != 0) && (a<100) )
            printf("O número é ímpar e menor que 100\n");
        else if (a>=100)
            printf("O número é ímpar e maior que 100\n");
    }
    ```

    Esta incorreto, pois o primeiro else if é executado quando o valor é impar e maior ou igual a 100, o mesmo ocorre com o segundo else if.

