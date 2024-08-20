#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	double a, b; //double형 변수 a,b 선언
	a = 4.200000; //a가 first number
	b = 5.100000; //b가 second number
	printf("first number: %f\n", a);
	printf("second number: %f\n", b);
	printf("sum: %f", a + b); //a,b를 더한 값 출력
}
