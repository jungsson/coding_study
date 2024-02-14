#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d",&num);
    int arr1[100];
    for(int i = 0; i<num; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int j = 0; j<num; j++)
    {
        if(arr1[j]<arr1[j+1])
        {
            int tmp = 0;
            tmp = arr1[j];
            arr1[j] = arr1[j+1];
            arr1[j+1] = tmp;
        }
    }
    for(int k = 0; k<num; k++)
    {
        printf(arr1[k]);
        printf("\n");
    }

}