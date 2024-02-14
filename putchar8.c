#include <stdio.h>

void ft_print_combn(int n)
{
    int t = 1;
    for (int i = 0; i < n; i++) 
    {
        t *= 10;
    }
    
    for (int i = 0; i < t; i++) 
    {
        printf("%0*d ", n, i);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    ft_print_combn(n);
    return 0;
}
