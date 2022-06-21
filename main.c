/* * * * * * * * * * * * * * * * * * * * *
 *                                       *
 *  Aluno : Lucas Carvalho               *
 *  Data : 21/06/2022                    *
 *  Curso : 1° Período EAI               *
 *  Aula : Laboratório de Programação    *
 *                                       *
 * * * * * * * * * * * * * * * * * * * * */

/************************************************************
*                                                           *
*   Este programa faz o calculo da area ou perímetro de uma *
*   circunferência, baseado no raio informado pelo usuário. *
*                                                           *
*************************************************************/

#include <stdio.h>
#include <stdlib.h>

// variável criada para fazer a recursividade.
int e;

float calculo(float raio, char escolha)
{
    // define as variavéis que serão usadas para o cáculo.
    float pi, area, perim, a, p;
    pi = 3.14;
    // Interpreta a escolha do usuário
    switch(escolha)
    {
        case 'A':
        case 'a':
        // fórmula da área de uma circunferência.
        a = pi * (raio * raio);
        // mostra na tela o cálculo.
        printf(" Area: %.3f", a);
        // quebra o loop do programa (recursividade).
        e = 0;
        break;
        case 'P':
        case 'p':
        // fórmula do perímetro
        p = 2 * pi * raio;
        // mostra na tela o cálculo.
        printf(" Perimetro: %.3f", p);
        // quebra o loop do programa (recursividade).
        e = 0;
        break;
        // impede que o usuário escolha algo diferente do menu.
        default: printf(" Por favor, utilize apenas os itens do menu.");
    }
}

void main()
{
    // inicia o loop do programa.
    e = 1;
    // variável que armazena a escolha do usuário.
    float r;
    printf(" Por favor, digite o valor do raio: ");
    scanf(" %f", &r);
    // loop de recursividade.
    while(e)
    {
        // exclui a tecla "enter" do buffer.
        getchar();
        printf("\n O que deseja calcular ? \n A - area \n P - perimetro \n");
        // chama a função passando o raio e a letra escolhida.
        calculo(r, getchar());
    }
}
