#include <unistd.h>
#include <stdio.h>
void ft_print_comb(void)
{
for (int i = 0; i <= 7; i++) 
    {
        for (int j = i + 1; j <= 8; j++) 
        {
            for (int k = j + 1; k <= 9; k++) 
            {
                if(i == 7 && j == 8 && k == 9)
                {
                    printf("%d%d%d", i, j, k);
                    break;
                }
                printf("%d%d%d, ", i, j, k);
            }
        }
    }
    printf("\n");
}

int main() 
{
    ft_print_comb();
    return 0;
}