#include <stdio.h>

int main()
{
    int arr[10] = {0, };
    printf("총 10개의 숫자 입력: \n");
    for(int i = 0;i<10;i++)
    {
        int num = 0;
        printf("입력: ");
        scanf("%d",&num);
        if(num%2==0)
        {
            arr[9-i] = num;
        }
        else
        {
            arr[i] = num;
        }
    }
    printf("배열 요소의 출력: ");
    for(int j = 0; j<10; j++)
    {
        printf("%d ",arr[j]);
    }
}