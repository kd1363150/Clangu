#include<stdio.h>
main()
{
	char su;
	su = '1'; /*1の文字コードを代入する*/
	printf("su = %c\n", su);/*文字(%c)として表示*/
	printf("数値に変換： %d\n", su - 0x30);/*数値(%d)として表示*/
}