#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int fun(char *str)
{
    char buffer[12];

    strcpy(buffer, str);

    return 1;
}

int main(int argc, char **argv)
{

    char str[517];

    FILE *malfile; 

    malfile = fopen("malfile", "r");

    fread(str, sizeof(char), 517, malfile);

    fun(str);

    printf("\nBuffer Overflow was not exploited.");

    return 1;
}
