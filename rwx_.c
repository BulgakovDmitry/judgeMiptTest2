#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char a[10] = "rwxrwxrwx";
    char result[10] = {'-'};
    int key;
    scanf("%o", &key);

    for (int i = 0; i < 9; i++)
    {
        if (key&(1<<(9 - i - 1)))
            result[i] = a[i];
        else   
            result[i] = '-';
    }

    printf("%s", result);
    return 0;
}