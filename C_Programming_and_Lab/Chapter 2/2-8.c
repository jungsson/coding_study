#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	int n1;
	char n2; //int, char형 변수 각각 선언
	scanf("%d", &n1); //입력받은 값 int형 변수 n1에 저장
	n2 = n1 + 65; //알파벳 대문자 A~Z는 아스키코드로 65~90이므로 입력받은 정수에 65를 더하면 해당 번째의 알파벳을 알 수 있다
	printf("The %dth upper case letter in the English alphabet is %c.", n1, n2);
}
