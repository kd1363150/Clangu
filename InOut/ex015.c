#include<stdio.h>
main()
{
	int su1, su2, gokei;

	printf("1つ目の整数:");
	scanf("%d",&su1);

	printf("2つ目の整数:");
	scanf("%d",&su2);
	
	gokei = su1 + su2;
	printf("合計は %d です\n", gokei);
}