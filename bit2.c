#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char *code_str = getenv("CODE");
    unsigned char byte = (unsigned char)strtol(code_str, NULL, 16);
    unsigned char hat = (byte >> 2) & 0x01;
    if (hat == 1)
        printf("ha\n");
    else
        printf("nh\n");
    return 0;
}