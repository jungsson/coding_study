#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	int n1;
	char n2; //int, char형 변수 각각 선언
	scanf("%c", &n2); //char형 변수 n1에 입력받은 값 저장
	n1 = n2 - 48; //0~9사이의 숫자는 아스키코드가 48~57이므로 입력받은 값에 48을 빼면 입력받은 숫자와 같은 숫자로 n1에 저장가능
	printf("(%%c) %c\n", n2); //%를 출력하기 위해 %%사용
	printf("(%%d) %d", n1); 
}
