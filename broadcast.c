#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>

void calculate_broadcast_address(const char *ip_str, const char *mask_str, char *broadcast_str) 
{
    struct in_addr ip, mask, broadcast;

    inet_pton(AF_INET, ip_str, &ip);
    inet_pton(AF_INET, mask_str, &mask);

    broadcast.s_addr = ip.s_addr | ~mask.s_addr;

    inet_ntop(AF_INET, &broadcast, broadcast_str, INET_ADDRSTRLEN);
}

int main() 
{
    char ip_str[INET_ADDRSTRLEN];
    char mask_str[INET_ADDRSTRLEN];
    char broadcast_str[INET_ADDRSTRLEN];

    scanf("%s", ip_str);
    scanf("%s", mask_str);

    calculate_broadcast_address(ip_str, mask_str, broadcast_str);

    printf("%s\n", broadcast_str);

    return 0;
}