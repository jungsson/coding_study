#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	int n1;
	char n2; //int, char형 변수 각각 선언
	scanf("%d", &n1); //입력받은 값을 int형 변수 n1에 저장
	n2 = n1; //char형 변수 n2에 n1값을 복사
	printf("(int->int) %d\n", n1);
	printf("(int->char->int) %d", n2);

}
