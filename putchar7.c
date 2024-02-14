#include <stdio.h>

void ft_putnbr(int n)
{
     printf("%d\n",n);
}

int main()
{  
    int n = 0;
    scanf("%d",&n);
    ft_putnbr(n);
    return 0;
}