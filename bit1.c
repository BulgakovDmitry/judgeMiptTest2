#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    unsigned char byte = (unsigned char)strtol(argv[1], NULL, 16);
    unsigned char gender = byte & 0x01;

    if (gender == 0) 
        printf("fe\n");
    else 
        printf("ma\n");
    
    return 0;
}