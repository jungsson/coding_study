#include <stdio.h>

int main(void)
{
    int input = 0, n = 0, i = 0;
    printf("입력 10진수:");
    scanf("%d",&input);

    while(1)
    {
        n++;
        i=0;
        printf("%d단\n",n);
        while(n<=input)
        {
            i++;
            printf("%d * %d = %d\n", n, i, n*i);
            if(i==n)
                break;

        }    
        if(n==input)
            break;
        printf("\n");    
    }
}