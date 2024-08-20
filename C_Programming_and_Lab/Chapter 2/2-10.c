#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	char n1;
	scanf("%c", &n1); //char형 변수 n1에 입력받은 알파벳 대문자 저장
	char n2 = n1 + 32; //알파벳 대문자는 해당하는 소문자보다 아스키코드로 32만큼 작으므로 입력받은 소문자에 32을 더해주면 소문자로 바꿀 수 있음
	printf("%c", n2);
}
