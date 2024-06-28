#include<stdio.h>
main()
{
	char su1,su2;
	su1= '5'; /*5の文字コードを入れる*/
	su2= '6'; /*6の文字コードを入れる*/
	printf("%c*%c=%d\n", su1,su2,(su1 - 0x30) * (su2 - 0x30));
}