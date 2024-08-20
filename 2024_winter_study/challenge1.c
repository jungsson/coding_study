#include <stdio.h>

int main()
{
    int str[10] = {0, };
    int str2[10] = {0, }; //짝수만 저장
    int str3[10] = {0, }; //홀수만 저장
    printf("총 10개의 숫자 입력\n");
    for(int i = 0; i<10; i++)
    {
        int num = 0;
        printf("입력: ");
        scanf("%d", &num);
        str[i] = num;
    }
    for(int j = 0; j<10; j++)
    {
        if(str[j]%2==0)
        {
            str2[j]= str[j]; //str2에 짝수 저장
        }
        else
        {
            str3[j]=str[j]; //str3에 홀수 저장
        }
    }
    printf("홀수 출력:");
    for(int t = 0; t<10; t++)
    {
        if(str3[t]!=0)
        {
            if(t==10)
            {
                printf("%d",str3[t]);
                break;
            }
            printf("%d, ",str3[t]);
        }
    }
    printf("\n");
    printf("짝수 출력:");
    for(int t = 0; t<10; t++)
    {
        if(str2[t]!=0)
        {
            if(t==10)   //쉼표를 못지웠읍니다..
            {
                printf("%d\n",str2[t]);
                break;
            }
            printf("%d, ",str2[t]);
        }
    }
    printf("\n");
}
