#include<stdio.h>
main()
{
	int i, j;

	printf("���́H");
	scanf("%d", &i);
	do {
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
		i++;
	} while (i > 0);
}
