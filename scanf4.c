#include <stdio.h>

int main(void)
{
    int n1 = 0, n2 = 0, i = 0, j = 0;
    while(1)
    {    
        printf("두 개의 정수 입력:\n");
        scanf("%d",&n1);
        if(n1==0)
            break;
        scanf("%d",&n2);
        if(n2 == 0)
            break;
        i = n1;
        j = 0;
        

        while(1)
        {
            i--;
            if(n1%i==0)
                if(n2%i==0)
                    break;



        }
        while(1)
        {
            j++;
            if(j%n1==0)
                if(j%n2==0)
                    break;

    }
    printf("GCD : %d\n",i);
    printf("LCM : %d\n", j);
    }
}