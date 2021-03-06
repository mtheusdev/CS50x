/* Matheus Henrique dos Santos, https://github.com/mtheusdev  UDESC CCT CS50X - HARVARD*/
#include <cs50.h>
#include <stdio.h>


/* Contrução de um componente do cenario de um dos jogos mais famosos do mundo
Mario World
Neste algoritmo desenharemos meia piramide com hash's "#" atraves de um calculo de matriz*/
void desenhaPiramide(int n);


int main(void)
{
    int height = 0;

    do
    {
        height = get_int("Height: "); // apenas uma verificação
    }
    while (!(height >= 1 && height <= 8));

    desenhaPiramide(height);
}


void desenhaPiramide(int n) // desenha piramide
{
    for (int i = 0; i < n; i++)
    {
      
        for (int k = n - i - 2; k >= 0; k--)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
