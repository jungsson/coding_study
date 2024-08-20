#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	int n1;
	unsigned char n2; //int, unsigned char형 변수 각각 선언
	scanf("%d", &n1); //int형 변수 n1에 입력받은 값 저장
	n2 = n1; //unsigned형 변수 n2에 n1값 복사
	printf("(int->int) %d\n", n1);
	printf("(int->unsigned char->int) %d", n2);
	
}
