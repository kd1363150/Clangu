#include <stdio.h>
main()
{
	int num, i;

	printf("数を入れて:");
	scanf("%d", &num);

	i = 1;

	while (i <= 10)
	{
		printf(" % d + % d = % d\n", num, i, num + 1);
		i++;
	}
}