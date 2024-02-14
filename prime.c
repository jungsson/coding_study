#include <stdio.h>

int main(void)
{ 
    int input = 0, n = 1;
    printf("input = ");
    scanf("%d",&input);

    while(1)
    { 
        n+=1;
        if(n==input)
            break;
        if(input%n==0)
        {
            printf("%d is not prime :(\n",input);
            break;
        }
        else
        {
            printf("%d is prime!\n",input);
            break;
        }

    }

}