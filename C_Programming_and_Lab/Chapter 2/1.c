#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	int sum;
	int a, b; //a는 첫번째로 입력받는 정수, b는 두번째로 입력받는 정수
	scanf("%d", &a);
	scanf("%d", &b);
	sum = a + b; //변수 sum은 a,b를 더한 값
	printf("sum: %d", sum);
}
