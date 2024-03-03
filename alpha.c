#include <stdio.h>
#include <string.h>

//리스트의 순서에 대응하는 알파벳의 숫자에 고유숫자를 저장한다. 다른거 입력시 wrong! 출력, 반복되거나 기능이 분리되는 부분은 함수로 빼보기
// 1. 유효성 판별, if문으로 입력받은게 아스키코드로 a(A)부터 z(Z)까지 있는지 판별
// 2. 입력받은 값을 문제상의 값으로 치환, 아스키코드를 활용해 무슨 자리에 무슨 알파벳이 있는지 찾기(ex:) a가 65이니까 빼기 65, 배열 크기를 애초에 52로 해서 굳이 다르게 코드 짤 필요가 없다, &연산자 활용)
// 3. 길이 26으로도 해보기 

void SumAlpha(int arr[], char arr2[],char arr3[]);

int main()
{
    int alpha[26] = {65, 49, 67, 51, 69, 53, 71, 55, 73, 57, 75, 79, 77, 48, 66, 50, 68, 52, 70, 54, 72, 56, 74, 78, 76, 80}; // 26개짜리 배열 생성
    char alpha2[26];
    char arr[100] = {0};
    printf("입력 값: ");
    scanf("%s", arr);
    SumAlpha(alpha, arr, alpha2);
    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        sum += alpha[i];
    }
    printf("sum: %d\n", sum);
    printf("alpha: %s",alpha2);
    return 0;
}

void SumAlpha(int arr[], char arr2[],char arr3[]) // 입력한 배열(arr) 안의 알파벳을 원래 배열과 대조하고, 대응하는 배열(alpha) 안의 숫자를 삭제
{
    int len = strlen(arr2);
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if ((arr2[j] >= 'A' && arr2[j] <= 'Z') || (arr2[j] >= 'a' && arr2[j] <= 'z')) // 알파벳인지 확인
            {
                if ((arr2[j] - 'A' == i) || (arr2[j] - 'a' == i)) // 해당 알파벳의 인덱스와 일치하는지 확인
                {
                    arr[i] = 0; 
                    arr3[i]=i+65; //arr3에 알파벳을 저장하려고 해봤음..
                }
            }
            else
            {
                printf("wrong!\n"); // 알파벳이 아닌 경우 종료
                break; 
            }
        }
    }
}
