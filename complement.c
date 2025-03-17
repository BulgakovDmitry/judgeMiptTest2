#include <stdio.h>

int main() 
{
    int A;
    scanf("%d", &A);

    unsigned char byte = (unsigned char)A;

    for (int i = 7; i >= 0; i--) 
        printf("%d", (byte >> i) & 1);
    
    printf("\n");

    return 0;
}