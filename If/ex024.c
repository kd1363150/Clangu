#include<stdio.h>
main()
{
	char ch;
	printf("文字を入力:");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z') {
		printf("大文字です\n");
	}
	else {
		printf("そのほかの文字です\n");
	}
}