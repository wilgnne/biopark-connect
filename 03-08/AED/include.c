#include "stdio.h"

int include(char string[], char find[]);

int main(int argc, char const *argv[])
{
    int index = include("eduardo wilg", "edu");

    printf("sub-string encontada na posicao %d\n", index);

    return 0;
}

int include(char string[], char find[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        int j = 0;
        for (; find[j] != '\0'; j++) {
            if (string[i + j] == '\0') return -1;
            if (string[i + j] != find[j]) break;
        }
        if (find[j] == '\0') return i;
    }

    return -1;
}
