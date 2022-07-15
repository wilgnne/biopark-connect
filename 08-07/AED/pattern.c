#include "stdio.h"

int main(int argc, char const *argv[])
{

    printf("A)\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    printf("B)\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j >= i)
                printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("C)\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j >= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    printf("D)\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i + j < 7)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("E)\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j == 0 || j == 7 || i == 0 || i == 7)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    printf("F)\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == 0 || i == 7 || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    printf("G)\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == 0 || i == 7 || i + j == 7)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    printf("H)\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == 0 || i == 7 || i + j == 7 || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    printf("I)\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j == 0 || j == 7 || i == 0 || i == 7 || i + j == 7 || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
