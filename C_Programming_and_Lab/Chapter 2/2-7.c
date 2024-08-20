#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	int n1;
	char n2; //int, char형 변수 각각 선언
	scanf("%c", &n2); //입력받은 알파벳을 char형 변수 n2에 저장
	n1 = n2 - 'a'; //입력받은 알파벳에 'a'를 빼면 몇번째 알파벳인지 알 수 있음
	printf("%c is the %dth lower case letter in the English alphabet.", n2, n1);
}
