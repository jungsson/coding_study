#include <unistd.h>
#include <stdio.h>

void ft_print_comb2(void)
{
    for (int i = 0; i<=98; i++)
    {
        for (int j = i+1; j<=99; j++)
        {
            if(i == 98 && j==99)
            {
                printf("%02d %02d", i, j);
                break;
            }
            printf("%02d %02d ,", i, j);
        }
    }
    printf("\n");
}

int main()
{
    ft_print_comb2();
    return 0;
}