#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int cont = 0;
    char string[100];
    
    fgets(string, 100, stdin);

    for (int i = 0; i < 100; i++)
    {
        if (string[i] == ' ' && string[i+1] != ' ')
        {
            cont++;
        };
    };

    printf("%d", cont+1);
    
    return 0;
    
};