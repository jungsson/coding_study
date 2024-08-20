#include <stdio.h>

int main()
{
    int num;
    int n1;
    int n2 = 0; //n1 은 2로 나눈 몫, n2는 2로 나눈 나머지
    int str[1000] = {0};
    int idx = 0;
    printf("10진수 정수 입력: ");
    scanf("%d",&num);
    while(n1!=0)
    {
        n1 = num/2;
        n2 = num%2;
        num = n1;
        str[idx]=n2;
        idx++;
    }
    for(int i = idx-1;i>=0;i--)
    {
        printf("%d",str[i]);
    }
    printf("\n");
}
