#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	char n1; //char형 변수 n1 선언
	scanf("%c", &n1); //n1에 입력받은 소문자 저장
	char n2 = n1 - 32; //알파벳 소문자는 그에 해당하는 알파벳 대문자보다 아스키코드로 32 작으므로 n1에 n2를 빼주면 소문자를 대문자로 바꿀 수 있음
	printf("%c", n2);
}
