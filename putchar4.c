#include <unistd.h>
#include <stdio.h>

void ft_is_negative(int n)
{
    if(n >= 0)
        printf("P\n");
    else
        printf("N\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    ft_is_negative(n);
    return 0;
}
