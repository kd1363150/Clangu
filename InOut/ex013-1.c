#include<stdio.h>
main()
{
	char su1,su2;
	su1= '5'; /*5�̕����R�[�h������*/
	su2= '6'; /*6�̕����R�[�h������*/
	printf("%c*%c=%d\n", su1,su2,(su1 - 0x30) * (su2 - 0x30));
}