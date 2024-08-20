#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int j = 1;
    
    printf("문자열 입력: ");
    scanf("%s", str);
    
    int len = strlen(str);
    
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            j = 0;
            break;
        }
    }
    
    if (j == 1)
    {
        printf("회문 입니다.\n");
    }
    else
    {
        printf("회문이 아닙니다.\n");
    }
}
