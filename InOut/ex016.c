#include<stdio.h>
main()
{
	int su;

	printf("実数を入れて:");
	scanf("%d", &su);

	/*できれば小数点以下2桁で表示*/
	printf("2倍すると %.2f\n", su * 2.0);
	printf("3倍すると %.2f\n", su * 3.0);

}