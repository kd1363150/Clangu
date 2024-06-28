#include<stdio.h>
main()
{
	char moji;
	moji = 'A'; /*Aの文字コードを入れる*/
	printf("moji = %c\n", moji);
	printf("小文字に変換： % c\n", moji+32);
}