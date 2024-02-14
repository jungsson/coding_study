#include <stdio.h>

int main(void)
{
    printf("두 개의 정수 입력:\n");
    int n1 = 0, n2 = 0, i = 0, j = 0;
    while(1)
    {
        scanf("%d",&n1);
        if(n1==0)
            break;
        scanf("%d",&n2);
        if(n2 == 0)
            break; 
 
        i = n1;
        i--;
        if(n1%i==0)
            if(n2%i==0)
                break;
        j++;
        if(j%n1==0)
            if(j%n2==0)
                break;

        printf("두 수의 최대공약수: %d\n",i);
        printf("두 수의 최소공배수: %d\n", j);
    }


}

