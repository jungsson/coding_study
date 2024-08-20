#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	printf("The double quotation mark is \".\n"); //"의 이스케이프 시퀀스는 \".
	printf("The single quotation mark is \'.\n"); //'의 이스케이프 시퀀스는 \'.
	printf("Character A is \'A\'.\n");
	printf("To represent a double quotation mark, use the escape sequence \\\"."); //\의 이스케이프 시퀀스는 \\.
}
